#ifndef _LinkedList_h
#define _LinkedList_h

#include "PlatForm_Types.h"

typedef struct node
{
    uint8 NodeData;
    struct node *Nodelink;
}node_t;

void Insert_Node_At_Beginning(node_t **HeadList);
void Insert_Node_At_End(node_t **HeadList);
void Insert_Node_After(node_t *HeadList);
void Delete_Node_At_Beginning(node_t **HeadList);
void Delete_Node(node_t *HeadList);
void Display_All_Nodes(node_t *HeadList);
void Reverse_List(node_t **HeadList);
void Swap_Two_Nodes(node_t **HeadList);
void Sort_List(node_t *HeadList);
void Print_Middle(node_t *HeadList);
void Delete_Middle(node_t *HeadList);
void Pairwise_Swap(node_t *HeadList);
void Delete_every_k_th_node(node_t *HeadList);
void Split_a_Circular_Linked_List(node_t *HeadList);
void Delete_Duplication(node_t *HeadList);


uint32 Get_Length(node_t *HeadList);

#endif