#include <iostream>
using namespace std;

void duplicatearr(int arr[],int size){
    bool alreadyprinted=0;
    for (int i = 0; i < size; i++)
    {

        for (int k = 0; k < i ; k++)
        {
            if (arr[k]==arr[i])
            {
                alreadyprinted=1;
            }
            
        }
        if (alreadyprinted==1)
        {
            continue;
        }
        
    
        for (int j = i+1; j < size; j++)
        {
           if(arr[i]==arr[j]){
            cout<<arr[i]<<" ";
            break;
           }
        }
        
    }
}

int main()
{
    int arr[15]={1,2,3,2,2,1};
    int size=6;
                                                                                         
    duplicatearr(arr,size);
    return 0;
}