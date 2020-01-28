#include <time.h> 
#include <iostream>
#include "List.h"
#include "Vector2.h"

using namespace std;

const int elements = 1000000;

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main (int argc, char * const argv[]) {

   clock_t start, finish ;// used for getting the time.

   start = clock();
   List<int> myList;
   for(int i=0; i<elements; i++)
   {
	   myList.push_front(1);
   }
   myList.visitAll();
   finish = clock();
   double list_time_taken = elapsed_time(start,finish);

	start = clock();
   Vector<int> myVector;
	for(int i=0; i<elements; i++)
   {
	   myVector.push_front(1);
   }
   myVector.visitAll();
   finish = clock();
   double vector_time_taken = elapsed_time(start,finish);

   cout << "Eli Planas\n301359051\neplanas\nProgram: [part1]\nType of Elements: int\nNumber of Elements: "<<elements<<"\nTime units: milliseconds"<<"\nTime for Vector Insertion: "<<vector_time_taken<<"\nTime for List Insertion: "<<list_time_taken<<"\nTime for Vector Visiting: [float]\nTime for List Visiting: [float]"<<endl;
   return 0;
}