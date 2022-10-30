#include "sort.hpp"
// #include "sort.cpp"
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){

  if (argc < 3)
  {
    printf("Incorrect usage!\nUsage: %s filename algoname\n", argv[0]);
    return 1;
  }

  // Take the name of the file as command line input and take an array as input from the file
  FILE *fp;

  fp = fopen(argv[1], "r"); // Provide input here as 'input.txt'
  if (!fp) printf("Unable to open file %s", argv[1]);
  int size;
  fscanf(fp, "%d\n", &size);
  printf("Size: %d\n", size);

  int array[size];
  for (int i = 0; i < size; i++)
  {
    fscanf(fp, "%d ", &array[i]);
  }
  // Print the user input array
  printf("Array: ");
  for (int i = 0; i < size; i++) printf("%d ", array[i]);

  // Take input from command line to choose the sorting algorithm
  if (!strcmp(argv[2], "mergeSort"))
  {
    mergeSort(array, 0, size - 1);
  }
  else if (!strcmp(argv[2], "bubbleSort"))
  {
    bubbleSort(array, size - 1);
  }
  else if (!strcmp(argv[2], "insertionSort"))
  {
    insertionSort(array, size);
  }else if (!strcmp(argv[2], "selectionSort"))
  {
    selectionSort(array, size);
  }
  else if (!strcmp(argv[2], "quickSort"))
  {
    quickSort(array, 0, size - 1);
  }
  else
  {
    printf("Not a valid sorting algorithm. Exiting...\n");
    return 2;
  }
  fclose(fp);


  // printf("\nThe sorted array is: ");

  FILE *file = fopen(argv[3], "w");
  if (!file)
  {
    printf("Unable to open file\n");
  }

  int j = 0;
  while (j < size)
  {
    fprintf(file, "%d ", array[j++]);
  }
  fprintf(file, "\r\n");
  fclose(file);

  printf("\nTest print function:");

  int a = 10;
  print(a);

  printf("\nTest passed!\n");
  return 0;
}
