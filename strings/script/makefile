CC = gcc
CFLAGES = -Wall -c -g
OBJ =./obj/
SRC =./src/
BIN = ./bin/


p1out: $(OBJ)prog1.o
	$(cc) -o $(BIN)p1out $(OBJ)prog1.o	

./obj/prog1.o: $(SRC)prog1.c
	$(CC) $(CFLAGES) $(SRC)prog1.c
	mv *.o $(OBJ)

clean:
	rm -f $(OBJ)/*
	rm -f $(OBJ)/*
	@echo "Cleaning done"
