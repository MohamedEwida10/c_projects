#include <stdlib.h>
#include <stdio.h>

#include "D_Stack.h"

uint32 Stack1_Size = 0, Stack1_Count = 0;
Stack_t *Stack1 = NULL;
void *Stack1_Return = NULL;

uint32 Var1 = 0;


int main()
{
    StackStatus_t Stack1_Status = R_NOK;

    printf("Enter number of stack 1 elements : ");
    scanf("%i", &Stack1_Size);
    Stack1 = CreateStack(Stack1_Size, &Stack1_Status);
    if(Stack1){
        printf("Stack 1 created \n");
    }
for(int i = 0;i<3;i++)
{
scanf("%d",Var1);
Stack1_Status = StackPush(Stack1, &Var1);
printf("Stack1_Status = %i \n", Stack1_Status);
}
for(int i = 0;i<3;i++)
{
scanf("%d",Var1);
Stack1_Return = StackPop(Stack1, &Stack1_Status);
printf("Stack1_Status = %i \n", Stack1_Status);
}



printf("***************************************** \n");
    Stack1_Status = StackPush(Stack1, &Var1); printf("Stack1_Status = %i \n", Stack1_Status);
    Stack1_Status = StackPush(Stack1, &Var2); printf("Stack1_Status = %i \n", Stack1_Status);
    Stack1_Status = StackPush(Stack1, &Var3); printf("Stack1_Status = %i \n", Stack1_Status);
    Stack1_Status = StackPush(Stack1, &Var3); printf("Stack1_Status = %i \n", Stack1_Status);

    printf("***************************************** \n");
    Stack1_Status = StackCount(Stack1, &Stack1_Count); printf("Stack1_Status = %i \n", Stack1_Status);
    printf("Stack1_Count = %i \n", Stack1_Count);
printf("***************************************** \n");
    Stack1_Return = StackTop(Stack1, &Stack1_Status); printf("Stack1_Status = %i \n", Stack1_Status);
    printf("StackTop = %c \n", *((uint8 *)Stack1_Return));
printf("***************************************** \n");
    Stack1_Return = StackPop(Stack1, &Stack1_Status); printf("Stack1_Status = %i \n", Stack1_Status);
    printf("PopStack = %c \n", *((uint8 *)Stack1_Return));
    Stack1_Return = StackPop(Stack1, &Stack1_Status); printf("Stack1_Status = %i \n", Stack1_Status);
    printf("PopStack = %f \n", *((float32 *)Stack1_Return));
    Stack1_Return = StackPop(Stack1, &Stack1_Status); printf("Stack1_Status = %i \n", Stack1_Status);
    printf("PopStack = 0x%X\n", *((uint32 *)Stack1_Return));
printf("***************************************** \n");
    Stack1_Status = StackCount(Stack1, &Stack1_Count); printf("Stack1_Status = %i \n", Stack1_Status);
    printf("Stack1_Count = %i \n", Stack1_Count);
printf("***************************************** \n");
    Stack1_Return = StackPop(Stack1, &Stack1_Status); printf("Stack1_Status = %i \n", Stack1_Status);
printf("***************************************** \n");
    Stack1 = DestroyStack(Stack1, &Stack1_Status);
    if(!Stack1){
        printf("Stack 1 destroyed \n");
    }
    return 0;
}

