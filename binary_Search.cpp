#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<=end){
          if (key==arr[mid])
          {
            return mid;
          }

         if (arr[mid]>key)
         {
            end=mid-1;
         }
         else{
           start= mid+1;
         }

         mid = start + (end - start) / 2;
    }
    return -1;

}

int main()
{
    int arr[]={1,2,3,5,6};
    int size=5;
    int key=5;

   cout<< binarysearch(arr,size,key);


    return 0;
}