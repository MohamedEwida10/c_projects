#ifndef _D_STACK_H
#define _D_STACK_H

#include <stdlib.h>
#include "std_types.h"

typedef enum
{
    R_NOK = 0,
    R_OK,
    STACK_FULL,
    STACK_NULL_POINTER,
    STACK_EMPTY
} StackStatus_t;

typedef struct D_Stack
{
    void **StackArray;
    sint32 elemcount;
    sint32 StackTop;
    uint32 StackMAxSize;
} Stack_t;

/**
  *@brief   his algorithm creates an empty stack by allocating the head
            structure and the array from dynamic memory.
  *@param   (maxsize)  max numbers of elements
  *@param   (ret_status) Status returned while performing this operation
  *@retval  Pointer to the allocated stack in the heap
  */
Stack_t *CreateStack(uint32 StackMAxSize, StackStatus_t *ret);

/**
 * @brief  This function releases all memory to the heap.
 * @param  (stack_obj) pointer to stack head structure
 * @param  (ret_status) Status returned while performing this operation
 * @retval NULL
 */
Stack_t *DestroyStack(Stack_t *StackObj, StackStatus_t *ret);

/**
 * @brief This function pushes an item onto the stack.
 * @param  (stack_obj) pointer to stack head structure
 * @param  (itemPtr) pointer to be inserted
 * @retval Status returned while performing this operation
 */
StackStatus_t StackPush(Stack_t *StackObj, void *ElemPtr);

/**
 * @brief This function pops the item on the top of the stack.
 * @param  (stack_obj) pointer to stack head structure
 * @param  (ret_status) Status returned while performing this operation
 * @retval Pointer to user data if successful, NULL if underflow
 */
void *StackPop(Stack_t *StackObj, StackStatus_t *ret);

/**
  * @brief  This function retrieves the data from the top of the
            stack without changing the stack.
  * @param  (stack_obj) pointer to stack head structure
  * @param  (ret_status) Status returned while performing this operation
  * @retval Pointer to user data if successful, NULL if underflow
  */
void *StackTop(Stack_t *StackObj, StackStatus_t *ret);

/**
 * @brief  Returns number of elements in stack.
 * @param  (stack_obj) pointer to stack head structure
 * @param  (stack_count) number of elements in stack.
 * @retval Status returned while performing this operation
 */
StackStatus_t StackCount(Stack_t *StackObj, uint32 *StackCount);

#endif