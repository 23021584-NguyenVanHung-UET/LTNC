#include <iostream>

using namespace std;
void drawTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(i-1);j++) cout <<" ";
        for(int j=i;j<=n;j++) cout <<"*";
        cout <<"\n";
    }
}
int main()
{
    int n;
    cin >> n;
    drawTriangle(n);
    return 0;
}
