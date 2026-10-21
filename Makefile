CC = ./llvm-mos/bin/mos-c64-clang
CFLAGS = -Os
SRCS = input/get.c

all:
	${CC} ${CFLAGS} -o out.prg $(SRCS)
