#include <stdio.h>
/*
		Extra Credit

	1-Write a few more test cases for this program to see what you
	can come up with.
	2.Go back to Exercises 10 and 11, and use if-statements to
	make the loops exit early. You'll need the break statement to
	do that. Go read about it.
	3-Is the first test really saying the right thing? To you the "first
argument" isn't the same first argument a user entered. Fix it.

*/

int main(int argc, char *argv[])
{
	//2
	int i = 0;

	if(argc == 1)
	{
	printf("You onle have one argument. You suck.\n");
	}else if(argc > 1 && argc < 4){
		printf("Here's yout arguments:\n");
		for(i = 0; i < argc; i++){
		printf("%s ", argv[i]);
		}
	printf("\n");
		}else {
		printf("You have too many arguments. You suck.\n");
		}
	return 0;
}
