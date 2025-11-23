#include <iostream>
using namespace std;

int sortarr(int arr[],int size){
    int start=0;
    int end=size-1;
while(start<end){
    if (arr[start]==1)
    {
        start++;
    }
    else if(arr[end]==0){
        end--;
    }

    else{
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

}
}

int main()
{
    int arr[]={1,0,0,1,1,0,0,0,1,1};
    int size=10;

        sortarr(arr,size);

    for (int i = 0; i < size; i++)
    {
cout<<arr[i]<<" ";
    }
    


    return 0;
}