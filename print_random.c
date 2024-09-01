//Given Project code
#include <stdlib.h>
#include <stdio.h>
#include "random.h"
#include <time.h> 

char randchar();

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
    {
		putchar( randchar() );
    }
	putchar('\n');

	return(0);
}