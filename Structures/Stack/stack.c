#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct student {
  char name[10];
  char area_of_interest[15];
  struct student *next;

};


void push(char *name_input, char *area_of_interest_input, struct student **top)
{
   struct student *new_node=(struct student *)malloc(sizeof(struct student));
    if(new_node==NULL)
    {
        printf("Memory allocation failed\n");                                  // verify memory is allocated
    }
    strcpy(new_node->name, name_input);                   // assign register number input to node
    strcpy(new_node->area_of_interest, area_of_interest_input);                         // assign area of interest input
    new_node->next=*top;
    *top=new_node;
}

void pop(struct student **top)
{   if(*top==NULL)                                             // check whether it is empty or it has elements
    {
        printf("Stack is empty\n");
        return;
    }
    struct student *addr=*top;                                 // store the top address
    *top=(*top)->next;                                         // change the top address
    free(addr);                                                // delete the contents of top
    addr=NULL;                                                 // assign NULL to avoid unexpected behaviour
}



void display(struct student **top)
{
   struct student *addr=*top;                                  //store top node address
    while(addr!=NULL)
    {
        printf("Register number : %s, area of interest : %s", addr->name, addr->area_of_interest);
        printf("\n");
        addr=addr->next;
    }
}


