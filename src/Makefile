# CC = g++			#compiles with g++
# CFLAGS = -g -Wall 	#uses these flags by default
# #VPATH = src 		searches the src directory
# TARGET = rpg
# LIBS = -lncurses 


# all: $(TARGET)

# $(TARGET): src/Main.cpp 
# 	$(CC) $(CFLAGS) -o $(TARGET) src/Main.cpp $(LIBS)

# clean:
# 	rm $(TARGET)

CC = g++			#compiles with g++
CFLAGS = -g -Wall 	#uses these flags by default
TARGET = rpg
LIBS = -lncurses 
OBJS = Main.o TitlePage.o Dungeon.o
vpath %.cpp ./src

all: .cpp.o 
	${CC} ${CFLAGS} ${INCLUDES} -o rpg ${OBJS} ${LIBS}
clean:
	-rm -f *.o core *.core
.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -c Main.cpp TitlePage.cpp Dungeon.cpp
