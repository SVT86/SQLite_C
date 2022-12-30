CC = gcc

main.exe:	main.o sqlite3.o 
			${CC} main.o sqlite3.o -o main.exe
main.o:		main.c
			${CC} -c main.c -o main.o
sqlite3.o:	sqlite3.c
			${CC} -c sqlite3.c -o sqlite3.o
clean:
			rm *.exe *.o