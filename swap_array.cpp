#include <iostream>
using namespace std;

void printarr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
void swaparray(int arr[],int size){
        for (int i  = 0; i < size; i=i+2)
        {
          if(i+1<size){
              swap(arr[i],arr[i+1]);
          }
        }
        
}

int main()
{
    int arr[7]={23,4,5,64,6,2,7};
    int size=7;

    swaparray(arr,size);
    printarr(arr,size);
    return 0;
}