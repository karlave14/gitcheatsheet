#include <stdio.h>

/*
		Extra Credit
	-Make the number you assigb to universe_of_defects various sizes until
	you get a warning from the compiler


 */

int main(int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;
	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bus_rate);

	long universe_of_defects = 1L * 1024L * 1024L * 1024L; // here you can get a warning
	// Add universe_of_defects 1L *1024L *104L *1024L *1024L *1024L *1024L *1024L *1024L
      /* Change the number makes that one too big when asigned more *1024L
               print a big number with a more bits   */
	printf("The entire universe has %ld bugs.\n", universe_of_defects);

	double expect_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs,\n", expected_bugs);

	double part_of_universe = expectec_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);
//Here only print a 'char' beacuse they are a multiplication char * int and print only char
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n", care_percentage);
return 0;

}
