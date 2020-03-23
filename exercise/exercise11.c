#include <stdio.h>
/*
	1-Make these loops count backward by using i-- to start at
	argc and count down to 0. You may have to do some math to
	make the array indexes work right.
	2-Use a while loop to copy the values from argv into states. 
	Make this copy loop never fail such that if there's too many
	argv elements it won't put them all into states. 
	3-Research if you've really copied these strings. The answer may
	surprise and confuse you though. <--- it is confused

*/


int main(int argc, char *argv[])
{
	//1
	int i =argc -1;
	while(i < argc){
		printf("argc is %d: %s\n ", i, argv[i]);
		i--;
		}
	//2
	int i = 0;
	while(i < argc){
		states[i] = argv[i];
		i++;
		}

	int i = 0;
	while(i < argc){
	printf("arg %d: %s\n", i, argv[i]);
	i++;
	}
	char *states[] = {
	"California", "Oregon", "Washingtin", "Texas"};
	int num_states = 4;
	i = 0;
	while(i < num_states){
	printf("state %d: %s\n", i, states[i]);
	i++;
	}

return 0;
}
