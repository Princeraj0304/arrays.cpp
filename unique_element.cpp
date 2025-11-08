#include <iostream>
using namespace std;

int unique(int arr[],int size){
    int ans=0;
     for (int i = 0; i < size; i++)
     {
      ans=ans^arr[i];  
     }

     return ans;
     
}

int main()
{
    int arr[]={43,43,56,7,56,87,87};
    int size=7;

    cout<<unique(arr,size);
    return 0;
}