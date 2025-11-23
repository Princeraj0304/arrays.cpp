#include <iostream>
using namespace std;

int firstoccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }

        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;


        
    }
    return ans;
}

int lastoccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    int ans=0;

    while(start<=end){
        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }

        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;


        
    }
    return ans;
}


int totaloccuance(int arr[],int size,int key){
    if( firstoccurance(arr,size,key)==-1){
        return 0;
    }
    int totaloccurances=(  lastoccurance(arr,size,key)- firstoccurance(arr,size,key))+1;
    return totaloccurances;
}

int main()
{
    int arr[]={2,4,6,18,18,18,18,10,12,14};
    int size=10;
    int key=8;

   cout<<"The first occurance of 8 is : "<< firstoccurance(arr,size,key)<<endl;
    cout<<"The last occurance of 8 is : "<< lastoccurance(arr,size,key)<<endl;

    cout<<"The total number of occurances are :"<<totaloccuance(arr,size,key);
    return 0;
}