#include <stdio.h>
#include <stdlib.h>

unsigned int MaxArray(unsigned int array[],int length);

int main()
{
    int size,maxmum;
    printf("enter the size of the array \n");
    scanf("%d",&size);

    int array[size];

    for(int index=0;index<size;index++)
    {
        scanf("%d",&array[index]);
    }
    maxmum = MaxArray(array,size);

    printf("The maxmum num in the array : %d \n",maxmum);

    return 0;
}
unsigned int MaxArray(unsigned int array[],int length)
{
    int maxmum=array[0],index=1;
    while(index<length)
    {
        if(maxmum<array[index])
        {
            maxmum=array[index];
        }
        index++;
    }
    return maxmum;
}

