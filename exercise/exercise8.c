#include <stdio.h>
 /* 		Extra credit
	1-Try assigning to elements in the areas array with areas[0] =100; ans similar
	2-Try assigning to elements of name and full_name.
	3-Try setting one element of areas to a character from name
	4-Go search online for the different sizes used for intergers on different CPUS.
*/



int main(int argc, char *argv[])
{
	// 1-
	int areas[0] = 100;
	int areas[1] = 200;
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Zed";
	char full_name[] = {
		'z', 'e', 'd',
		' ', 'A', '.', ' ',
		'S', 'h', 'a', 'w', '\0'

			};
	printf(" Area one is %d and Area two is %d\n", areas[0], areas[1]); //1
	//2-3
	char name[] = "karla Valdez"
	char full_name[] = {
		'K', 'a', 'r', 'l', 'a'
			' ',
		'V', 'a', 'l', 'd', 'e', 'z'
			};
	/*
  	8-bit: 0 to 255
	16-bit: 0 to 65,535
	32-bit: 0 to 4,294,967,295
	64-bit: 0 to 18,446,744,073,709,551,615
	*/
  	printf("The size of an int: %ld\n", sizeof(int));
 	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n",sizeof(areas) / sizeof(int));
	printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
	printf("The size of a char: %ld\n", sizeof(char));
 	printf("The size of name (char[]): %ld\n",sizeof(name));
 	printf("The number of chars: %ld\n",sizeof(name) / sizeof(char));
 	printf("The size of full_name (char[]): %ld\n",sizeof(full_name));
	printf("The number of chars: %ld\n",sizeof(full_name) / sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

}
