
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<inttypes.h>

struct student {
    char register_number[10];
    char area_of_interest[15];
    struct student *next;

};


void singly_linked_list_creation(struct student **head, struct student **temp, struct student *new_node, char *register_number_input, char *area_of_interest_input)
{

    uint8_t index=0;
    while(1)
    {
       printf("Enter the register number: ");
       fgets(register_number_input, 10, stdin);
       while(1)
       {
           if(*(register_number_input + index)=='\n')
           {
               *(register_number_input + index)='\0';
               index=0;
               break;
           }
           index++;

       }

       if(strcmp(register_number_input, "-1")==0)
       {
           break;
       }

       printf("Enter area of interest : ");
       fgets(area_of_interest_input, 15, stdin);

       while(1)
       {
           if(*(area_of_interest_input + index)=='\n')
           {
               *(area_of_interest_input + index )='\0';
               break;
           }
           index++;
       }
       index=0;

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


void insertion_of_node(struct student *head)
{
    int index=0;                             //itha int ah maathanum
    char insertion_node[10];

    struct student *addr=NULL, *temp;

    printf("Enter the number to which new node will be added before : ");
    fgets(insertion_node, 10, stdin);
     while(1)
    {
        if(insertion_node[index]=='\n')
        {
            insertion_node[index]='\0';
            break;
        }
        index++;
    }
    index=0;

    struct student *new_node=(struct student *)malloc(sizeof(struct student));
    printf("Enter the register_number : ");
    fgets(new_node->register_number, 10, stdin);

    while(1)
    {
        if(*(new_node->register_number + index)=='\n')
        {
            *(new_node->register_number + index)='\0';
            break;
        }
        index++;
    }
     index=0;

     printf("Enter the area of interest : ");
     fgets(new_node->area_of_interest, 15, stdin);
      while(1)
      {
          if(*(new_node->area_of_interest + index)=='\n')
          {
              *(new_node->area_of_interest + index)='\0';
              break;
          }
          index++;
      }
      index=0;

     /*
     while(1)
     {
         if(*(new_node->area_of_interest+index)=='\n')
         {
             *(new_node->area_of_interest+index)='\0';
             break;
         }
         index++;
     }
    index=0;
*/


    temp=head;   //starting of traversal
    while(1)
    {

         if(strcmp(temp->next->register_number, insertion_node)==0)
         {
            addr=temp->next;
            temp->next=new_node;
            new_node->next=addr;
            break;                                          //store the address of the node in which new node is going to be added
         }
         else
         {
             temp=temp->next;                                               //traversal
         }

         index++;
    }




}


// area_of_interest new _line
// how to add before head


void display_details(struct student *head)  //new_update
{

    struct student *temp=head;

    if(temp==NULL)
    {
        printf("No details were added");

    }
    else
    {
        while(temp!=0)
        {
            printf("Register number : %s & ", temp->register_number);
            printf("Area of interest : %s ", temp->area_of_interest);
            printf("\n");
            temp=temp->next;
        }
    }

}

