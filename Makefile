CC = ./llvm-mos/bin/mos-c64-clang
CFLAGS = -Os
SRCS = input/main.c

all:
	${CC} ${CFLAGS} -o out.prg $(SRCS)
