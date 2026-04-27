/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3 , Structures and Dynamic Arrays 
 *   Hari dan Tanggal    : Senin, 27 April 2026
 *   Nama (NIM)          : Isnaya Zalfa Kamila (13224028)
 *   Nama File           : nomor1.c
 *   Deskripsi           : Program menghitung jumlah elemen dalam array, mengurutkan array, dan menentukan median 
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Fungsi untuk menghitung jumlah elemen dalam array 
 void Count_Array (int arr[], int N){
    printf("COUNT %d ", N);
 }
// FUNGSI UNTUK SORTING ARRAY 
void tukar (int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void urutan (int arr[], int N){  //Fungsi untuk mengurutkan array menggunakan bubble sort
    int i,j ;
    bool swapped;
    for (i = 0; i < N-1; i++){
        swapped = false;
        for (j = 0; j < N-i-1; j++){
            if (arr[j] > arr[j+1]){
                tukar(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped){
            break;
        }
    }
}
void printSortedArray (int arr[], int N){ //Fungsi untuk mencetak array yang sudah diurutkan
    int i ;
    printf("SORTED ");
    for (i = 0; i < N; i++){  
        printf("%d ", arr[i]);   
    }
}

void Median (int*arr, int N){
    if (N % 2 == 0){
        float median = (arr[N/2 - 1] + arr[N/2]) / 2.0;
        printf("MEDIAN %.2f ", median);
    } else {
        printf("MEDIAN %d ", arr[N/2]);
    }
}

int main (){
    int N;
    scanf("%d", &N);
    int arr[N];
    int *arr = (int*)malloc(N * sizeof(int)); // Alokasi memori untuk array dinamis

    while (N!= -1 ){
        scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    }


    Count_Array(arr, N); // Memanggil fungsi untuk menghitung jumlah elemen
    urutan(arr, N); // Memanggil fungsi untuk mengurutkan array
    printSortedArray(arr, N); // Memanggil fungsi untuk mencetak array yang sudah diurutkan
    Median(arr, N); // Memanggil fungsi untuk menentukan median

    return 0;

}
