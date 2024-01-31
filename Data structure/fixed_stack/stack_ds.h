#ifndef _STACK_DS_H
#define _STACK_DS_H

#include "std_types.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5
#define STACK_DEBUG

typedef struct stack {
  uint32 data[MAX_SIZE];
  sint32 stack_pointer;
} stack_ds_t;

typedef enum {
  R_NOK = 0,
  R_OK,
  STACK_EMPTY,
  STACK_FULL,
  STACK_NOT_FULL
} return_state_t;

/*
 *@ brief : initiolization of a fixed stack
 *@param  : pointer to the stack
 *@retval : state of the initiolization process
 */

return_state_t Stack_INTI(stack_ds_t *stack);

/*
 *@ brief : push the value to the fixed stack
 *@param  : pointer to the stack
 *@param  : the value that we push to the stack
 *@retval : state of the pushing process
 */
return_state_t Stack_PUSH(stack_ds_t *stack, uint32 value);

/*
 *@ brief : pop the value from the fixed stack
 *@param  : pointer to the stack
 *@param  : pointer to the value that we pop from the stack
 *@retval : state of the poping process
 */
return_state_t Stack_POP(stack_ds_t *stack, uint32 *value);

/*
 *@ brief : see the top value at the fixed stack
 *@param  : pointer to the stack
 *@param  : pointer to the top value
 *@retval : state of the process
 */
return_state_t Stack_TOP(stack_ds_t *stack, uint32 *value);
/*
 *@ brief : get the size of the fixed stack
 *@param  : pointer to the stack
 *@param  : pointer to the size
 *@retval : state of the process
 */
return_state_t Stack_SIZE(stack_ds_t *stack, uint32 *size);
/*
 *@ brief : display the fixed stack
 *@param  : pointer to the stack
 *@retval : state of the process
 */
return_state_t Stack_DISP(stack_ds_t *stack);

#endif