#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>
#include<string.h>

#include"libarary.h"


int main()                                                             
{
    struct student *head=NULL, *temp, *new_node=0;
    char register_number_input[10], area_of_interest_input[15];
    singly_linked_list_creation(&head, &temp, new_node, register_number_input, area_of_interest_input);
    insertion_of_node(head);
    display_details(head);             
    return 0;

}


