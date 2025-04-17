#include<inttypes.h>
#include<stdio.h>
void get_input(char *input_string, char *character)
{
    printf("Enter the string : ");
    fgets(input_string, 100, stdin);
    printf("Enter the character : ");
    scanf("%c", character);

}

void print_positions(char *input_string, char *character, int8_t *positions)
{

    int8_t addr=0, index=0;
    while(*(input_string + addr)!='\0')
    {
        if(*(input_string + addr)== *character)
        {
          *(positions + index )=addr+1;
          index++;
        }
        addr++;
    }

    for(char i=0; i<index; i++)
    {
        printf("%"PRId8 " ", *(positions + i));
    }
}
