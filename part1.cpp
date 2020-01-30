#include <time.h> 
#include <iostream>
#include "List.h"
#include "Vector.h"

using namespace std;

const int elements = 1000;

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main (int argc, char * const argv[]) {

   clock_t start, finish ;// used for getting the time.
   char one = 1;

   List<char> myList;
   start = clock();
   for(int i=0; i<elements; i++)
   {
	   myList.push_back(one);
   }
   finish = clock();
   double list_insertion_time = elapsed_time(start,finish);
   start = clock();
   myList.visitAll();
   finish = clock();
   double list_visit_time = elapsed_time(start,finish);
   
   Vector<char> myVector;
	start = clock();
	for(int i=0; i<elements; i++)
   {
	   myVector.push_back(one);
   }
   finish = clock();
   double vector_insertion_time = elapsed_time(start,finish);
   start = clock();
   myVector.visitAll();
   finish = clock();
   double vector_visit_time = elapsed_time(start,finish);

   cout << "Eli Planas\n301359051\neplanas\nProgram: part1\nType of Elements: char\nNumber of Elements: "<<elements<<"\nTime units: milliseconds"<<"\nTime for Vector Insertion: "<< vector_insertion_time <<"\nTime for List Insertion: "<< list_insertion_time <<"\nTime for Vector Visiting: "<< vector_visit_time <<"\nTime for List Visiting: "<< list_visit_time <<endl;
   return 0;
}
