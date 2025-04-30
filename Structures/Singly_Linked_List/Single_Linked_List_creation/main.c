#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

struct node
    {
    int register_number;
    int mark;
    struct node *next;
    };

int main()
{
    int id;
    struct node *head=0, *new_node, *temp;

  //  get_input();
    while(1)
    {
        printf("register number : ");
        scanf("%d", &id);
        if(id==-1)
        {
            break;
        }
        else
        {
             new_node = malloc(sizeof(struct node));

             if(new_node ==NULL)
             {
                 printf("Memory allocation failed \n");
             }

             new_node->register_number=id;
             printf("Mark : ");
             scanf("%d", &new_node->mark  );

             if(head==NULL)
             {
                 head=new_node;
               //  printf("head address %p", head);
                 temp=new_node;
                 temp->next=NULL;
             }

             else
             {
                 temp->next=new_node;
              //   printf("Temp->next %p\n", temp->next);

                 temp=new_node;
                 temp->next=NULL;

             }
        }
   }

    printf("student details:\n");
    temp=head;
    if(temp==0)
    {
        printf("No details are entered");
    }
    while(temp!=0)
    {
        printf("Register number %d\n", temp->register_number);
        printf("Mark %d\n", temp->mark);
        temp=temp->next;                // i dont't know how to delete memory

    }

    return 0;
}
