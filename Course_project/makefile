all: course_project

course_project: course_project.o temp_function.o data.o list.o
	gcc -o course_project course_project.o temp_function.o data.o list.o

course_project.o: course_project.c
	gcc -c -o course_project.o course_project.c

data.o: data.c
	gcc -c -o data.o data.c

temp_function.o: temp_function.c
	gcc -c -o temp_function.o temp_function.c

list.o: list.c
	gcc -c -o list.o list.c

clean:
	del *.o
	del *.exe

clean_object:
	del *.o