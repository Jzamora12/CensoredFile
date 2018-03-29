//Author:Joseluis Zamora  
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;

  in>>current;
  if (current >=65 && current <=90 || current >= 97 && current <= 122 )
  {
    first= current; 
  }

  while ( in>>current)
  {
    if ( current >= 65 && current <= 90 || current >= 97 && current <= 122 )
    {
      last = current; 
    }
  }
  
  in.close();
  cout<<first<<"**"<<last<<endl;

  return 0;
}
