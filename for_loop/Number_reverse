#include<stdio.h>
#include<inttypes.h>

void get_input(int64_t *);
void reverse_number(int64_t *);

int main()
{
    int64_t number;
    get_input(&number);
    reverse_number(&number);
}

void get_input(int64_t *number)
{
    printf("Enter the input : ");
    scanf("%"SCNd64, number);
}

void reverse_number(int64_t *number)
{
    int64_t reverse=0;
    for(; *number>0; *number/=10)
    {
        reverse=reverse*10 + *number%10;
    }

    printf("Reverse : %"SCNd64, reverse);
}
