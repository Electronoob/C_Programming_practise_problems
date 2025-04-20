#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include"library.h"

int main()
{
    char input_string[100];
    get_input_string(input_string);
    print_total_number_of_words(input_string);

}

