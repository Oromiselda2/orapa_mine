game: input.o menu.o game.o main.o board.o
	gcc -fsanitize=address -g -o ORAPA input.o menu.o board.o game.o main.o


%.o: %.c
	gcc -c $<

clean:
	rm *.o game
