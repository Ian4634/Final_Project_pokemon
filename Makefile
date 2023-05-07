image: main.o variables.o events.o
	gcc main.o ./lib/my_lib/events.o ./lib/my_lib/variables.o  -L ./lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o image.exe
main.o: main.c
	gcc -I ./include main.c -c
variables.o: ./lib/my_lib/variables.c
	gcc -I ./include ./lib/my_lib/variables.c -c -o ./lib/my_lib/variables.o
events.o: ./lib/my_lib/events.c
	gcc -I ./include ./lib/my_lib/events.c -c -o ./lib/my_lib/events.o