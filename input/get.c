#include <c64.h>
#include <cbm.h>
#include <stdio.h>

void wait()
{
    while (VIC.rasterline != 255)
        ;
}

int main()
{
    for (;;) {
        unsigned char a = cbm_k_getin();
        if (a == 0)
            continue;
        if (a == 65)
            printf("Fire\n");
        else
            printf("%c\n", a);
        wait();
    }
}
