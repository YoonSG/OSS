#include <stdio.h>
#include <stdlib.h>

void printArray(int* array, int len);
int copyArray(int* dest, int len_dest, int* src, int len_src);
int sortArray(int* array, int len);
int checkInputRange(int input, int maxVal);
int findHighest(int m, int* array, int len);
double calVariance(int* array, int len);
double calMean(int* array, int len);
