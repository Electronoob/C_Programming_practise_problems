#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

void get_input_string(char *input_string)
{
    printf("Enter the string : ");
    fgets(input_string, 100, stdin);
}

void print_total_number_of_words(char *input_string)
{
    int8_t count=1;
    while(*input_string)     // Loop until NULL character
    {
        if(*input_string==' ')    // Look for SPACE
        {
            count++;
        }
        input_string++;

    }
    printf("Total number of words : %"PRId8, count);

}

