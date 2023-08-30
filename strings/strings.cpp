#include <cstdio>
#include <cstring>
// This is for setup of string using C programming within C++
int main()
{
    char* proverb_1 = "A bad workman always blames his tools";
    char proverb_2[60] = "A journey of thousand miles begins with a single step";
//  char* proverb_1 =(char *) "A bad workman always blames his tools"; // will remove warning but could be called hacky
//  const char* proverb_1 = "A bad workman always blames his tools";  // gets rid of warning but can't modify later
    printf("Here is a C-style string: %s\n", proverb_1);
    printf("Length of the first string %lu\n", strlen(proverb_1));

    printf("Here is another C-style string: %s\n", proverb_2);
    printf("Length of the second string: %lu\n", strlen(proverb_2));

    return 0;
}