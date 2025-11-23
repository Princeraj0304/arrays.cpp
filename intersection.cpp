#include <iostream>
using namespace std;
int swap(int arr[],int size1,int brr[],int size2){
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr[i]==brr[j])
            {
               cout<<arr[i]<<" ";
               brr[j]=-1;
            }
        }
        
    }
    

}
int main()
{
    int arr[]={1,2,3,4,5,6,6};
    int brr[]={9,8,7,6,5,4};

    swap(arr,7,brr,6);
    return 0;
}