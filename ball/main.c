#include <c64.h>
#include <stdio.h>

#define CLR 147
#define UP 142
#define BALL 209
#define CRSR_DOWN 17
#define CRSR_LEFT 157

void wait()
{
    while (VIC.rasterline == 255)
        ;
    while (VIC.rasterline != 255)
        ;
}

int main()
{
    VIC.bgcolor0 = COLOR_CYAN;
    VIC.bordercolor = COLOR_BLUE;
    printf("%c", CLR); // clear
    printf("%c", UP); // up charset
    for (int x = 0; x < 10; ++x) {
        printf("%c", CRSR_DOWN); // Cursor down
    }
    while (1) {

        for (int bl = 1; bl < 40; ++bl) {
            printf(" %c%c", BALL, CRSR_LEFT);
            wait();
        }
        for (int bl = 40; bl > 1; --bl) {
            printf(" %c%c%c%c", CRSR_LEFT, CRSR_LEFT, BALL, CRSR_LEFT);
            wait();
        }
    }
}
