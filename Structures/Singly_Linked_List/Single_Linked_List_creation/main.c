
#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<stdlib.h>

struct student{
   char register_number[100];
   char area_of_interest[100];
   struct student *next;
};


int main()
{
    char register_number_input[10], area_of_interest_input[20];
    struct student *head=0, *temp, *new_node;
    int index=0;

    while(1)
    {
        printf("Enter register number : ");
        fgets(register_number_input, 10, stdin);
        while(1)
        {
            if(register_number_input[index]=='\n')
            {
                register_number_input[index]='\0';
                index=0;

                break;
            }
            index++;
        }
        if(strcmp(register_number_input, "-1")==0)
        {
            break;
        }
        else
        {
            printf("Enter the Area of interest: ");
            fgets(area_of_interest_input, 20, stdin);

            new_node=(struct student *)malloc(sizeof(struct student));
             strcpy(new_node->register_number, register_number_input);
             strcpy(new_node->area_of_interest, area_of_interest_input);

            if(new_node==NULL)
            {
                printf("Memory allocation failed\n");
            }



            if(head==NULL)
            {
                head=new_node;

                temp=new_node;
                temp->next=NULL;

            }
            else
            {
                temp->next=new_node;
                 temp=new_node;


                temp->next=NULL;

            }

        }
    }



    temp=head;


    if(temp==NULL)
    {
        printf("No details were added");
    }

        while(temp!=NULL)
        {
            printf("Register number : %s", temp->register_number);
            printf("Area of interest : %s\n", temp->area_of_interest);
            temp=temp->next;
        }




    return 0;
}
