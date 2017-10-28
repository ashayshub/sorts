#include "sort.h"

void print_array(int *a, int n){
  for (int i=0; i < n; i++){
    printf("%d\n", a[i]);
  }  
}

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
