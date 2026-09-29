// estudo do bubble sort

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } 
}


void bubbleSortOtimizado(int arr[], int n) {
    bool trocou;
    for (int i = 0; i < n - 1; i++) {
        trocou = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = true; 
            }
        }
        
        if (!trocou) {
            break; 
        }
    }
}


void imprimirVetor(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Vetor original: ");
    imprimirVetor(arr, n);

    bubbleSortOtimizado(arr, n);

    printf("Vetor ordenado:  ");
    imprimirVetor(arr, n);

    return 0;
}
