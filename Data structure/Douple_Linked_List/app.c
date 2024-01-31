#include <stdio.h>
#include <stdlib.h>

#include"Douple_Linked_List.h"


DL_node_t *DLL_1 = NULL;
DL_node_t *DLL_2 = NULL;


int main()
{
    Insert_Node_At_Beginning(&DLL_1, 1);
    Display_All_Nodes_Forward(DLL_1);
    Insert_Node_At_Beginning(&DLL_1, 2);
    Display_All_Nodes_Forward(DLL_1);
    Insert_Node_At_Beginning(&DLL_1, 3);
    Display_All_Nodes_Forward(DLL_1);
    Insert_Node_At_Beginning(&DLL_1, 4);
    Display_All_Nodes_Forward(DLL_1);
    Insert_Node_At_Beginning(&DLL_1, 5);
    Display_All_Nodes_Forward(DLL_1);
    printf("----------------------\n");
    Insert_Node_At_Beginning(&DLL_2, 3);
    Display_All_Nodes_Forward(DLL_2);
    Insert_Node_At_Beginning(&DLL_2, 4);
    Display_All_Nodes_Forward(DLL_2);

    printf("----------------------\n");
    
    Insert_Node_At_End(DLL_1, 99);
    Display_All_Nodes_Forward(DLL_1);
    Insert_Node_At_End(DLL_1, 100);
    Display_All_Nodes_Forward(DLL_1);
    printf("----------------------\n");

    Insert_Node_After(DLL_1, 44, 2);
    Display_All_Nodes_Forward(DLL_1);
    Insert_Node_After(DLL_1, 55, 3);
    Display_All_Nodes_Forward(DLL_1);
    Insert_Node_After(DLL_1, 66, 5);
    Display_All_Nodes_Forward(DLL_1);
    printf("----------------------\n");
    Insert_Node_Before(&DLL_1, 77, 3);
    Display_All_Nodes_Forward(DLL_1);
    Insert_Node_Before(&DLL_1, 88, 1);
    Display_All_Nodes_Forward(DLL_1);
    printf("----------------------\n");
    Delete_Node_At_Beginning(&DLL_1);
    Display_All_Nodes_Forward(DLL_1);
    Delete_Node_At_Beginning(&DLL_1);
    Display_All_Nodes_Forward(DLL_1);
    printf("----------------------\n");
    Delete_Node_At_End(DLL_1);
    Display_All_Nodes_Forward(DLL_1);
    Delete_Node_At_End(DLL_1);
    Display_All_Nodes_Forward(DLL_1);
    printf("----------------------\n");
    Delete_Node_At_Intermediate(DLL_1, 2);
    Display_All_Nodes_Forward(DLL_1);
    Delete_Node_At_Intermediate(DLL_1, 3);
    Display_All_Nodes_Forward(DLL_1);
    Merge_Two_Lists(&DLL_1,&DLL_2,3);
    Display_All_Nodes_Forward(DLL_1);
    
    

    return 0;
}

