#include <stdio.h>

int main() {
  int n = 5;
  int x[5] = {44, 33, 11, 22, 55}; 
  //array of size 5

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (x[j] > x[j + 1]) {
        //checking and swapping adjacent elements when left_elem > right_elem
        int temp = x[j];
        x[j] = x[j + 1];
        x[j + 1] = temp;
      }
    }
  }
  printf("Array after implementing Bubble sort: ");
  for (int i = 0; i < n; i++) {
    printf("%d  ", x[i]);
  }
  return 0;
}