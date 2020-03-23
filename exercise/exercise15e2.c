#include <stdio.h>
// Extra Credit

/*
Rewrite all the pointer usage so they're arrays
*/
int main(int argc, char *argv[])
{
        int ages[] ={ 23, 24, 12, 89, 2};
        char *names[] = { "Alan", "Frank", "Mary", "John", "Lisa"};
        int count = sizeof(ages) / sizeof(int);
        int i = 0;
for(i = 0; i < count; i++) {
 printf("%s has %d years alive.\n",
 names[i], ages[i]);
 }
 printf("---\n");
 // setup the pointers to the start of the arrays
 int *cur_age = ages;
 char **cur_name = names;
 // second way using pointers
 for(i = 0; i < count; i++) {
 printf("%s is %d years old.\n",
 *(cur_name+i), *(cur_age+i));
 }
 printf("---\n");
 // third way, pointers are just arrays
 for(i = 0; i < count; i++) {
 printf("%s is %d years old again.\n",
 cur_name[i], cur_age[i]);
 }
 printf("---\n");
 // fourth way with pointers in a stupid complex way
 for(cur_name = names, cur_age = ages;
 for(cur_name = names, cur_age = ages;
 (cur_age - ages) < count;
 cur_name++, cur_age++)
 {
 printf("%s lived %d years so far.\n",
 *cur_name, *cur_age);
 }
 return 0;
}
