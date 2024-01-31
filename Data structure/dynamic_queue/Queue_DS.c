#include "Queue_DS.h"
#include <stdlib.h>
#include<stdio.h>

static uint32 QueueIsFull(Queue_t *queue_obj);
static uint32 QueueIsEmpty(Queue_t *queue_obj);

static uint32 QueueIsFull(Queue_t *queue_obj)
{
    return (queue_obj->QueueCount == queue_obj->QueueMaxSize);
}
static uint32 QueueIsEmpty(Queue_t *queue_obj)
{
    return (0 == queue_obj->QueueCount);
}

Queue_t * Queue_Creating(uint32 maxsize,Return_State_t *return_state)
{
Queue_t *myQueue;
if(NULL == return_state)
{
    printf("ERROR POINTER ERROR !! \n");
    myQueue = NULL;
}
else
{
    myQueue = (Queue_t *)malloc(sizeof(Queue_t));
    if(NULL == myQueue)
    {
        *return_state = NULL_POINTER;
         myQueue = NULL;
    }
    else
    {
       myQueue->QueueArray =(void **)calloc(maxsize,sizeof(void *));
        if(NULL == (myQueue->QueueArray))
        {
            free(myQueue);
            *return_state =N_OK;
            myQueue = NULL;
        }
        else
        {
            myQueue->QueueCount = 0;
            myQueue->QueueFront = -1;
            myQueue->QueueRear  = -1;
            myQueue->QueueMaxSize = maxsize;
            *return_state= OK;
        }
        
    }
}
return myQueue;
}
Return_State_t EnQueue_Element(Queue_t *queue_obj, void *ElementPtr)
{
Return_State_t Return_State = N_OK;
if((NULL == queue_obj) || (NULL == ElementPtr))
{
    Return_State = NULL_POINTER;
}
else
{
    /* Validate if the queue is not full */
    if(QueueIsFull(queue_obj))
    {
        Return_State = Queue_IS_Full;
    }
    else
    {
        (queue_obj->QueueRear)++; /* Increment Queue Rear Index */
        if(queue_obj->QueueRear == queue_obj->QueueMaxSize) /* Queue wraps to element 0 (Circular Queue) */
        {
            queue_obj->QueueRear = 0;
        }
        else{/*nothing*/}
        queue_obj->QueueArray[queue_obj->QueueRear] = ElementPtr; /* Insert the input data in to the rear position */
        if(queue_obj->QueueCount == 0) /* validate if the queue was empty, (front and rear points to the first element) */
        {
            queue_obj->QueueCount = 1;
            queue_obj->QueueFront = 0;
        }
        else
        {
            (queue_obj->QueueCount)++; /* New element has been added to the Queue */
        }      
        Return_State = OK;
    }
    
}
return Return_State;
}
void *DeQueue_Element(Queue_t *queue_obj, Return_State_t *return_state)
{
void *DeQueue_data = NULL;
if((NULL == queue_obj) || (NULL == return_state))
{
    printf("ERROR POINTER ERROR !! \n");
    DeQueue_data = NULL;
}
else
{
    if(QueueIsEmpty(queue_obj))
    {
        *return_state = Queue_IS_Empty;
        DeQueue_data = NULL;
    }
    else
    {
        DeQueue_data = queue_obj->QueueArray[queue_obj->QueueFront];
        (queue_obj->QueueFront)++;
        if(queue_obj->QueueFront == queue_obj->QueueMaxSize)
        {
            queue_obj->QueueFront = 0;
        }
        else{/*nothing*/}
        if(queue_obj->QueueCount == 1)
        {
            queue_obj->QueueCount = 0;
            queue_obj->QueueFront = -1;
            queue_obj->QueueRear = -1;
        }
        else
        {
            (queue_obj->QueueCount)--; 
        }
        *return_state = OK;
    }
}
return DeQueue_data;
}
void *QueueFront_Element(Queue_t *queue_obj, Return_State_t *return_state)
{
    void *Queue_data = NULL;
    if((NULL == queue_obj) || (NULL == return_state))
    {
    printf("ERROR POINTER ERROR !! \n");
    Queue_data = NULL;
    }
    else
    {
        /* Check if the queue is empty */
        if(QueueIsEmpty(queue_obj))
        {
            *return_state= Queue_IS_Empty;
            Queue_data = NULL;
        }
        else /* Queue is not empty */
        {
            Queue_data = queue_obj->QueueArray[queue_obj->QueueFront];
            *return_state= OK;
        }

    }
return Queue_data;
}
void *QueueRear_Element(Queue_t *queue_obj, Return_State_t *return_state)
{
    void *Queue_data = NULL;
    if((NULL == queue_obj) || (NULL == return_state))
    {
    printf("ERROR POINTER ERROR !! \n");
    Queue_data = NULL;
    }
    else
    {
        /* Check if the queue is empty */
        if(QueueIsEmpty(queue_obj))
        {
            *return_state= Queue_IS_Empty;
            Queue_data = NULL;
        }
        else /* Queue is not empty */
        {
            Queue_data = queue_obj->QueueArray[queue_obj->QueueRear];
            *return_state= OK;
        }

    }
    return Queue_data;
}
Return_State_t Get_Queue_Count(Queue_t *queue_obj, uint32 *QueueCount)
{
    Return_State_t Return_State = N_OK;
    if((NULL == queue_obj) || (NULL == QueueCount))
    {
        Return_State=NULL_POINTER;
    }
    else
    {
        /* Check if the queue is empty */
        if(QueueIsEmpty(queue_obj))
        {
            Return_State= Queue_IS_Empty;
        }
        else /* Queue is not empty */
        {
            *QueueCount = queue_obj->QueueCount;
            Return_State= OK;
        }

    }
    return Return_State;
}
Return_State_t Queue_Destroy(Queue_t *queue_obj)
{
Return_State_t Return_State = N_OK;
        if(NULL == queue_obj)
    {
        Return_State = NULL_POINTER ;
    }
    else
    {
            free(queue_obj->QueueArray);
            free(queue_obj);
            Return_State = OK; 
    }
return Return_State;
}