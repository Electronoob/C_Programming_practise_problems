#include<stdio.h>
#include<inttypes.h>
#include"library.h"

int main()
{
    char main_string[100], substring[100];
    int8_t position=0;
    get_input(main_string, substring);
    print_output(main_string, substring, &position);
    return 0;
}

