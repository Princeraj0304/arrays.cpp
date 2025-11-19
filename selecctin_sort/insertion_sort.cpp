#include <iostream>
using namespace std;

int insertionsort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int temp=arr[i];
        int j=i-1;

        for (; j >=0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            
        }

        arr[j+1]=temp;
        

    }

}

int main()

{
    int arr[]={12,5,66,2,6,8};
    int size=6;
    insertionsort(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}