#include <iostream>
using namespace std;

int main()
{
  int x=1;

  cout<<"Dame un numero entero "<<endl;
  cin>>x;

  while(x<=5){
    x%3==0;
    // if(x%3==0)
    //  x=x+2;
    if(x%3>0)
      cout<<"print "<<x<<endl;
    //cin>>x;
    x=x+2;
  }
// if(x>5)  
return 0;
}





