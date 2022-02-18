#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int ld,sum=0,x=0;
    while(n>0)
    {
        ld=n%10;
        sum = sum + ld*pow(8,x);
        x++;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
