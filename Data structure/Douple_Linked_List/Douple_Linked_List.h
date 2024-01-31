#ifndef _Douple_Linked_List_
#define _Douple_Linked_List_

#include "PlatForm_Types.h"

typedef struct node
{
    uint32 NodeData;
    struct Node *LeftNodeLink;
    struct Node *RightNodeLink;
    uint32 Flag;
}DL_node_t;

void Insert_Node_At_Beginning(DL_node_t **List, uint32 Data);
void Insert_Node_At_End(DL_node_t *List, uint32 Data);
void Insert_Node_After(DL_node_t *List, uint32 Data, uint32 position);
void Insert_Node_Before(DL_node_t **List, uint32 Data, uint32 position);
void Delete_Node_At_Beginning(DL_node_t **List);
void Delete_Node_At_End(DL_node_t *List);
void Delete_Node_At_Intermediate(DL_node_t *List, uint32 position);
void Display_All_Nodes_Forward(DL_node_t *List);
void Display_All_Nodes_Reverse(DL_node_t *List);
void Reverse_List(DL_node_t **List);
void Merge_Two_Lists(DL_node_t **List1,DL_node_t **List2,uint32 Position);
void detectLoop(DL_node_t *List);



#endif