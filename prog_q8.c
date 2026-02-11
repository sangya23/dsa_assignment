#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int arr[], int n)
{
	int i;
    for (i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int n, int *comp, int *swap)
{
	int i, j;
    for (i=0; i< n-1; i++)
    {
        for (j=0; j< n-i-1; j++)
        {
            (*comp)++;
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
                (*swap)++;
            }
        }
    }
}


void selectionSort(int arr[], int n, int *comp, int *swap)
{
	int i, j;
    for (i=0; i<n-1; i++)
    {
        int min=i;
        for (j=i+1; j<n; j++)
        {
            (*comp)++;
            if (arr[j]<arr[min])
                min=j;
        }
        if (min!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
            (*swap)++;
        }
    }
}

void insertionSort(int arr[], int n, int *comp, int *swap)
{
	int i;
    for (i=1; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;

        while (j>=0)
        {
            (*comp)++;
            if (arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
                (*swap)++;
            }
            else
                break;
        }
        arr[j+1] = key;
    }
}


void merge(int arr[], int l, int m, int r, int *comp)
{
    int n1=m-l + 1;
    int n2=r-m;

    int L[n1], R[n2];
    int a, b;

    for (a=0; a<n1; a++)
        L[a] = arr[l+a];
    for (b=0; b<n2; b++)
        R[b]=arr[m+1+b];

    int i=0, j=0, k=l;

    while (i<n1 && j<n2)
    {
        (*comp)++;
        if (L[i]<=R[j])
            arr[k++]=L[i++];
        else
            arr[k++]=R[j++];
    }

    while (i<n1)
        arr[k++]=L[i++];

    while (j<n2)
        arr[k++]=R[j++];
}

void mergeSort(int arr[], int l, int r, int *comp)
{
    if (l<r)
    {
        int m=(l+r)/2;
        mergeSort(arr, l, m, comp);
        mergeSort(arr, m + 1, r, comp);
        merge(arr, l, m, r, comp);
    }
}

int main()
{
    int N;
    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N];
    srand(time(0));
    
    int i;
    for (i = 0; i < N; i++)
        arr[i]=rand()%1000+1;

    printf("\nNumbers before sorting:\n");
    printArray(arr, N);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");

    int choice;
    scanf("%d", &choice);

    int compare=0, swaps=0;

    switch (choice)
    {
        case 1:
            bubbleSort(arr, N, &compare, &swaps);
            break;
        case 2:
            selectionSort(arr, N, &compare, &swaps);
            break;
        case 3:
            insertionSort(arr, N, &compare, &swaps);
            break;
        case 4:
            mergeSort(arr, 0, N - 1, &compare);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("\nNumbers after sorting:\n");
    printArray(arr, N);

    printf("\nTotal Comparisons: %d\n", compare);
    if (choice != 4)
        printf("Total Swaps: %d\n", swaps);
    else
        printf("Swaps not applicable for Merge Sort.\n");

    return 0;
}

