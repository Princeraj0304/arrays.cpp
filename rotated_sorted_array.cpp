#include <iostream>

using namespace std;

int getpivot(int arr[],int size){
       int start=0;
       int end=size-1;

       int mid=start+(end-start)/2;
       
       while (start<end){
           if (arr[mid]>arr[0])
           {
            start=mid+1;
           }

           else{
            end=mid;
           }

           mid=start+(end-start)/2;           
       }

       return start;
 
}

int binarysearch(int arr[],int initial,int final,int key){
     int start=initial;
     int end=final;

     int mid=start+(end-start)/2;

     while(start<=end){
        if(arr[mid]==key){
           return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }

        else{
            start=mid+1;
        }
         
         mid=start+(end-start)/2;


     }

     return -1;


     
}



int main()
{
    int arr[]={5,6,7,1,2,3,4};
    int size=7;
    int key=6;
    int pivot= getpivot(arr,size);

    if(key>=arr[pivot] && key<=arr[size-1]){
       cout<< binarysearch(arr,pivot,size-1,key);
    }

    else{
         cout<< binarysearch(arr,0,pivot-1,key);

    }




    return 0;
}