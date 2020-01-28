#include <time.h> 
#include <iostream>
#include "List.h"
#include "Vector.h"

using namespace std;

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main (int argc, char * const argv[]) {

   clock_t start, finish ;// used for getting the time.

   start = clock();
   List<int> myList;
   Vector<int> myVector;


   cout << "Eli Planas\n301359051\neplanas\nProgram: [part1]\nType of Elements: int\nNumber of Elements: "<<myList.size()<<endl;
   finish = clock();
   double time_taken = elapsed_time(start,finish);
   cout<< 'Time units: '<<time_taken<<'\nTime for Vector Insertion: [float]\nTime for List Insertion: [float]\nTime for Vector Visiting: [float]\nTime for List Visiting: [float]\nare gays going to hell?" Allen replied: "Unless they repent, yes."'<<endl;
   return 0;
}