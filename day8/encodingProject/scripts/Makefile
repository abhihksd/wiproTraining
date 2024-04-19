CC = gcc

OBJ = ./obj
SRC = ./src
INC = ./inc
BIN = ./bin

LDFLAGS = -o
CFLAGS = -c -g

$(BIN)/app: $(OBJ)/main.o $(OBJ)/utility.o
	$(CC) $(LDFLAGS) $(BIN)/app $(OBJ)/main.o $(OBJ)/utility.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c -I $(INC)/
	mv main.o $(OBJ)/

$(OBJ)/utility.o: $(SRC)/utility.c
	$(CC) $(CFLAGS) $(SRC)/utility.c -I $(INC)/
	mv utility.o $(OBJ)/

clean:
	rm -f $(BIN)/app
	rm -f $(OBJ)/*.o
	@echo "Cleaning Done!"
