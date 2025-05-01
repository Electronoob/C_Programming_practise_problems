#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>
#include<string.h>

#include"library.h"

int main()
{
    struct student *head=NULL, *temp;
    char register_number_input[10], area_of_interest_input[15];
    uint8_t index=0;
    singly_linked_list_creation(&head, &temp, register_number_input, area_of_interest_input, &index);
    display_details(temp, head);
    return 0;

}


