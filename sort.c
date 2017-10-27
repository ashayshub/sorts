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
  int i = -1;
  int a[] = {1, 232, 4, 32, 24, 5, 6, 77, 22};
  char c;
  
  while ((c = getopt (argc, argv, "habc:")) != -1) {
    switch (c)
      {
      case 'a':
        i = 1;
        printf("Executing Bubble sort\n");
        bubble_sort(&a[0], sizeof(a)/sizeof(a[0]));
        break;
        
      case 'b':
        i = 1;
        printf("Executing Selection sort\n");
        selection_sort(&a[0], sizeof(a)/sizeof(a[0]));
        break;

      case 'h':
        i = 1;
        help_opts(argv[0]);
        exit(0);
        
      default:
        printf("Unrecognised option.\n");
        exit(1);
      }
  }
  
  if (i == -1){
    printf("Error: Input options are mandatory\n\n");
    help_opts(argv[0]);
    exit(1);
  }
    
  printf("\n");
  printf("Input array follows\n");
  for (int i=0; i < sizeof(a)/sizeof(a[0]); i++){
    printf("%d\n", a[i]);
  }

  printf("\n");

  printf("Sorted list follows: \n");
  for (int i=0; i < sizeof(a)/sizeof(a[0]); i++){
    printf("%d\n", a[i]);
  }
  return errno;
}
