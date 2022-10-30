// #pragma once
#ifndef _SORT_HEADER
#define _SORT_HEADER
// #include "sort.cpp"

// Print primitive datatypes
/**
 * @brief Print primitive datatypes
 * @param input Any primitive datatype as input
*/
void print(auto input);

void swap(int *xp, int *yp);
void merge(int arr[], int l, int m, int r);
/**
 * @brief Sorts an array of integers using merge sort algorithm
 * @param array The array to be sorted
 * @param low The lower index of the array
 * @param high The higher index of the array
 */
void mergeSort(int arr[], int l, int r);

/**
 * @brief Sorts an array of integers using the insertion sort algorithm.
 * @param array The array to sort.
 * @param size The size of the array.
 */
void insertionSort(int arr[], int n);

/**
 * @brief Sorts an array of integers using the bubble sort algorithm.
 * @param array The array to sort.
 * @param size The size of the array.
 */
void bubbleSort(int arr[], int n);

/**
 * @brief Sorts an array of integers using the selection sort algorithm.
 * @param array The array to sort.
 * @param size The size of the array.
 */
void selectionSort(int arr[], int n);

/**
 * @brief Sorts an array of integers using the quick sort algorithm.
 * @param array The array to sort.
 * @param low The lowest index of the array.
 * @param high The highest index of the array.
 */
void quickSort(int arr[], int low, int high);

#endif // !_SORT_HEADER