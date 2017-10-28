#include "sort.h"

int selection_sort(int *a, int n){
  
  for (int i = 0; i < n; i++){
    int min_pos = i;    
    for (int j = i; j < n; j++){
      if (a[min_pos] > a[j])
        min_pos = j;
    }
    //printf("i: %d, a[i]:%d, a[min_pos]: %d\n", i, a[i], a[min_pos]);
    if (i != min_pos)
      swap(&a[i], &a[min_pos]);
  }
  return 0;
}
