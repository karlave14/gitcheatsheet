#include <stdio.h>
// Extra Credit

/*
Rewrite all the array usage in this program so that it's pointers.

*/
int main(int argc, char *argv[])
{
        int ages[] ={ 23, 24, 12, 89, 2};
        char *names[] = { "Alan", "Frank", "Mary", "John", "Lisa"};
        int count = sizeof(ages) / sizeof(int);
        int i = 0;

	for (i = 0; i < count; i++) {
	printf("%s has %d years alive.\n", *(names + i), *(ages + i));

	for(i=0;i<count;i++){
	printf("%s is %d years old.\n",*(cur_name+i),*(cur_age+i));



return 0;

}
