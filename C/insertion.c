#include "sort.h"

int insertion_sort(int *a, int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < i; j++){
      if (a[i] < a[j]){
        swap(&a[i], &a[j]);
      }
    }
  }
  return 0;
}
