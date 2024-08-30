//Given Project code
#include <stdlib.h>
#include <stdio.h>
#include "random.h"
#include <time.h> 

void rand_string(char *s, size_t size)
{
    for(int i = 0; i < size; i++)
    {
        s[i] = randchar();
        s[size] = '\0';
    }
}

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
    if (s) 
    {
        rand_string(s, size);
    }
    return s;
}

int main()
{
    srand(time(0)); //Starting random num generator
    char* randomWord = rand_string_alloc(7); //Create 7 letter word
    printf("Test String is %s\n", randomWord);
    free(randomWord);
    return 0;
}