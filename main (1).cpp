/*
if n=3 then it will print
  1
 212
32123 
if n=4 then
   1
  212
 32123
4321234 
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
   for(int j=0;j<n;j++)
    {
        cout<<endl;
        for(int i=0;i<n+j;i++)
        {
            if(i+j<(n-1))
            cout<<" ";
            else
            cout<<abs(n-1-i)+1;
        }
            
        
    }

    return 0;
}