run : f1.o f2.o main.o
	gcc -o run f1.o f2.o main.o
f1.o : f1.c
	gcc -c -o f1.o f1.c
f2.o : f2.c
	gcc -c -o f2.o f2.c
main.o : main.c
	gcc -c -o main.o main.c
clean :
	rm *.o
