#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int b,c;
    int a = max(x,max(y,z));
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    
    if(a*a == b*b+c*c)
    {
        cout<<"Pythogorean Triplet";
    }
    else
    {
        cout<<"Not Pythogorean Triplet";
    }

return 0;
}