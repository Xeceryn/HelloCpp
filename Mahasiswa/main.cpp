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

typedef struct Mahasiswa {
    string nama;
    string jurusan;
    float ipk;
} Mhs;

void swapStruct(Mhs *xp, Mhs *yp) {
    Mhs temp= *xp;
    *xp=*yp;
    *yp=temp;
}
void printArrayStruct(Mhs array[], int size) {
    int i;
    for(i=0;i<size;i++) {
        cout << "Data Mahasiswa" <<endl;
        cout << "--------------" <<endl;
        cout << "Nama: " << array[i].nama <<endl;
        cout << "Jurusan: " << array[i].jurusan <<endl;
        cout << "IPK: " <<array[i].ipk <<endl;
    }
    printf("\n");
}
void insertionSortStruct(Mhs array[], int n) {
    int i, j;
    Mhs key;
    for(i=1;i<n;i++) {
        key = array[i];
        j = i - 1;
        
        while (j >= 0 && array[j].ipk > key.ipk) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}
int main() {
    Mhs arrayMhs[] = {
        {"Adhitya", "RPL", 3.5},
        {"Musthofa", "IT", 2.0},
        {"Achmad", "TELKOM", 5.0}
    };
    
    int n = sizeof(arrayMhs)/sizeof(arrayMhs[0]);
    printf("Data sebelum sorting: \n");
    printArrayStruct(arrayMhs, n);
    insertionSortStruct(arrayMhs, n);
    printf("\n Data setelah sorting: \n");
    printArrayStruct(arrayMhs, n);
    return 0;
}
