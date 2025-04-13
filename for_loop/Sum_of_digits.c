#include<stdio.h>
#include<inttypes.h>

void get_input(int64_t *);
void sum_digits(int64_t *, int64_t *);
void print_output(int64_t *);

int main()
{
   int64_t input, sum=0;
   get_input(&input);
   sum_digits(&input, &sum);
   print_output(&sum);
}

void get_input(int64_t *input)
{
    printf("Enter the number : ");
    scanf("%"SCNd64, input);
}

void sum_digits(int64_t *input, int64_t *sum)
{
    for(; *input>0; *input/=10)
    {
        *sum+=*input%10;
    }

}

void print_output(int64_t *sum)
{
    printf("Sum : %"PRId64, *sum);
}
