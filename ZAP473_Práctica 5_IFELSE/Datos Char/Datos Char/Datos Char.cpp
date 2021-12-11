#include <stdio.h>

int main()
{
    int i;

    // Lets say we have 3 words
    int n = 1;

    // Declaration of 2-D char array
    const char array[n][5];

    // Initialization of 2-D char array
    for (i = 0; i < 1; i++)
        scanf("%s", array[i]);

    // print the words
    for (i = 0; i < 1; i++)
        printf("%s\n", array[i]);

    return 0;
}