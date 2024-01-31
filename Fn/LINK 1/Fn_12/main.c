#include <stdio.h>
#include <stdlib.h>

int *maxmin(int array[], int size);

int main()
{
    int *result;

    int size;
    printf("enter the size of the array that you want \n");
    scanf("%d",&size);

    int array[size];
    for(int counter=0;counter<size;counter++)
    {
        scanf("%d",&array[counter]);
    }

    result=maxmin(array,size);

    printf("the minmum num in the array = %d \n",*result++);
    printf("the maxmum num in the array = %d \n",*result);



    return 0;
}
int *maxmin(int array[], int size)
{
    static int result[2];
    result[0]=array[0];
    result[1]=array[0];

    int count;
    for(count=1;count<size;count++)
    {
        if(result[1] < array[count])
        {
            result[1]=array[count];
        }
        if(result[0] > array[count])
        {
            result[0]=array[count];
        }
    }
    return result;
}
