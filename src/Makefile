#
# Seccion 1
#
# Esta seccion se puede modificar segun
# los requerimientos de su proyecto

CC=gcc
SRC=hora.c
CFLAGS=-Wall -std=c17
#LIBS=-ldl


BIN=main
#
# Seccion 2 (NO MODIFICAR!!!)
#
OBJ=$(SRC:.c=.o)

all:  $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LIBS) $(OBJ) -o $(@)
	@rm -f $(OBJ)
	@rm -f *~
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f *~
	@rm -f $(BIN)
	
