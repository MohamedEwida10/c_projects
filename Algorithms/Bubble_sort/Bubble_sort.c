#include<stdio.h>
#include<stdlib.h>


#define Max_Size 10

unsigned int my_array_1[Max_Size] = {2,1,5,9,6,7,0,3,8,4};
unsigned int my_array_2[Max_Size] = {0,1,2,3,4,5,6,7,8,9};

void swap(unsigned int *a, unsigned int *b);
void Print_Array(unsigned int array[],unsigned int array_length);
void Bubble_Sorting(unsigned int array[],unsigned int array_length);

int main()
{

Bubble_Sorting(my_array_1,Max_Size);
Print_Array(my_array_1,Max_Size);

    return 0;
}
void swap(unsigned int *a, unsigned int *b)
{
    unsigned int temp = *a;
    *a = *b;
    *b = temp;

}
void Print_Array(unsigned int array[],unsigned int array_length)
{
    unsigned int counter = 0;
    for(counter;counter<array_length;counter++)
    {
    printf("%i\t",array[counter]);
    }
    printf("\n");
}
void Bubble_Sorting(unsigned int array[],unsigned int array_length)
{
    unsigned int Bs_iteration_1 = 0, Bs_iteration_2 = 0;
    unsigned char flag = 0;

    for(Bs_iteration_1 =0;Bs_iteration_1 < array_length-1; Bs_iteration_1++)
    {
        for(Bs_iteration_2=0;Bs_iteration_2 < array_length-1-Bs_iteration_1;Bs_iteration_2++)
        {
            if(array[Bs_iteration_2] > array[Bs_iteration_2+1])
            {
                swap(&array[Bs_iteration_2],&array[Bs_iteration_2+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            {
                return;            
            }

    }


}
