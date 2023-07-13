# Data-Structures
#include <stdio.h>
void merge(int arr[],int a,int b,int c){
    //böl
    int n1 = b- a + 1;
    int n2 = c - b;
    int L[n1], M[n2];
//atama
    for (int i = 0; i < n1; i++)
        L[i] = arr[a+ i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[b+ 1 + j];
    int i, j, k;
    i = 0;
    j = 0;
    k = a;

    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}
// l first r end
void merget(int arr[], int l, int r) {
    if (l < r) {

        int m = l + (r - l) / 2;

        merget(arr, l, m);
        merget(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

// Print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program
int main() {
    int arr[] = {6, 3, 4,2,1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    merget(arr, 0, size - 1);

    printf("Sorted array: \n");
    printArray(arr, size);
}
