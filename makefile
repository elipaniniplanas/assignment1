#compile and link the application
all: main

#run the application "main"
run: main
	@echo "Running "
	./main

#link main.o and student.o to executable "main"
main: main.o student.o
	g++ -o main main.o student.o

#compile the main.cpp to main.o
main.o: main.cpp
	g++ -c main.cpp

#compile the student.cpp to student.o
student.o: student.cpp
	g++  -c student.cpp

#remove built files
clean:
	@echo "Cleaning up..."
	rm -rf main main.o student.o *~