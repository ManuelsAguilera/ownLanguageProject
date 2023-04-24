/*
    1) open input file
    2) Declare a name for the output file, default will be same as file name,
    but without extensions.
    3) Check parameters given to compiler  
         none) it has to be the first after running program, 
               and will have the file name that we'll compile.
        
        -o) Change output file name for the argv[i] given
    
    4) Start creating headers for new file.
    -5) Write functions of the program.
    6) Write main
    7) close both files and end process.

*/





#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ma_program
{
    FILE* input_F;
    char* output_Name;
    FILE *output_F;
}  ma_program;

typedef struct parameter
{
    char command[10];
    char argument;
} parameter;

//Check wether if it gives us a command and returns a parameter array.
parameter* checkParameter(int argc,char** argv);

//It deletes whathever was before the point.
char* deleteTypeFile(char*);




//argc = len of argv
//argv = array of strings of commands given by OS
int main(int argc,char** argv)
{
    ma_program *new_mamo;

   
    new_mamo->input_F = fopen(argv[1],"r");

    if (new_mamo->input_F == NULL) 
    {
        printf("No file to compile\n");
        exit(EXIT_FAILURE);
    } 
    
    new_mamo->output_Name = deleteTypeFile(argv[1]);

    parameter* options = checkParameter(argc,argv);
    
    for (int i = 0; options[i]!= NULL; i++)
    {
        switch (options[i].command)
        {
            case ("")
        }
    }


    printf("Switch passed!\n");
    
    return 0;
}

parameter* checkParameter(int argc,char** argv)
{
    if (argc == 1) return NULL;
    
    parameter *newList=malloc(sizeof(parameter));
    

    for (int i  = 2; i < argc || i < 8; i++)
    {
        if (!strcmp(argv[i],"-o"))
            {
                
            }
    }
    
    
}