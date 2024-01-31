#include "stack_ds.h"
#include <stdio.h>
#include <stdlib.h>

static return_state_t StackIsEmpty(stack_ds_t *stack);
static return_state_t StackIsFull(stack_ds_t *stack);

/***********************************************/
return_state_t Stack_INTI(stack_ds_t *stack) {
  return_state_t ret = R_NOK;
  if (stack == NULL) {
    ret = R_NOK;
  } else {
    stack->stack_pointer = -1;
    ret = R_OK;
  }

  return ret;
}
return_state_t Stack_PUSH(stack_ds_t *stack, uint32 value) {
  return_state_t ret = R_NOK;
  if ((stack == NULL) || (STACK_FULL == StackIsFull(stack))) {
#ifdef STACK_DEBUG
    printf("ERROR !!! the stack is full , can't push %i to the stack \n",
           value);
#endif
    ret = R_NOK;
  } else {
    stack->stack_pointer++;
    stack->data[stack->stack_pointer] = value;
#ifdef STACK_DEBUG
    printf("the value %i is pushed to the stack \n", value);
#endif
    ret = R_OK;
  }

  return ret;
}
return_state_t Stack_POP(stack_ds_t *stack, uint32 *value) {
  return_state_t ret = R_NOK;
  if ((stack == NULL) || (value == NULL) ||
      (STACK_EMPTY == StackIsEmpty(stack))) {
#ifdef STACK_DEBUG
    printf("ERROR !!! the stack is empty  \n");
#endif
    ret = R_NOK;
  } else {
    *value = stack->data[stack->stack_pointer];
    stack->stack_pointer--;
#ifdef STACK_DEBUG
    printf("the value %i is poped to the stack \n", *value);
#endif

    ret = R_OK;
  }

  return ret;
}
return_state_t Stack_TOP(stack_ds_t *stack, uint32 *value) {
  return_state_t ret = R_NOK;
  if ((stack == NULL) || (value == NULL) ||
      (STACK_EMPTY == StackIsEmpty(stack))) {
#ifdef STACK_DEBUG
    printf("ERROR !!! the stack is empty  \n");
#endif
    ret = R_NOK;
  } else {
    *value = stack->data[stack->stack_pointer];
#ifdef STACK_DEBUG
    printf("the value %i is the top of the stack \n", *value);
#endif
    ret = R_OK;
  }

  return ret;
}
return_state_t Stack_SIZE(stack_ds_t *stack, uint32 *size)
{
 return_state_t ret = R_NOK;
  if ((stack == NULL) || (size == NULL) ) {
#ifdef STACK_DEBUG
    printf("ERROR !!!  \n");
#endif
    ret = R_NOK;
  } else {
    *size = stack->stack_pointer +1;
    #ifdef STACK_DEBUG
    printf("the size of the stack = %i  \n", *size);
    #endif
     ret = R_OK;
  }
  return ret;
}
return_state_t Stack_DISP(stack_ds_t *stack)
{
return_state_t ret = R_NOK;
sint32 counter = 0;
 if (( stack == NULL) || (STACK_EMPTY == StackIsEmpty(stack) )) {
    #ifdef STACK_DEBUG
        printf("ERROR !!!  \n");
    #endif
    ret = R_NOK;
  } else {

printf("the data : ");
for(counter=stack->stack_pointer ; counter>= zero; counter--)
{
  #ifdef STACK_DEBUG
        printf("%i \t", stack->data[counter]);
    #endif
  
}
printf("\n");
ret = R_OK;
}
return ret;
}


/***********************************************/
static return_state_t StackIsEmpty(stack_ds_t *stack) {
  if (-1 == stack->stack_pointer) {
    return STACK_EMPTY;
  } else {
    return STACK_NOT_FULL;
  }
}
static return_state_t StackIsFull(stack_ds_t *stack) {
  if ((MAX_SIZE - 1) == stack->stack_pointer) {
    return STACK_FULL;
  } else {
    return STACK_NOT_FULL;
  }
}