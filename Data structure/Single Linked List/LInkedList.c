#include"LInkedList.h"
#include<stdlib.h>
#include<stdio.h>


static void Swap(uint32* a, uint32* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
static void Delete_all_nodes(node_t *HeadList)
{
    while (HeadList != NULL)
    {
        node_t *next = HeadList->Nodelink;
        free(HeadList);
        HeadList = next;
    }
    
}
uint32 Get_Length(node_t *HeadList)
{
node_t *TempNode = HeadList;    
uint32 length = 0;

while (TempNode != NULL)
{
    length++;
    TempNode = TempNode->Nodelink;
}
return length;    
}


void Insert_Node_At_Beginning(node_t **HeadList)
{
node_t *TempNode = NULL;
TempNode = (struct node *)malloc(sizeof(struct node));
if(NULL != TempNode)
{
    printf("Enter Node Data : ");
    scanf("%i", &(TempNode->NodeData));

/* Check if linked list is empty */
    if(NULL == *HeadList) /* Linked list is empty */
    {
        TempNode->Nodelink = NULL;
        *HeadList = TempNode ;
    }
    else /* Linked list is not empty */
    {
        TempNode->Nodelink = *HeadList ;
        *HeadList = TempNode ;
    }
}
else{/*nothing*/}
}
void Insert_Node_At_End(node_t **HeadList)
{
node_t *TempNode = NULL ;
node_t *LastNode = NULL ;

TempNode = (node_t *)malloc(sizeof(node_t));
if(NULL != TempNode)
{
    printf("Enter Node Data : ");
    scanf("%i", &(TempNode->NodeData));
    TempNode->Nodelink = NULL;

    /* Check if linked list is empty */
    if(NULL == *HeadList)/* Linked list is empty */
    {
        *HeadList = TempNode ;
    }
    else
    {
        LastNode = *HeadList;
        while((LastNode->Nodelink) != NULL)
        {
            LastNode = LastNode->Nodelink;
        }
        LastNode->Nodelink = TempNode;
    }
}
else{/*nothing*/}
}
void Insert_Node_After(node_t *HeadList)
{
node_t *TempNode = NULL;
node_t *NodeListCounter = HeadList;
uint32 NodePosition = 0;    
uint32 ListLength = 0;      
uint32 NodeCounter = 1;     /* Points to the first node */

printf("Enter Node Position (First node is position = 1): ");
scanf("%i", &NodePosition);

ListLength = Get_Length(HeadList);
if(NodePosition > ListLength )
{
printf("Invalid Node Position -> List has ( %i ) Nodes \n", ListLength);
}
else
{
    while (NodeCounter < NodePosition)
    {
        NodeCounter++;
        NodeListCounter = NodeListCounter->Nodelink;
    }/* TempNode points to the node where we have to insert after it */
    TempNode = (node_t *)malloc(sizeof(node_t));
    if(TempNode != NULL)
    {
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);
        /* Connect the right side connection */
        TempNode->Nodelink = NodeListCounter->Nodelink;
        /* Connect the Left side connection */
        NodeListCounter->Nodelink = TempNode;
    }
    else{/*nothing*/}
}

}
void Delete_Node_At_Beginning(node_t **HeadList)
{
    node_t *TempNode = *HeadList;
    uint32 ListLength = 0; 

    ListLength = Get_Length(*HeadList);

    if(ListLength == 0)
    {
        printf("List is Empty , nothing to be deleted !! \n");
    }     
    else
    {
        *HeadList = TempNode->Nodelink;
        TempNode->Nodelink = NULL; /* TempNode is a free node */
        free(TempNode);
    }


}
void Delete_Node(node_t *HeadList)
{
node_t *NextNode = HeadList;
node_t *NodeListCounter = HeadList;
uint32 NodePosition = 0;    
uint32 ListLength = 0;      
uint32 NodeCounter = 1;     /* Points to the first node */
printf("Enter Node Position (First node is position = 1): ");
scanf("%i", &NodePosition);

ListLength = Get_Length(HeadList);
if((NodePosition > ListLength) || (ListLength == 1)){
        printf("Please use Delete_Node_At_Beginning !! \n");
}
else
{
    while (NodeCounter < NodePosition-1)
    {
        NodeCounter++;
        NodeListCounter = NodeListCounter->Nodelink;
    }
    NextNode = NodeListCounter->Nodelink;
    NodeListCounter->Nodelink = NextNode->Nodelink;
    free(NextNode);
}
}
void Display_All_Nodes(node_t *HeadList)
{
    node_t *TempNode = HeadList;
    printf("Node Values : ");
    if(NULL == TempNode){
        printf("List is empty !! \n");
    }
    else
    {
        while (TempNode != NULL)
        {
        printf("%i -> ", TempNode->NodeData);
        TempNode = TempNode->Nodelink;
        }
        if(NULL == TempNode){
            printf("NULL \n");
        }
    }
}
void Reverse_List(node_t **HeadList)
{
node_t *CurrentNode = *HeadList;
node_t *PrevNode = NULL;
node_t *NextNode = NULL;

if(NULL == *HeadList)
{
    printf("NULL POINTER ERROR !! \n");
}
else
{
    while (CurrentNode != NULL)
    {
        NextNode = CurrentNode->Nodelink;
        CurrentNode->Nodelink = PrevNode;
        PrevNode = CurrentNode;
        CurrentNode = NextNode;
    }
    *HeadList = PrevNode;
}
}
void Swap_Two_Nodes(node_t **HeadList)
{
    node_t *prev_X = NULL;
    node_t *Curr_X = *HeadList;
    node_t *prev_Y = NULL;
    node_t *Curr_Y = *HeadList;
    uint32 x,y ;
    printf("enter the two vules you want to swap \n");
    scanf("%i%i",&x,&y);

    while (Curr_X != NULL && Curr_X ->NodeData != x)
    {
        prev_X = Curr_X;
        Curr_X = Curr_X->Nodelink;
    }
    while (Curr_Y != NULL && Curr_Y ->NodeData != y)
    {
        prev_Y = Curr_Y;
        Curr_Y = Curr_Y->Nodelink;
    }
    if(Curr_Y == NULL || Curr_X == NULL )
    {
        return;
    }
    if(prev_X != NULL)
    {
        prev_X->Nodelink = Curr_Y;
    }
    else
    {
        *HeadList = Curr_Y;
    }
    if(prev_Y != NULL)
    {
        prev_Y->Nodelink = Curr_X;
    }
    else
    {
        *HeadList = Curr_X;
    }
    node_t* temp = Curr_Y->Nodelink;
    Curr_Y->Nodelink = Curr_X->Nodelink;
    Curr_X->Nodelink = temp;
}
void Sort_List(node_t *HeadList)
{
    node_t *CurrNode = HeadList;
    node_t *Index = NULL;
    uint32 temp =0;

    while (CurrNode != NULL)
    {
        Index = CurrNode->Nodelink;
        while (Index != NULL)
        {
            if(CurrNode->NodeData > Index->NodeData)
            {
                temp = CurrNode->NodeData;
                CurrNode->NodeData = Index->NodeData;
                Index->NodeData = temp;
            }
            Index = Index->Nodelink;
        }
        CurrNode = CurrNode->Nodelink;
    }
}
void Print_Middle(node_t *HeadList)
{
    node_t *TempNode = HeadList;
    uint32 length  = Get_Length(HeadList);
    uint32 Mid = length/2;


    while (Mid--)
    {
        TempNode = TempNode->Nodelink;
    }
    printf(" The middle is << %i >>\n",TempNode->NodeData);

}
void Delete_Middle(node_t *HeadList)
{
    
    node_t *Pre_Mid_Node = HeadList;
    node_t *Mid_Node = HeadList;

    uint32 length  = Get_Length(HeadList);
    uint32 conter = 1;


    while (conter < length/2)
    {
        conter++;
        Pre_Mid_Node = Pre_Mid_Node->Nodelink;
    }
    Mid_Node = Pre_Mid_Node->Nodelink;
    Pre_Mid_Node->Nodelink = Mid_Node->Nodelink;
    free(Mid_Node);

}
void Pairwise_Swap(node_t *HeadList)
{
    node_t *TempNode = HeadList;

    while (TempNode != NULL && TempNode->Nodelink != NULL)
    {
        Swap(&TempNode->NodeData,&TempNode->Nodelink->NodeData);
        TempNode = TempNode->Nodelink->Nodelink;
    }
}
void Delete_every_k_th_node(node_t *HeadList)
{
node_t *Selected_Node = HeadList;
node_t *Pre_Selected_Node = NULL;

uint32 k_th = 0;
uint32 counter = 1;


printf("enter the k_th , to remove every k_th_node \n");
scanf("%i",&k_th);

if(k_th == 1)
{
    Delete_all_nodes(HeadList);
    return;
}
while (Selected_Node != NULL)
{
    if(k_th == counter)
    {
        Selected_Node = Pre_Selected_Node->Nodelink;
        Pre_Selected_Node->Nodelink = Selected_Node->Nodelink;
        free(Selected_Node);
        counter = 0;
    }
    if(0 != counter)
    {
        Pre_Selected_Node = Selected_Node ;
    }
    counter++;
    Selected_Node = Pre_Selected_Node->Nodelink;
}



}
void Split_a_Circular_Linked_List(node_t *HeadList)
{
    node_t *HeadList_2 = NULL;
    node_t *TempNode = HeadList;
    uint32 mid = (Get_Length(HeadList))/2;
    uint32 counter = 1;

    while (counter < mid)
    {
        counter++;
        TempNode = TempNode ->Nodelink;
    }
    
    HeadList_2 = TempNode ->Nodelink;
    TempNode ->Nodelink = NULL; /*end of the first loop*/
    Display_All_Nodes(HeadList);/*print the first loop*/
    Display_All_Nodes(HeadList_2);/*print the second loop*/
}
void Delete_Duplication(node_t *HeadList)
{
node_t *TempNode = HeadList;
node_t *TempNode2 = HeadList;
node_t *Selected_Node = NULL;
node_t *Pre_Selected_Node = NULL;
uint32 counter = 0;

while(TempNode != NULL && TempNode->Nodelink != NULL)
{
    TempNode2 = TempNode;
    while (TempNode2->Nodelink != NULL)
    {
        if(TempNode->NodeData == TempNode2->Nodelink->NodeData)
        {
            Selected_Node = TempNode2->Nodelink;
            TempNode2->Nodelink = TempNode2->Nodelink->Nodelink;
            free(Selected_Node);
        }
        else
        {
            TempNode2 = TempNode2->Nodelink;
        }
        
    }
    TempNode = TempNode->Nodelink;
}

}

