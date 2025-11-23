#include <iostream>
using namespace std;

int bubblesort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j =0; j < size-i-1; j++)
        {
           if (arr[j]>arr[j+1])
           {
            swap(arr[j],arr[j+1]);
           }
           
        }
        
    }
}

int main()
{
    int arr[]={3,4,9,7,1,0};
    int size=6;

    bubblesort(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}