//
//  main.cpp
//  Mahasiswa
//
//  Created by adit3klan on 18/06/20.
//  Copyright © 2020 adit3klan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printArray(int array[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void BubbleSort(int array[], int n) {
    int i, j;
    for(i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if(array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}
int main() {
    int arrayNumber[45] = {22, 34, 91, 2, 10, 22, 13, 88, 66, 35};
    int n = sizeof(arrayNumber)/sizeof(arrayNumber[0]);
    printf("Adhitya Musthofa \n");
    printf("NRP: 2103187091 \n");
    printf("Data sebelum sorting: \n");
    printArray(arrayNumber, n);
    BubbleSort(arrayNumber, n);
    printf("\n Data setelah sorting: \n");
    printArray(arrayNumber, n);
}
