CC:=gcc
CFLAGS:=-Wall -shared
LIB:=calculator.so
OBJ_FILE:=math_functions.o

all: $(LIB)

$(LIB):
	$(CC) -c -fPIC math_functions.c
	$(CC) $(CFLAGS) -o $(LIB) $(OBJ_FILE) $^
	rm -f $(OBJ_FILE)

install: $(LIB)
	install -m 644 math_functions.h $(DESTDIR)/$(PREFIX)/include

uninstall:

clean:
	rm -f $(LIB)
