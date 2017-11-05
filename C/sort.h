#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
/*
prints help and exits
pointer to the filename
*/
void help_opts(char *filename);

/*
prints the contents of array
*a = pointer to the input array
n = number of elements in the array
*/
void print_array(int *a, int n);

/*
sorts the array a in place using bubble sort
*a = pointer to the input array
n = number of elements in the array
*/
int bubble_sort(int *a, int n);

/*
sorts the array a in place using selection sort
*a = pointer to the input array
n = number of elements in the array
*/
int selection_sort(int *a, int n);

/*
sorts the array a in place using insertion sort
*a = pointer to the input array
n = number of elements in the array
*/
int insertion_sort(int *a, int n);


/*
 sorts the array a in place using merge sort
*a = pointer to the input array
m = mid point of array
n = number of elements in the array
*/
int merge_sort(int *a, int m, int n);

/*
swaps values at a and b
pointer to a
pointer to b
*/
void swap(int *a, int *b);
