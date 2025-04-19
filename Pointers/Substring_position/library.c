#include<stdio.h>
#include<inttypes.h>

void get_input(char *mainstring, char *substring)
{

    printf("Enter the main string : ");
    fgets(mainstring, 100, stdin);
    printf("Enter the substring string : ");
    fgets(substring, 100, stdin);

}

int substring_position(char *main_string, char *substring, int8_t *position)
{
    int8_t index_main_string=0, index_substring=1;
   while(*(main_string + index_main_string)!='\0')    //loop until the NULL character of the string
   {
       if(*(main_string + index_main_string)==*substring)
       {
           while(1)
           {
               if(*(substring + index_substring)=='\n')    //look for all characters until '\n'
            {

                *position= index_main_string+1;

                return 1;                                             
            }

                if(*(main_string + index_main_string + index_substring)!=*(substring + index_substring))
            {

               break;
            }

            index_substring++;
           }

       }
       index_main_string++;
   }

   return -1;                                


}

void print_output(char *main_string, char *substring, int8_t *position )
{
    if(substring_position(main_string, substring, position)==1)
    {
        printf("Substring position : %"PRId8, *position);

    }
    if(substring_position(main_string, substring, position)==-1)
    {
        printf("Substring not found");
    }
}

