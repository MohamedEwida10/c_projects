#include <stdio.h>
#include <stdlib.h>
#include "Queue_DS.h"

uint32 Queue1MaxElem = 0;
Queue_t *Queue1;
void *QueueRetVal;

uint32 Number1 = 0x11, Number2 = 0x22, Number3 = 0x33, Number4 = 0x44, Number5 = 0x55;
uint32 QueueCount;

int main()
{
    Return_State_t ReturnQueueStatus = N_OK;

    printf("Please enter number of elements in Queue1 : ");
    scanf("%i", &Queue1MaxElem);

    Queue1 = Queue_Creating(Queue1MaxElem, &ReturnQueueStatus);
    printf("0x%X \n", Queue1);

    ReturnQueueStatus = EnQueue_Element(Queue1, &Number1); printf("=> %i \n", ReturnQueueStatus);
    ReturnQueueStatus = EnQueue_Element(Queue1, &Number2); printf("=> %i \n", ReturnQueueStatus);
    ReturnQueueStatus = EnQueue_Element(Queue1, &Number3); printf("=> %i \n", ReturnQueueStatus);

    ReturnQueueStatus = Get_Queue_Count(Queue1, &QueueCount); printf("=> %i \n", ReturnQueueStatus);
    printf("Count = %i \n", QueueCount);

    QueueRetVal = QueueRear_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("QueueRear = 0x%X \n", *((uint32 *)QueueRetVal));

    ReturnQueueStatus = EnQueue_Element(Queue1, &Number4); printf("=> %i \n", ReturnQueueStatus);
    QueueRetVal = QueueRear_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("QueueRear = 0x%X \n", *((uint32 *)QueueRetVal));

    ReturnQueueStatus = EnQueue_Element(Queue1, &Number5); printf("=> %i \n", ReturnQueueStatus);
    ReturnQueueStatus = EnQueue_Element(Queue1, &Number5); printf("=> %i \n", ReturnQueueStatus);

    ReturnQueueStatus = Get_Queue_Count(Queue1, &QueueCount); printf("=> %i \n", ReturnQueueStatus);
    printf("Count = %i \n", QueueCount);

    QueueRetVal = DeQueue_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DeQueue_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DeQueue_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Front = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DeQueue_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DeQueue_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DeQueue_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DeQueue_Element(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    if(QueueRetVal){
        printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));
    }

    ReturnQueueStatus = Queue_Destroy(Queue1);

    return 0;
}
