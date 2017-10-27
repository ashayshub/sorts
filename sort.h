#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

// prints help and exits
// pointer to the filename
void help_opts(char *filename);

// sorts the array a in place using bubble sort
// *a = pointer to the input array
// n = number of elements in the array
int bubble_sort(int *a, int n);

// sorts the array a in place using selection sort
// *a = pointer to the input array
// n = number of elements in the array
int selection_sort(int *a, int n);

// swaps values at a and b
// pointer to a
// pointer to b
void swap(int *a, int *b);
