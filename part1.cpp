#include <time.h> 

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main (int argc, char * const argv[]) {

   clock_t start, finish ;// used for getting the time.

   start = clock();
   /* stuff to time here */
   finish = clock();
   double time_taken = elapsed_time(start,finish);
}