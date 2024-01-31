#ifndef _QUEUE_DS_H
#define _QUEUE_DS_H

#include "std_types.h"
#include <stdlib.h>

typedef struct Queue_DS
{
    void **QueueArray;
    sint32 QueueFront;
    sint32 QueueRear;
    sint32 QueueCount;
    uint32 QueueMaxSize;
} Queue_t;

typedef enum
{
    N_OK = 0,
    OK,
    Queue_IS_Full,
    Queue_IS_Empty,
    NULL_POINTER
} Return_State_t;

Queue_t * Queue_Creating(uint32 maxsize,Return_State_t *return_state);
Return_State_t EnQueue_Element(Queue_t *queue_obj, void *ElementPtr);
void *DeQueue_Element(Queue_t *queue_obj, Return_State_t *return_state);
void *QueueFront_Element(Queue_t *queue_obj, Return_State_t *return_state);
void *QueueRear_Element(Queue_t *queue_obj, Return_State_t *return_state);
Return_State_t Get_Queue_Count(Queue_t *queue_obj, uint32 *QueueCount);
Return_State_t Queue_Destroy(Queue_t *queue_obj);

#endif