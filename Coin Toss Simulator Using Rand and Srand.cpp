#include <iostream>
#include <cmath>
#include <ctime>
#define NUM_TOSS 1000
using namespace std;

void toss();

int main()
{
   toss();
   
   system("pause");
   return 0;    
}

void toss()
{
   float heads=0;  
   
   srand(time(NULL));
   
   for(int x=1;x<=NUM_TOSS;x++)
   {
      int flip=rand()%2;
      
      cout << "Toss " << x << ':' << flip << endl;
      
      if(flip==0)
         heads++;
   }
   
   cout << "Number of times heads came up: " << static_cast<int>(heads) << endl;
   cout << "Number of times tails came up: " << static_cast<int>(NUM_TOSS-heads) << endl << endl;
   
   cout << "Percentage heads: " << heads/NUM_TOSS*100.0 << '%' << endl;
   cout << "Percentage tails: " << (NUM_TOSS-heads)/NUM_TOSS*100.0 << '%' << endl << endl;
}
