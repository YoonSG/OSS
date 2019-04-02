#include "header.h"

int sortArray(int* array, int len)
{
    int key;
    for(int j=1; j<len; j++)
    {
        key = array[j];
        int i = j-1;
        while( (i>=0) && (array[i]<key) )
        {
            array[i+1] = array[i];
            i = i-1;
        }
        array[i+1] = key;
    }
}

double calVariance(int* array, int len)
{
    double mean = calMean(array, len);
    int sqSum = 0;
    for(int i=0; i<len; i++)
    {
        sqSum += array[i]*array[i];
    }
    return (double)((double)sqSum/len) - mean*mean;
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

int findRank(int score, int* array, int len)
{
    int rank = 1; 
    for(int i = 0; i < len; i++){
       if(score < array[i]){
           rank += 1;
       }
    }
    return rank;
}