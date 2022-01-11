CC:=gcc
CFLAGS:=-Wall -shared
LIB:=libfile_reader.so
OBJ_FILE:=file_reader.o

all: $(LIB)

$(LIB):
	$(CC) -c -fPIC file_reader.c
	$(CC) $(CFLAGS) -o $(LIB) $(OBJ_FILE) $^
	rm -f $(OBJ_FILE)

uninstall:

clean:
	rm -f $(LIB)
