CC = gcc
CFLAGS = -Wall -Werror -Wmissing-prototypes

all: sort.h sort.c bubble.c selection.c insertion.c merge.c common.c
	${CC} ${CFLAGS} -o sort sort.c common.c bubble.c selection.c insertion.c merge.c

clean:
	rm -f sort
