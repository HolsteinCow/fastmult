#RS make template
CC=g++
CFLAGS=-g -O3
TARGET=fastmult
OBJ=fastmult.o

all: $(TARGET)

%.o: %.c 
	$(CC) -o $@ -c $< $(CFLAGS)
$(TARGET): $(OBJ)
	$(CC) $^ -o $@ $(CFLAGS)

.PHONY: clean
clean:
	-rm -f *.o fastmult
