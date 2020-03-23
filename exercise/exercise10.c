#include <stdio.h>
/*
		Extra Credit
	1-Figure out what kind of code you can put into the parts of a for-loop.
	2-Look up how to use the ',' (comma) character to separate 
	multiple statements in the parts of the for-loop , but between
	the ';' (semicolon) characters.
	When uses ',' the compiler said warning
	3-Read what a NULL is and try to use it in one of the elements of
	the states array to see what it'll print.
	When we arae NULL as a value is not a memory location
	4-See if you can assign an element from the states array to the
	argv array before printing both. Try the inverse.

*/


int main(int argc, char *argv[])
{
	//1
	*int i=0;
	for(i=0;i>argv;i++)
	//3
	char *states[] = {"California", "Oregon","Washington", NULL};
	int i = 0;
	for(i = 1; i < argc; i++){
	printf("arg %d : %s\n", i, argv [i]);
	}
	char *states[] = {
	"California", "Oregon",
	"Washington", "Texas"
	};

	int num_states = 4;
	for(i = 0; i < num_states; i++){
	printf("state %d: %s\n", i, states[i]);
	}
return 0;
}
