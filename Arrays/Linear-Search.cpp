/* LINEAR SEARCH 
Start from the leftmost element of arr[] and one by one compare the key with each element of arr[]
If key matches with an element, return the index.
If key doesn’t match with any of elements, return -1.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int array[n];
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of array at position "<<i<<" ";
        cin>>array[i];
    }
    int key,pos=-1;
    cout<<"Enter the key value ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            pos=i;
            break;
        }
    }
    cout<<"The position of the key value in the given array is "<<pos;
    
    return 0;
}