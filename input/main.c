#include <stdio.h>

int main()
{
    char buf[100];
    printf("Enter a string: ");
    fgets(buf, sizeof(buf), stdin);
    printf("You typed: %s\n", buf);
}
