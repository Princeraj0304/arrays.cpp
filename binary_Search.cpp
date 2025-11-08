#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while (start<=end){
          if (key==arr[mid])
          {
            return arr[mid];
          }

         if (arr[mid]>key)
         {
            end=mid-1;
         }
         else{
           start= mid+1;
         }

         mid=(start+end)/2;
    }

}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int key=5;

   cout<< binarysearch(arr,size,key);


    return 0;
}