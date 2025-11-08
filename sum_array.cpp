#include <iostream>
using namespace std;

int sumarr(int arr[],int size){
      int sum=0;
      for (int i = 0; i < size; i++)
      {
        sum=sum+arr[i];
      }

      return sum;
      
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter your array size ";
    cin>>size;
    cout<<"Enter your elements ";

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        cout<<endl;
    }

    cout<<sumarr(arr,size);
    
    return 0;
}