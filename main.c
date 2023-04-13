#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct mo_program
{
    FILE* input_F;
    char* output_Name;
    FILE *output_F;
}  mo_program;

typedef struct parameter
{
    char command[10];
    char argument;
} parameter;

//Check wether if it gives us a command and returns a parameter array.
char* checkParameter(int argc,char** argv);

//argc = count of lines
//argv = array of strings of lines
int main(int argc,char** argv)
{
    mo_program new_momo;


    
    parameter *command = checkParameter(argc,argv);
    if (command == NULL) goto passSwitch;

    
    passSwitch;
    printf("Switch passed!\n");

    return 0;
}

parameter* checkParameter(int argc,char** argv)
{
    if (argc == 1) return NULL;
    
    parameter *newList=malloc(sizeof(parameter));
    while (1)
    {
        if (strcmp(argv[1],"-o")==0)
        {
            newList =
        }
    }
    
    
}