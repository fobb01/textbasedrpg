CC = g++			#compiles with g++
CFLAGS = -g -Wall 	#uses these flags by default
#VPATH = src 		searches the src directory
TARGET = rpg
LIBS = -lncurses 


all: $(TARGET)

$(TARGET): src/main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) src/main.cpp $(LIBS)

clean:
	rm $(TARGET)