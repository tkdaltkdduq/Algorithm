#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string trans(int numb, int  bin)
{
	if( numb < bin)
    	return to_string(numb);
     
     int rem = numb % bin;
     numb = numb / bin;
     
     return trans(numb, bin) + to_string(rem);
}


int main () {
  string toPrint = trans(20 ,2);
  cout << toPrint;
  return 0;
}
