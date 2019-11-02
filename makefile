CC = g++				#compiles with g++
CFLAGS = -g -Wall 		#uses these flags by default
VPATH = src 			#searches the src directory
LIBS = -lncurses 		#Project uses ncurses

all: rpg

rpg: 

clean:
	rm -f *.o