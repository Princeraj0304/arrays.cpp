#include <iostream>
using namespace std;

void pairsum(int arr[],int size,int s){
    int ans=0;

    for (int i = 0; i < size; i++)
    {
       for (int j = i+1; j < size; j++)
       {
        if(arr[i]+arr[j]==s){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
       }
       
    }
    
}

int main()
{
    int arr[32]={1,2,3,4,5,6,4};
    int size=7;
    cout<<"Enter the sum value ";
    int s=5;
    cin>>s;    

    pairsum(arr,size,s);
    return 0;
}