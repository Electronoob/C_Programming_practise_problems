#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<inttypes.h>

struct student {
    char register_number[10];
    char area_of_interest[15];
    struct student *next;

};


void singly_linked_list_creation(struct student **head, struct student **temp, char *register_number_input, char *area_of_interest_input, uint8_t *index)
{
    struct student *new_node;
    while(1)
    {
       printf("Enter the register number: ");
       fgets(register_number_input, 10, stdin);
       while(1)
       {
           if(*(register_number_input + *index)=='\n')
           {
               *(register_number_input + *index)='\0';
               (*index)=0;
               break;
           }
           (*index)++;

       }
       if(strcmp(register_number_input, "-1")==0)
       {
           break;
       }

       printf("Enter area of interest : ");
       fgets(area_of_interest_input, 15, stdin);

       new_node=(struct student *)malloc(sizeof(struct student));
       strcpy(new_node->register_number, register_number_input);
       strcpy(new_node->area_of_interest, area_of_interest_input);
       if(new_node==NULL)
       {
           printf("Memory allocation failed\n");
       }
       else
       {
             if(*head==NULL)
       {
           *head=new_node;

           *temp=new_node;
           (*temp)->next=NULL;
       }
       else
       {
           (*temp)->next=new_node;
           *temp=new_node;

           (*temp)->next=NULL;
       }
       }
    }
}

void display_details(struct student *temp, struct student *head)
{
    temp=head;
    if(temp==NULL)
    {
        printf("No details were added");

    }
    else
    {
        while(temp!=0)
        {
            printf("Register number : %s ", temp->register_number);
            printf("Area of interest : %s", temp->area_of_interest);

            temp=temp->next;
        }
    }
}


