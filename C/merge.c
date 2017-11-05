#include "sort.h"

//WIP
int merge_sort(int *a, int m, int n){
  m = n/2;
  if (m > 1){
    merge_sort(int *a, 0, m);
    merge_sort(int *a, m+1, n);
  }
  for(int i = 0; i<n; i++){
    if (a[i] > a[i+1])
      swap(&a[0], &a[m]);
  }
  merge(a, )
  return 0;
}
