//input=>[0 1 -1 0 5 3 0 7]=>o/p=>[1,-1,5.3,7,0,0,0]
#include <iostream>
using namespace std;

void trailing(int arr[], int size) 
{
    int count;
    int pos = 0;
    for(int i = 0; i < size; i++)
    {
        
        if(arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }


    }
    // Shift the remaining elements to the left
    for(int i = pos; i < size; i++)
    {
        arr[i] = 0;
        count++;
    }
    cout << "Array after trailing all zero: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"total zeroes:"<<count<<endl;
    
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    trailing(arr, size);
    
    return 0;
}
