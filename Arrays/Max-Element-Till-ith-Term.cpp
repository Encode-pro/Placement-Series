// MAXIMUM ELEMENT TILL ith TERM


#include <iostream>
using namespace std;

int main()
{   
    int mx= -2000000;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++)
    {
        mx= max(mx,arr[i]);
        cout<<mx<<endl;
    }
    

    return 0;
}