#include <iostream>

using namespace std;
bool numPrime(int n)
{
    if (n==2||n==3||n==5) return true;
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                return false;
                break;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    if(numPrime(n)) cout<<"true"; else cout <<"no";
    return 0;
}
