#include <stdio.h>

#define CLR 147
#define UP 142
#define BALL 209
#define CRSR_DOWN 17
#define BALL 209
#define CRSR_LEFT 157

int main()
{
    printf("%c", CLR); // clear
    printf("%c", UP); // up charset
    for (int x = 0; x < 10; ++x) {
        printf("%c", CRSR_DOWN); // Cursor down
    }
    while (1) {
        for (int bl = 0; bl < 40; ++bl) {
            printf(" %c%c", BALL, CRSR_LEFT); // pallina
            for (int tm = 0; tm < 100; ++tm) {
                continue;
            }
        }
        for (int bl = 40; bl > 0; --bl) {
            printf(" %c%c%c%c", CRSR_LEFT, CRSR_LEFT, BALL, CRSR_LEFT);
            for (int tm = 0; tm < 100; ++tm) {
                continue;
            }
        }
    }
}
