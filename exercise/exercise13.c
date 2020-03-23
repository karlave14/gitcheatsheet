#include <stdio.h>

/*  	Extra Credit
1- Write another program that uses math on the letter to convert it
to lowercase, and then remove all the extraneous uppercase
letters in the switch. <--- It is in other exercise13e.c
2-Use the ',' (comma) to initialize letter in the for-loop . Make it handle all of the arguments you pass it with yet another
for-loop . Convert this switch-statement to an if-statement . Which do
you like better?
3-In the case for 'Y' I have the break outside the if-statement . What's the impact of this and what happens if you move it
inside the if-statement . Prove to yourself that you're right.
<--- can do it*/
int main(int argc, char *argv[])
{

	if(argc !=2){
	printf("Error: You need one argument.\n");
	return 1;
	}
	int i = 0;
	//2
	for( i = 0; argv[1][i], letter != '\0'; i++)
	{
		char letter=argv[1][i];
	switch(letter){
	case 'a':
	case 'A':
		printf("%d: 'A'\n", i);
		break;
	case 'e':
	case 'E':
		printf("%d: 'E'\n", i);
		break;
	case 'i':
	case 'I':
		printf("%d: 'I'\n", i);
		break;
	case 'o':
	case 'O':
		printf("%d: 'O'\n", i);
		break;
	case 'u':
	case 'U':
		printf("%d: 'U'\n", i);
		break;
	case 'y':
	case 'Y':
		if(i > 2){
		printf("%d: 'Y'\n", i);
		}
		break;
	default:
		printf("%d: %c is not a vowel\n", i, letter);
		}
	}
   return 0;
}
