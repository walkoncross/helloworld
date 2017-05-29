#include <stdio.h>
#include "add.h"
//add some comments

int main(int argc, char* argv[])
{
    printf("Hello World!\n");
    
    printf("This message is added through github website!\n");


    printf("Print Arguments List:\n")
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]:　%s\n", i, argv[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("This is just a loop test, iter = %d\n", i);
    }

    return 1;
}
