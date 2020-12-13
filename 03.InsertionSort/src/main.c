/* 
  main.c - insertion sort app
  created by @alimpk

  Copyright (C) 2019-2020 Binary Hardware Group.
  This file is part of Testapps, Binary Hardware Group Toolchains test sources.
  You should have received a copy of the GNU General Public License along with
  Testapps;
*/

#include "stdio.h"
// Insertion sort in C

#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  printArray(data, size);
  insertionSort(data, size);
  printArray(data, size);
}

