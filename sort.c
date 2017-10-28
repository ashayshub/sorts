/*
 Author: Ashay Chitnis
 Date: 27 Oct 2017
 */

#include "sort.h"

void help_opts(char *filename){
  printf("Usage: %s -<opt>\n", filename);
  printf("options: a - bubble sort\n");
  printf("options: b - selection sort\n");
  printf("options: c - insertion sort\n");
  printf("options: d - merge sort\n");
  printf("options: e - quick sort\n");
  printf("options: f - heap sort\n");
  printf("\n");
  printf("Example, help: %s -h\n", filename);
}

int main(int argc, char **argv){
  int a[] = {1, 232, 4, 32, 24, 5, 6, 77, -12, 22, -43};
  char c;
  int n = sizeof(a)/sizeof(a[0]);
  
  if (argc != 2){
    printf("Error: Check usage\n\n");
    help_opts(argv[0]);
    printf("\n");
    exit(1);
  }
    
  printf("Input array follows: \n");
  print_array(&a[0], n);
  printf("\n");
  
  while ((c = getopt (argc, argv, "habcdef")) != -1) {
    switch (c)
      {
      case 'a':
        printf("Executing Bubble sort\n");
        bubble_sort(&a[0], n);
        break;
        
      case 'b':
        printf("Executing Selection sort\n");
        selection_sort(&a[0], n);
        break;

      case 'c':
        printf("Executing Insertion sort\n");
        insertion_sort(&a[0], n);
        break;

      case 'h':
        help_opts(argv[0]);
        exit(0);
        
      default:
        printf("Unrecognised option.\n");
        exit(1);
      }
  }
  
  printf("\n");
  printf("Sorted array follows: \n");
  print_array(&a[0], n);
  printf("\n");
  return errno;
}
