#include <iostream>
#include <climits>
using namespace std;

int max(int arr[],int size){
    int maxvalue=INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if(maxvalue<arr[i]){
        maxvalue=arr[i];
    }

    }
    

    return maxvalue;


}

int min(int arr[],int size){
    int minvalue=INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(minvalue>arr[i]){
        minvalue=arr[i];
    }



    }
        return minvalue;
    

}


int main()
{
    int arr[]={32,53,25,26,75};
    int size=5;
    
    cout<<max(arr,size)<<endl;
    cout<<min(arr,size);

    return 0;
}