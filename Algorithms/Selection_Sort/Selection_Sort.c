#include<stdio.h>
#include<stdlib.h>


#define Max_Size 10

unsigned int my_array_1[Max_Size] = {2,1,5,9,6,7,0,3,8,4};

void Print_Array(unsigned int array[],unsigned int array_length);
void swap(unsigned int *a, unsigned int *b);
void Selection_Sort(unsigned int array[],unsigned int array_length);

int main()
{

Print_Array(my_array_1,Max_Size);
Selection_Sort(my_array_1,Max_Size);
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
void Selection_Sort(unsigned int array[],unsigned int array_length)
{
    unsigned int ssort_Iterator = 0;
    unsigned int compared_Iterator = 0;
    unsigned int Minmum = 0;

    for(ssort_Iterator = 0; ssort_Iterator < array_length-1;ssort_Iterator++)
    {
        Minmum = ssort_Iterator;
        for(compared_Iterator = ssort_Iterator+1 ;compared_Iterator <array_length;compared_Iterator++)
        {
            if(array[compared_Iterator] < array[Minmum])
            {
                Minmum = compared_Iterator;
            }
            else{/*nothing*/}

        }

        swap(&array[Minmum],&array[ssort_Iterator]);

    }



}


