#include<stdio.h>
#include<stdlib.h>


#define Max_Size 10

unsigned int my_array_1[Max_Size] = {2,1,5,9,6,7,0,3,8,4};

void Print_Array(unsigned int array[],unsigned int array_length);
void Isertation_sort(unsigned int array[],unsigned int array_length);

int main()
{

Print_Array(my_array_1,Max_Size);
Isertation_sort(my_array_1,Max_Size);
Print_Array(my_array_1,Max_Size);

return 0;
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
void Isertation_sort(unsigned int array[],unsigned int array_length)
{
    unsigned int Is_Iteration = 0;
    unsigned int Isertation_item = 0;
    signed int Compared_item_INdex = 0;

    for(Is_Iteration = 1; Is_Iteration <array_length ; Is_Iteration++)
    {
        Isertation_item = array[Is_Iteration];
        Compared_item_INdex = Is_Iteration-1;

        while ((Compared_item_INdex >= 0) && (Isertation_item < (array[Compared_item_INdex])))
        {
            array[Compared_item_INdex + 1]  = array[Compared_item_INdex];
            Compared_item_INdex--;
        }
        
        array[Compared_item_INdex+1] = Isertation_item;

    }

}


