/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void permutar_elegante(int v[], int n) {
  quickSort(v, 0, n-1);


}

int dif_absoluta(int a, int b) {
  return abs(a-b);
}

int calc_soma_elegante(int v[], int n) {
  int k, sum = 0;
  for (k = 0; k < (n-1); k++) {
    sum += dif_absoluta(v[k], v[k+1]);
  }
  return sum;
}

int main() {
  int t, n, i, j;
  scanf("%d", &t);
  for (i = 0; i < t; i++) {
    scanf("%d", &n);
    int a[n];
    for (j = 0; j < n; j++)
      scanf("%d", &a[j]);

  }
  return 0;
}
