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
  printf("\n");
  printf("Example, help: %s -h\n", filename);
}

int main(int argc, char **argv){
  int a[] = {1, 232, 4, 32, 24, 5, 6, 77, 22};
  char c;

  if (argc != 2){
    printf("Error: Check usage\n\n");
    help_opts(argv[0]);
    exit(1);
  }
    
  print_array(&a[0], sizeof(a)/sizeof(a[0]));
  printf("\n");
  
  while ((c = getopt (argc, argv, "habc")) != -1) {
    switch (c)
      {
      case 'a':
        printf("Executing Bubble sort\n");
        bubble_sort(&a[0], sizeof(a)/sizeof(a[0]));
        break;
        
      case 'b':
        printf("Executing Selection sort\n");
        selection_sort(&a[0], sizeof(a)/sizeof(a[0]));
        break;

      case 'c':
        printf("Executing Selection sort\n");
        insertion_sort(&a[0], sizeof(a)/sizeof(a[0]));
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
  printf("Sorted list follows: \n");
  print_array(&a[0], sizeof(a)/sizeof(a[0]));
  printf("\n");
  return errno;
}
