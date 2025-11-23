#include <iostream>
using namespace std;

bool find(int arr[],int size,int key){
    bool found=1;
     for (int i = 0; i < size; i++)
     {
        if(arr[i]==key){
            return 1;
        }
     }
     
     return 0;

     
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int n;
    cout<<"Enter the element you want to find ";
    cin>>n;

    if(find(arr,size,n)){
        cout<<"It is in the array ";
    }
    else{
        cout<<"It is not in the array ";
    }

    
    return 0;
}