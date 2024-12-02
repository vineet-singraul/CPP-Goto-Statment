#include <iostream>
using namespace std;
int main() 
{
    int a = 2;
       int b = 1;
    skip:
     
     cout<<a*b<<endl;
     ++b;
     if(b <= 10)
     {
            goto skip;
     }
    
}
