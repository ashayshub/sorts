CC = gcc
CFLAGS = -Wall -Werror -Wmissing-prototypes -I. 

all: sort.h sort.c bubble.c selection.c insertion.c common.c
	${CC} ${CFLAGS} -o sort sort.c common.c bubble.c selection.c insertion.c

clean:
	rm -f *~ *.o sort
