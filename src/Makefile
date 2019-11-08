CC = g++			#compiles with g++
CFLAGS = -g -Wall 	#uses these flags by default
TARGET = rpg
LIBS = -lncurses 
OBJS = Main.o TitlePage.o Dungeon.o Generator.o
SRC = Main.cpp TitlePage.cpp Dungeon.cpp Generator.cpp

rpg:  comp 
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}
	-rm -f *.o core *.core

comp:
	${CC} ${CFLAGS} ${INCLUDES} -c ${SRC}

clean:
	-rm -f *.o core *.core
