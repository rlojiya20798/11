#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int i = 10;
    char c = 'a';

    int *iptr;
    char *sptr;
    int *iptr2;

    iptr = &i;
    sptr = &c;
    iptr2 = iptr;

    printf("i : %p\n%p (size: %i)\n", iptr, &i, sizeof(iptr));
    printf("c : %p\n%p (size: %i)\n", sptr, &c, sizeof(sptr));
    printf("iptr2: %p, %i\n", iptr2, *iptr2);

    return 0;
}