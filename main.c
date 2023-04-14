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
parameter* checkParameter(int argc,char** argv);

//argc = count of lines
//argv = array of strings of lines
int main(int argc,char** argv)
{
    mo_program new_momo;

/*1
    
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
    
    parameter *command = checkParameter(argc,argv);
    
    for (int i = 0; i < argc || i < 8; i++)
    {

    }


    printf("Switch passed!\n");

    return 0;
}

parameter* checkParameter(int argc,char** argv)
{
    if (argc == 1) return NULL;
    
    parameter *newList=malloc(sizeof(parameter));
    

    for (int i  = 1; i < argc || i < 8; i++)
    {
        if (argv[i][0]== '-') //read command
        {
            switch (argv[i])
            {
                case "-o":
                    newList
            }
        }
    }
    
    
}