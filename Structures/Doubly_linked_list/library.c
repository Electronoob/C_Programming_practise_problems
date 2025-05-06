#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>
#include<string.h>

struct student {
    struct student *previous, *next;
    char register_number[10];
    char area_of_interest[15];

};

void doubly_linked_list_creation(struct student **head, struct student **tail)
{
    char register_number_input[10], area_of_interest_input[15];
    uint8_t index=0;                                               // to go through the string
    struct student *temp=NULL, *new_node=NULL;

    while(1)
    {
        printf("Enter the register number : ");
        fgets(register_number_input, 10, stdin);

        while(1)
        {
           if(register_number_input[index]=='\n')                       // to remove the new line character
           {
               register_number_input[index]='\0';
               break;
           }
           index++;
        }
        index=0;

        if(strcmp(register_number_input, "-1")==0)
        {
            *tail=temp;
            break;
        }
        else
        {
            printf("Enter the area of interest : ");
            fgets(area_of_interest_input, 15, stdin);

             while(1)
        {
           if(area_of_interest_input[index]=='\n')
           {
               area_of_interest_input[index]='\0';
               break;
           }
           index++;
        }
        index=0;

        new_node=(struct student *)malloc(sizeof(struct student));
        if(new_node==NULL)
        {
            printf("Memory not allocated\n");                   //to check memory is allocated
        }
        strcpy(new_node->register_number, register_number_input);
        strcpy(new_node->area_of_interest, area_of_interest_input);

        if(*head==NULL)
        {
          *head=new_node;
          temp=*head;
          (*head)->previous=NULL;
        }
        else
        {
            temp->next=new_node;
            new_node->previous=temp;
            temp=new_node;
            temp->next=NULL;
        }


        }


    }
}                     //after display assign value for tail


void insert_new_entry(struct student **start_addr)
{
    char insert_node_number[10];
    struct student *temp=*start_addr, *new_node, *next_node=NULL;
    printf("Enter the node before which you want to add a new node : ");
    fgets(insert_node_number, 10, stdin);
    insert_node_number[strcspn(insert_node_number, "\n")]='\0';

    new_node=(struct student *)malloc(sizeof(struct student));
    if(new_node==NULL)
    {
        printf("Memory allocation failed\n");                     //verify memory is allocated
    }
    printf("Enter the register number: ");
    fgets(new_node->register_number, 10, stdin);                 //here I am getting directly because I will get only one time.
    new_node->register_number[strcspn(new_node->register_number, "\n")]='\0';    //verify this is clear
    printf("Enter area of interest : ");
    fgets(new_node->area_of_interest, 10, stdin);
    new_node->area_of_interest[strcspn(new_node->area_of_interest, "\n")]='\0';

    while(1)
    {
        if(strcmp((*start_addr)->register_number, insert_node_number)==0)
        {
            next_node=*start_addr;
            next_node->previous=new_node;                                   //previous 6/5/2025 changed
            *start_addr=new_node;
            (*start_addr)->previous=NULL;
            (*start_addr)->next=next_node;

            break;
        }
       else if(strcmp(temp->next->register_number, insert_node_number)==0)
       {
           next_node=temp->next;                                                       //here i add from second element to the last but i have to add for head also
           temp->next=new_node;
           new_node->next=next_node;
           new_node->previous=temp;                                         // assign new_node's previous pointer.0mbvcx
           next_node->previous=new_node;                                    // assign new_node address to next node previous pointer
           break;
       }
       temp=temp->next;
    }
}

int delete_given_entry(struct student **start_addr)                 // I think i didn't delete an entry in that previous project of single linked list, just removed
{
    char register_delete[10];
    struct student *temp=NULL, *delete_node=NULL;
    printf("Enter the Register number you want to delete : ");
    fgets(register_delete, 10, stdin);
    register_delete[strcspn(register_delete, "\n")]='\0';
    temp=*start_addr;

    if(strcmp(temp->register_number, register_delete)==0)
        {
             delete_node=*start_addr;
             *start_addr=(*start_addr)->next;
             (*start_addr)->previous=NULL;
             free(delete_node);
             delete_node=NULL;
             return 0;
        }
    else
        {
           while(temp!=NULL)
           {
             if(strcmp(temp->next->register_number, register_delete)==0)
            {
                if(temp->next->next==NULL)
                {
                    printf("vanthiran    ");

                  free(temp->next);
                  temp->next=NULL;
                  printf("ewnrjo");
                  break;
                }


                printf("Ulla vanthena \n");
                delete_node=temp->next;
                printf("1\n");                   // store address of that node
                temp->next=delete_node->next;    // assign next_node address to that place
                printf("2\n");
                temp->next->previous=temp;                  // modify the previous pointer of that node which move node front
                printf("3\n");
                free(delete_node);                           // delete the contents of that node
                printf("4\n");
                delete_node=NULL;
                break;
            }
             printf("hello\n");
            temp=temp->next;
           }

        }


    return 0;




}



void display_entries(struct student *start_addr, struct student *tail)
{
    struct student *temp=start_addr;
    if(temp==NULL)
    {
        printf("No entries were added\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("previous address %p\n", temp->previous);
            printf("Register_number %s\n", temp->register_number);
            printf("Area of interest %s\n", temp->area_of_interest);
            printf("next address %p\n", temp->next);
            printf("\n");
            temp=temp->next;
        }

        //printf("address of head %p  and tail %p", start_addr, tail);       // print the head and tail address


    }
}
