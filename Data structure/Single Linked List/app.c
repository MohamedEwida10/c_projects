#include <stdio.h>
#include <stdlib.h>

#include"LInkedList.h"

node_t *ListHead = NULL;

int main()
{
    uint8 UserChoice = 0;
    uint32 ListLength = 0;

    printf("-> Hello to Single Linked List \n");
    while(1){
        printf("\n");
        printf("===============================\n");
        printf("-> 1) Insert_Node_At_Beginning \n");
        printf("-> 2) Insert_Node_At_End \n");
        printf("-> 3) Insert_Node_After \n");
        printf("-> 4) Delete_Node_At_Beginning \n");
        printf("-> 5) Delete_Node \n");
        printf("-> 6) Display_All_Nodes \n");
        printf("-> 7) Get_Length \n");
        printf("-> 8) Reverse List \n");
        printf("-> 9) swap two nodes \n");
        printf("-> 10) Sorting list \n");
        printf("-> 11) Print_Middle of the list \n");
        printf("-> 12) Delete_Middle \n");
        printf("-> 13) Pairwise_Swap \n");
        printf("-> 14) Delete_every_k_th_node \n");
        printf("-> 15) Split_a_Circular_Linked_List \n");
        printf("-> 16) Delete_Duplication \n");
        printf("-> 17) Quit from application \n");
        printf("===============================\n");

        printf("\n");
        printf("UserChoice : ");
        scanf("%i", &UserChoice);

        switch(UserChoice){
            case 1:
                Insert_Node_At_Beginning(&ListHead);
            break;
            case 2:
                Insert_Node_At_End(&ListHead);
            break;
            case 3:
                Insert_Node_After(ListHead);
            break;
            case 4:
                Delete_Node_At_Beginning(&ListHead);
            break;
            case 5:
                Delete_Node(ListHead);
            break;
            case 6:
                Display_All_Nodes(ListHead);
            break;
            case 7:
                ListLength = Get_Length(ListHead);
                printf("List Length : << %i >> Nodes\n", ListLength);
            break;
            case 8:
                Reverse_List(&ListHead);
            break;
            case 9:
                Swap_Two_Nodes(&ListHead);
            break;
            case 10:
                Sort_List(ListHead);
            break;
             case 11:
                Print_Middle(ListHead);
            break;
            case 12:
                Delete_Middle(ListHead);
            break;
            case 13:
                Pairwise_Swap(ListHead);
            break;
            case 14:
                Delete_every_k_th_node(ListHead);
            break;
            case 15:
                Split_a_Circular_Linked_List(ListHead);
            break;
            case 16:
                Delete_Duplication(ListHead);
            break;
            case 17:
                printf("Quit from application \n");
                exit(1);
            break;

            default:
                printf("User Choice out of range !!\n");
            break;
        }
    }
    return 0;
}