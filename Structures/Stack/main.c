#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"stack.h"

int main()
{
    struct student *top=NULL;                             // top node address
    push("Jayaraj", "Embedded", &top);
    push("Raghul", "Medicine", &top);
    push("Saarathi", "design", &top);
    pop(&top);
    push("Hari", "App develop", &top);

    display(&top);                                       // display all the elements

}

