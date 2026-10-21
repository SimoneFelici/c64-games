#include <stdio.h>

int main()
{
    char buf[100];
    printf("Enter a string:\n");
    fgets(buf, sizeof(buf), stdin);
    printf("You typed: %s\n", buf);
}
