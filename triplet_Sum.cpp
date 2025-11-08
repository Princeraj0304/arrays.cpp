#include <iostream>
using namespace std;

void tripletsum(int arr[],int size,int sum){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
           for (int k = j+1; k < size; k++)
           {
            if (arr[i]+arr[j]+arr[k]==sum)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
           }
        }
        
    }
}
int main()
{
    int arr[]={1,4,5,7,4,6,7,2};
    int size=8;
    int s=12;

    tripletsum(arr,size,s);
    return 0;
}