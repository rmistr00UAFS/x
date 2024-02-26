#include <stdio.h>
#include <string.h>

struct A
{
    int n;
    char c;
    char s[100];
};

int main()
{

    struct A a1;
    a1.c = 'x';
    strcpy(a1.s, "test");

    printf("%s", a1.s);

    struct A a2 = {100, 'y', "skjdksjd"};

    printf("%s", a2.s);

    return 0;
}
