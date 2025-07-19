//all one follows zero
//input=>[1 1 1 0 0]=>total zero are 2
//note in this code we returning the position of first zero 

#include<iostream>
using namespace std;
int binary_search(int arr[],int size)
{
    int result=size;
    int low=0;
    int mid;
    int high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(arr[mid]==1)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
            result=mid;
        }
        
        
    }
    return result;
}

int main()
{
    int n;
    cout<<"enter the array size:";
    cin>>n;
    int a[n];
    cout<<"enter array element:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int index=binary_search(a,n);
    cout<<"total no of zeroes are:"<<n-index;
    
    return 0;
}
