#include<iostream>
using namespace std;
long long pair1(long long n);
int main()
{
    long long p,t,min1=0,max1=0;
    cin>>p>>t;
    long long t1=p/t;
    long long r=p-(t1*t);
      min1+=(pair1(t1))*(r);
      min1+=pair1(t1-1)*(t-r);
      max1=pair1(p-t);
    cout<<min1<<" "<<max1<<endl;
}

long long pair1(long long n)
{
    return ((n*(n+1)/2));
}
