#include<iostream>
using namespace std;

int Sum(int n)
{
    if (n==1) return 1;
    return n+Sum(n-1);
}
int main()
{
    int n; cin>>n;
    cout<<Sum(n);
    return 0;
}