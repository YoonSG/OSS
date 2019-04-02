run : functions.o main.o
	gcc -o run functions.o main.o
functions.o : functions.c
	gcc -c -o functions.o functions.c
main.o : main.c
	gcc -c -o main.o main.c
clean : 
	rm *.o

