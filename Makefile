CC = ./llvm-mos/bin/mos-c64-clang
CFLAGS = -Os
SRCS = ball/main.c

all:
	${CC} ${CFLAGS} -o out.prg $(SRCS)
