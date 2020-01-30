#compile, link, and run the application
all: part1 part2
	./part1
	@echo " "
	./part2

#link part1.o to executable "part1"
part1: part1.o
	g++ -o part1 part1.o

#link part2.o to executable "part2"
part2: part2.o
	g++ -o part2 part2.o

#compile the part1.cpp to part1.o
part1.o: part1.cpp
	g++ -c part1.cpp

#compile the part2.cpp to part2.o
part2.o: part2.cpp
	g++ -c part2.cpp

#remove built files
clean:
	@echo "Cleaning up..."
	rm -rf part1 part1.o part2 part2.o *~
