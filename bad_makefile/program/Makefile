CC:=gcc
CFLAGS:=-Wall -Ipwd
OBJS:=main.o math_functions.o
BIN:=calculator

all: $(BIN)

$(BIN): 
	$(CC) -L ../library/ $(CFLAGS) main.c math_functions.c -o main

clean:
	rm -f $(BIN) $(OBJS)
