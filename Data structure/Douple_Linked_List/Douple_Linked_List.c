#include "Douple_Linked_List.h"
#include <stdlib.h>
#include <stdio.h>

void Insert_Node_At_Beginning(DL_node_t **List, uint32 Data){
    DL_node_t *TempNode = NULL; /* Points to the new node */

    TempNode = (DL_node_t *)malloc(sizeof(DL_node_t));
    if(NULL != TempNode){
        TempNode->NodeData = Data;
        /* Check if the list is empty */
        if(NULL == *List){
            TempNode->LeftNodeLink = NULL;  /* This is the only node */
            TempNode->RightNodeLink = NULL; /* This is the only node */
            (*List) = TempNode;   /* Make the Head pointer points to this only node */
        }
        else{
            TempNode->RightNodeLink = (*List); /* Make the new node to be the head */
            TempNode->LeftNodeLink = NULL;     /* The LeftNodeLink always NULL in the Head node */
            (*List)->LeftNodeLink = TempNode;  /* This now became the second node */
            (*List) = TempNode; /* Make the Head pointer points to the new node */
        }
    }
    else{
        printf("Can't allocate the new node !! \n");
    }
}
void Insert_Node_At_End(DL_node_t *List, uint32 Data)
{
DL_node_t *TempNode = List;
DL_node_t *NodeListCounterOne = List;

TempNode = (DL_node_t *)malloc(sizeof(DL_node_t));

if(NULL != TempNode)
{
    TempNode->NodeData = Data;
    TempNode->RightNodeLink = NULL;
    while (NULL != NodeListCounterOne->RightNodeLink)
    {
        NodeListCounterOne = NodeListCounterOne->RightNodeLink;
    }
    TempNode->LeftNodeLink = NodeListCounterOne;
    NodeListCounterOne->RightNodeLink = TempNode;
}
else
{
    printf("Can't allocate the new node !! \n");
}
}
void Insert_Node_After(DL_node_t *List, uint32 Data, uint32 position)
{
DL_node_t *TempNode = List;
DL_node_t *NodeListCounterOne = List;
DL_node_t *NodeListCounterTwo = NULL;

while (1 != position)
{
    NodeListCounterOne = NodeListCounterOne->RightNodeLink;
    position--;
}
NodeListCounterTwo = NodeListCounterOne->RightNodeLink;

TempNode = (DL_node_t *)malloc(sizeof(DL_node_t));
if(NULL != TempNode)
{
    TempNode->NodeData = Data;
    if(NodeListCounterOne->RightNodeLink == NULL)
    {
        TempNode->RightNodeLink = NULL;
        TempNode->LeftNodeLink = NodeListCounterOne;
        NodeListCounterOne->RightNodeLink = TempNode;
    }
    else
    {
        
        TempNode->RightNodeLink = NodeListCounterTwo;
        TempNode->LeftNodeLink = NodeListCounterOne;
        NodeListCounterOne->RightNodeLink = TempNode;
        NodeListCounterTwo->LeftNodeLink = TempNode;

    }
}
else
{
    printf("Can't allocate the new node !! \n");
}


}
void Insert_Node_Before(DL_node_t **List, uint32 Data, uint32 position)
{
DL_node_t *TempNode = *List;
DL_node_t *NodeListCounterOne = *List;
DL_node_t *NodeListCounterTwo = *List;
uint32 NodePosition = position;

while(NodePosition > position-1){ /* This to point to the node before the given position */
        NodeListCounterOne = NodeListCounterOne->RightNodeLink;
        NodePosition--;
    }
NodeListCounterTwo = NodeListCounterOne->RightNodeLink;

TempNode = (DL_node_t *)malloc(sizeof(DL_node_t));
if(NULL != TempNode)
{
    TempNode->NodeData = Data;
    if(1 == position){
            TempNode->LeftNodeLink = NULL;  /* This is the only node */
            TempNode->RightNodeLink = *List;
            (*List)->LeftNodeLink = TempNode;
            *List = TempNode;
        }
    else
    {
        NodeListCounterOne->RightNodeLink = TempNode;
        NodeListCounterTwo->LeftNodeLink = TempNode;
        TempNode->RightNodeLink = NodeListCounterTwo;
        TempNode->LeftNodeLink = NodeListCounterOne;

    }
}
else
{
    printf("Can't allocate the new node !! \n");

}
}
void Delete_Node_At_Beginning(DL_node_t **List)
{
(*List) = (*List)->RightNodeLink;
free((*List)->LeftNodeLink);
(*List)->LeftNodeLink = NULL;
}
void Delete_Node_At_End(DL_node_t *List)
{
DL_node_t *NodeListCounterOne = List;
DL_node_t *NodeListCounterTwo = NULL;

while (NodeListCounterOne->RightNodeLink != NULL)
{
    NodeListCounterOne = NodeListCounterOne->RightNodeLink;
}
    NodeListCounterTwo = NodeListCounterOne->LeftNodeLink;
    NodeListCounterTwo->RightNodeLink = NULL;
    free(NodeListCounterOne);
    NodeListCounterOne = NULL;
}
void Delete_Node_At_Intermediate(DL_node_t *List, uint32 position)
{
DL_node_t *NodeListCounterOne = List;
DL_node_t *NodeListCounterTwo = List;
uint32 NodePosition = position;

if(1 == NodePosition){
    printf("Please use the Delete_Node_At_Beginning !! \n");
}
else
{
    while (NodePosition > 1)
    {
        NodeListCounterOne = NodeListCounterOne->RightNodeLink;
        NodePosition--;
    }

    NodeListCounterTwo = NodeListCounterOne->LeftNodeLink;
    NodeListCounterTwo->RightNodeLink = NodeListCounterOne->RightNodeLink;
    DL_node_t *Temp = NodeListCounterOne->RightNodeLink;
    Temp->LeftNodeLink = NodeListCounterTwo;
    free(NodeListCounterOne);
    NodeListCounterOne = NULL;
}

}
void Display_All_Nodes_Forward(DL_node_t *List)
{
DL_node_t *TempNode = List;

printf("\nTraversal in forward direction ==> ");
printf("Data : ");
printf("%d -> ", TempNode->NodeData);

while (TempNode->RightNodeLink !=NULL)
{
    TempNode = TempNode->RightNodeLink;
    printf("%d -> ", TempNode->NodeData);
}
if(NULL == TempNode->RightNodeLink){
        printf("NULL");
    }
    printf("\n");



}
void Display_All_Nodes_Reverse(DL_node_t *List){
    DL_node_t *TempNode = List;

    printf("\nTraversal in reverse direction ==> ");
    printf("Data : ");
    while(TempNode->RightNodeLink != NULL){
        TempNode = TempNode->RightNodeLink;
    }
    while(TempNode->LeftNodeLink != NULL){
        printf("%d -> ", TempNode->NodeData);
        TempNode = TempNode->LeftNodeLink;
    }
    printf("%d -> ", TempNode->NodeData);
    TempNode = TempNode->LeftNodeLink;
    if(NULL == TempNode){
        printf("NULL");
    }
    printf("\n");
}
void Reverse_List(DL_node_t **List)
{
    DL_node_t *Temp = NULL;
    DL_node_t *Current = *List;

    if(Current->RightNodeLink == NULL)
    {
        printf("Error the list has one element !!! \n");
        return;
    }
    else
    {
        while (Current != NULL)
        {
            Temp = Current->LeftNodeLink;
            Current->LeftNodeLink = Current->RightNodeLink;
            Current->RightNodeLink = Temp;
            Current = Current->LeftNodeLink;
        }
        *List = Temp->LeftNodeLink;

    }
  }
void Merge_Two_Lists(DL_node_t **List1,DL_node_t **List2, uint32 Position)
{
DL_node_t *Temp_Of_List = *List1;   
DL_node_t *Start1 = *List1;
DL_node_t *End1 = *List1;
DL_node_t *Start2 = *List2;
DL_node_t *End2 = *List2;
uint32 TempPosition = Position;
uint32 List_1_Length = 1;

while (Temp_Of_List->RightNodeLink != NULL)
{
    Temp_Of_List = Temp_Of_List->RightNodeLink;
    List_1_Length++;
}
while (1 != TempPosition)
{
    End1 = End1->RightNodeLink;
    TempPosition--;
}
while (End2->RightNodeLink != NULL)
{
    End2 = End2->RightNodeLink;
}

if(Position == 1)
{
    Start2->LeftNodeLink = NULL;
    End2->RightNodeLink = (*List1);
    Start1->LeftNodeLink = End2;
    (*List1) = Start2;
}
else if(Position == List_1_Length)
{
    Temp_Of_List->RightNodeLink = Start2;
    Start2->LeftNodeLink = Temp_Of_List;
    End2->RightNodeLink = NULL;

}
else
{
    Start2->LeftNodeLink = Start1;
    Start1->RightNodeLink = Start2;

    End2->RightNodeLink = End1;
    End1->LeftNodeLink = End2;
}
}
void detectLoop(DL_node_t *List1)
{
    while (List1 != NULL)
    {
        if(List1->Flag == 1)
        {
            printf(" loop Found !\n");
            return;
        }
        List1->Flag = 1;
        List1 = List1->RightNodeLink;
    }
    printf("No loop !\n");
}





