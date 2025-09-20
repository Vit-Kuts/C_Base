all: prog

prog: HW11.o temp_api.o
	gcc -o prog HW11.o temp_api.o

HW11.o: HW11.c
	gcc -c -o HW11.o HW11.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	del *.o
	del prog.exe