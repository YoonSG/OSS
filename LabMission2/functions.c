#include "header.h"

void printArray(int* array, int len)
{
    printf("Elements of Array :");
    for(int i=0; i<len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Size of Array: %d\n", len);
    return;
}

int copyArray(int* dest, int len_dest, int* src, int len_src)
{
    // dest : destination array
    // src : source array

    if(len_dest < len_src)
    {
        return -1;
    }

    for(int i=0; i<len_src; i++)
    {
        dest[i] = src[i];
    }

    return 0;
}

int sortArray(int* array, int len)
{
    // It is allowed to implement your own algorithm here

    // The following algorithm is "Insertion Sort"
    int key;
    for(int j=1; j<len; j++)
    {
        key = array[j];
        int i = j-1;
        while( (i>=0) && (array[i]>key) )
        {
            array[i+1] = array[i];
            i = i-1;
        }
        array[i + 1] = key;
    }
}

int checkInputRange(int input, int maxVal)
{
    if ( (input > 0) && (input < maxVal) )
        return 0;
    return -1;
}

int findHighest(int m, int* array, int len)
{
    int result = 0;
    sortArray(array, len);
    result = array[len-m];    
    return result;
}

double calVariance(int* array, int len)
{
    double mean = calMean(array, len);
    double result;
    for(int i = 0; i < len; i++){
	double s = (array[i] * array[i]);
    	result += s / len;
    }
	result = result - (mean * mean);	

	    return result;
}

double calMean(int* array, int len)
{
    int sum = 0;
    for(int i=0; i<len; i++)
    {
	    sum += array[i];
    }
    return (double)((double)sum/len);
}
