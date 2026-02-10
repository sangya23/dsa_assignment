#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a=*b;
	*b=temp;
}

void heapify(int arr[], int n, int i, int isminheap)
{
	int large_or_small=i;
	int left=2*i + 1;
	int right=2*i+2;
	
	if (isminheap)
	{
		if(left<n && arr[left]<arr[large_or_small]) large_or_small=left;
		if(right<n && arr[right]<arr[large_or_small]) large_or_small=right;
	}
	else
	{
		if(left<n && arr[left]>arr[large_or_small]) large_or_small=left;
		if(right<n && arr[right]>arr[large_or_small]) large_or_small=right;
	}
	
	if(large_or_small!=i)
	{
		swap(&arr[i], &arr[large_or_small]);
		heapify(arr, n, large_or_small, isminheap);
	}
}

void buildheap(int arr[], int n, int isminheap)
{
	int start=(n/2)-1, i;
	
	for(i=start; i>=0; i--)
	{
		heapify(arr, n, i, isminheap);
	}
}

void displayheap(int arr[], int n)
{
	int i;
	for (i=0; i<n; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[]={12,11,13,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temparr[n];
	
	printf("Array before heapifying: ");
	displayheap(arr,n);
	
	int i;
	for(i=0;i<n;i++) temparr[i]=arr[i];
	
	buildheap(temparr,n,0);
	printf("Max heap array: ");
	displayheap(temparr,n);
	
	for (i=0;i<n;i++) temparr[i]=arr[i];
	buildheap(temparr,n,1);
	printf("Min heap array: ");
	displayheap(temparr,n);
	
	return 0;
}
