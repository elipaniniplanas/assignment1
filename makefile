#compile and link the application
all: part1

#run the application "main"
run: part1
	@echo "Running... "
	./part1

#link main.o and student.o to executable "main"
part1: part1.o
	g++ -o part1 part1.o

#compile the main.cpp to main.o
part1.o: part1.cpp
	g++ -c part1.cpp

#remove built files
clean:
	@echo "Cleaning up..."
	rm -rf part1 part1.o *~
