/* INSERTION SORT 
To sort an array of size n in ascending order: 
1: Iterate from arr[1] to arr[n] over the array. 
2: Compare the current element (key) to its predecessor. 
3: If the key element is smaller than its predecessor, compare it to the elements before. 
Move the greater elements one position up to make space for the swapped element.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}