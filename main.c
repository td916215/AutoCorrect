#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXC 50

int main()
{
    printf("Enter text: ");

    char msg[MAXC];// = "hello world!\n\n";
    gets(msg);

    //char msg[] = "Hello world!\n\n";

    /*
    int i;

    for (i = 0; i < 13; i++)
    {
        printf("%c", msg[i]);
    }
    */

    // If first letter is lowercase...
    if ( islower(msg[0]) )
    {
        // make the first letter uppercase.
        msg[0] = toupper(msg[0]);
        printf("Auto-correct: \n%s\n", msg);
    }
    else
    {
        printf("No auto-correct needed.\n");
    }

    //printf("%s", msg);

    return 0;
}
