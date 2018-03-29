//Author:Joseluis Zamora  
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;

  in>>first;
  while ( in>>last)
  {
  }
  
  in.close();
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last



  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;

  return 0;
}
