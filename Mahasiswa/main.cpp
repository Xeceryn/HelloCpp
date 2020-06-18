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
    Mhs temp = *xp;
    *yp = *xp;
    *yp = temp;
}
void printArrayStruct(Mhs array[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        cout << "Data Mahasiswa" << endl;
        cout << "--------------" << endl;
        cout << "Nama: " << array[i].nama << endl;
        cout << "Jurusan: " << array[i].jurusan << endl;
        cout << "IPK: " << array[i].ipk << endl;
    }
    printf("\n");
}
void BubbleSortStruct(Mhs array[], int n) {
    int i, j;
    bool swaped;
    for(i = 0; i < n-1; i++) {
        swaped = false;
        for (j = 0; j < n - i-1; j++) {
            if(array[j].ipk > array[j + 1].ipk) {
                swapStruct(&array[j], &array[j + 1]);
                swaped = true;
            }
        }
        if(swaped == false) {
            break;
        }
    }
}
int main() {
    Mhs arrayMahasiswa[] = {
        {"Achmad", "TELKOM", 2.2},
        {"Musthofa", "IT", 3.4},
        {"Adhitya", "RPL", 4.3}
    };
    int n = sizeof(arrayMahasiswa)/sizeof(arrayMahasiswa[0]);
    printf("Sebelum sorting \n");
    printArrayStruct(arrayMahasiswa, n);
    BubbleSortStruct(arrayMahasiswa, n);
    printf("\nSesudah sorting \n");
    printArrayStruct(arrayMahasiswa, n);
    return 0;
}
