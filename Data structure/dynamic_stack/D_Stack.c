#include "D_Stack.h"


static uint8 StackIsFull(Stack_t* StackObj);
static uint8 StackIsEmpty(Stack_t* StackObj);

Stack_t *CreateStack(uint32 StackMAxSize, StackStatus_t *ret)
{
    Stack_t *my_stack = NULL;
    if(NULL == ret)
    {
        *ret= STACK_NULL_POINTER;
        my_stack = NULL;
    }
    else
    {
        my_stack =(Stack_t *)malloc(sizeof(Stack_t));
        if(!my_stack)
        {
            *ret=R_NOK;
            my_stack= NULL;
        }
        else
        {
            my_stack->StackMAxSize = StackMAxSize;
            my_stack->StackTop = -1;
            my_stack->elemcount = 0;
            my_stack->StackArray = (void **)calloc(StackMAxSize, sizeof(void *));
            if(!my_stack->StackArray)
            {
                free(my_stack);
                *ret=R_NOK;
                my_stack= NULL;
            }
            else
            {
                *ret=R_OK;
            }
        }
    }


return my_stack;
}

Stack_t *DestroyStack(Stack_t *StackObj, StackStatus_t *ret)
{
    if((NULL == ret)  || (NULL ==StackObj))
    {
        *ret= STACK_NULL_POINTER;
        
    }
    else
    {
       free(StackObj->StackArray);
       free(StackObj);
       *ret= R_OK;
    }
return NULL;
}

StackStatus_t StackPush(Stack_t *StackObj, void *ElemPtr)
{
    StackStatus_t ret = R_NOK;
    if((NULL == ElemPtr)  || (NULL ==StackObj))
    {
        ret = STACK_NULL_POINTER;
    }
    else
    {
        if(StackIsFull(StackObj))
        {
            ret = STACK_FULL;
        }
        else
        {
            (StackObj->StackTop)++;
            StackObj->StackArray[StackObj->StackTop] = ElemPtr;
            (StackObj->elemcount)++;
             ret = R_OK;
        }
        
    }

return ret;
}

void *StackPop(Stack_t *StackObj, StackStatus_t *ret)
{
    void *PopData =NULL;
    if((NULL == ret)  || (NULL == StackObj))
    {
        *ret= STACK_NULL_POINTER;
        PopData=NULL;
    }
    else
    {
        if(StackIsEmpty(StackObj))
        {
        *ret= STACK_EMPTY;
        PopData=NULL;
        }
        else
        {
            PopData = StackObj->StackArray[StackObj->StackTop];
            (StackObj->StackTop)--;
            (StackObj->elemcount)--;
            *ret = R_OK;
        }
    }
return PopData;
}

void *StackTop(Stack_t *StackObj, StackStatus_t *ret)
{
    void *PopData =NULL;
    if((NULL == ret)  || (NULL == StackObj))
    {
        *ret= STACK_NULL_POINTER;
        PopData=NULL;
    }
    else
    {
        if(StackIsEmpty(StackObj))
        {
            *ret= STACK_EMPTY;
            PopData=NULL;
        }
        else
        {
        PopData = StackObj->StackArray[StackObj->StackTop];
       *ret = R_OK;
        }
    }
return PopData;
       
    }


StackStatus_t StackCount(Stack_t *StackObj, uint32 *StackCount)
{
    StackStatus_t ret = R_NOK;
    if((NULL == StackCount)  || (NULL == StackObj))
    {
        ret= STACK_NULL_POINTER;
    }
    else
    {
        *StackCount =StackObj->elemcount;
        ret = R_OK;
    }
return ret;
}




static uint8 StackIsFull(Stack_t* StackObj)
{
return (StackObj->StackMAxSize == StackObj->elemcount);
}

static uint8 StackIsEmpty(Stack_t* StackObj)
{
return (StackObj->elemcount == 0);
}









