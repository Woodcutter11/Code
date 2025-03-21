#include<iostream>
using namespace std;

int main()
{
    int n,count;
    
    cout<< "Enter a number: \n";
    cin>> n;
    
    cout<< "Prime number till:" <<n<<endl;
    for(int i=2 ; i<=n ; i++)
    {
    count=0;
    for (int j=2 ; j<i ; j++)
    {
    if(i%j==0)
    count++;
    }
    
    if (count == 0)
    {
    cout << i<< "\n";
    }
    }
    return 0;
    }