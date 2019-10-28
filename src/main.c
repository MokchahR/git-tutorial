#include <stdio.h>
#include <espl_lib.h>
#include <stdlib.h>

int main ()
{
int num ; 
char input;
char *word;
printf("Hello ESPL. \n");

printf("Give me a number: ");
scanf("%d", &num);
word=num_to_words(num);

printf("The correspondent character is: %c \n",*word);

printf("Do you want to run again ?");
scanf("%s",&input);
if (input == 'y') {
	do {
                 printf("Give me a number: ");
		 scanf("%d", &num);
                 word=num_to_words(num);
                 printf("The correspondent character is: %c \n",*word);
		 printf("Do you want to run again ?");
		 scanf("%s",&input);
		} while (input=='y');
}
else exit(0);
}