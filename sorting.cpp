#include <iostream>
using namespace std;
void sorted(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        int minindex = i;  
        for (int j = i+1; j < size; j++)
        {
            if (arr[minindex]>arr[j])
            {
                minindex=j;
            
            }
           
              
        }
          swap(arr[minindex],arr[i]);
         
        
    }
    


}

int main()
{
    int arr[]={12,43,23,6,7,44,32};
    int size=7;

    sorted(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

 
    return 0;
}