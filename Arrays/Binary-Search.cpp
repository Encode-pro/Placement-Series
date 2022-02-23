/* BINARY SEACRCH
Compare x with the middle element.
If x matches with the middle element, we return the mid index.
Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
Else (x is smaller) recur for the left half.
*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(array[mid]==key)
        {
            return mid;
        }
        else if(array[mid]>key)
        {
            e= mid-1;
        }
        else
        {
            s= mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i = 0;i<n;i++)
    {
        cin>>array[i];
    }
    int key;
    cin>>key;
    int result = binarySearch(array,n,key);
    cout<<result<<endl;
    
    return 0;
}