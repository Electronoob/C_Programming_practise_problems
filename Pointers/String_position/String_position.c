#include<stdio.h>
#include<inttypes.h>
#include"library.h"

int main()
{
    char input_string[100], character;
    int8_t positions[50]={0};
    get_input(input_string, &character);
    print_positions(input_string, &character, positions);
    return 0;
}

