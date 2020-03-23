#include <stdio.h>

/*
	Extra Credit
	1- Assign the characters into numbers and then use printf to
	print them a character at a time.
	2-Do the inverse for name , trying to treat it like an array of int
	and print it out one int at a time.
	3-If an array of characters is 4 bytes long, and an integer is 4
	bytes long, then can you treat the whole name array like it's just
	an integer? How might you accomplish this crazy hack? I
	-I think is 4 bytes


*/

int main(int argc, char *argv[])
{
	//1
	char numbers[0] = 'a';
	char numbers[1] = 'b';
	char numbers[2] = 'c';
	char numbers[3] = 'd';

	printf("Numbers: %c, %c, %c and  %c\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	//Does not throw any error

	//2
	int name[0] =  100;
	int name[1] = 200;
	int name[2] = 300;
	int name[3] = 400;
	printf("Name is: %d, %d, %d, %d \n", name[0], name[1], name[2], name[3]);

	int numbers[4] = {0};
	char name[4] = {'a'};

	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("Name each %c %c %c %c\n",name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	name[0] = 'z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1],
					numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1],
					name[2], name[3]);
	printf("name: %s\n", name);
	char *another = "Zed";
	printf("another %s\n", another);
	printf("another each %c %c %c %c\n", another[0], another[1],
					another[2], another[3]);

return 0;
}
