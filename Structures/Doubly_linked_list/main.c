#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include "library.h"


int main()
{
    struct student *head=NULL, *tail=NULL;
    doubly_linked_list_creation(&head, &tail);
    insert_new_entry(&head);
    delete_given_entry(&head);
    display_entries(head, tail);
  
    return 0;
}
