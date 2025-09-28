all: prog

prog: HW12.o temp_api.o data.o
	gcc -o prog HW12.o temp_api.o data.o

HW12.o: HW12.c
	gcc -c -o HW12.o HW12.c

data.o: data.c
	gcc -c -o data.o data.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	del *.o
	del prog.exe