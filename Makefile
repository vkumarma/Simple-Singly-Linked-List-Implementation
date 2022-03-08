#The variable CC specifies which compiler will be used.
#(because different unix systems may use different compilers)
CC=gcc

#The variable CFLAGS specifies compiler options 
#  -c :   Only compile (don't link)
#  -Wall: Enable all warnings about lazy / dangerous C programming 
# You can add additional options on this same line.
# WARNING: NEVER REMOVE THE -c FLAG, it is essential to proper operation
CFLAGS=-c -std=c99 -Wall -Wextra -g

# All of the .h header files to use as dependencies
HEADERS=functions.h

# All of the object files to produce as intermediary work
OBJECTS=main.o functions.o

# The final program to build
EXECUTABLE=linkedlist

# -------------------------------------------------

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf *.o $(EXECUTABLE)
