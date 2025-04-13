#include<stdio.h>
#include<inttypes.h>

void get_input(int64_t *);
void total_number_digits(int64_t *, int64_t *);

int main()
{
    int64_t input, count=0;
    get_input(&input);
    total_number_digits(&input, &count);
}

void get_input(int64_t *input)
{
    printf("Enter the input : ");
    scanf("%"SCNd64, input);
}

void total_number_digits(int64_t *input, int64_t *count)
{
    for(; *input>0; *input/=10)
    {
        (*count)++;
    }

    printf("Total number of digits : %"PRId64, *count);

}
