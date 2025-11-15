#include <iostream>
using namespace std;

int square(int num){
     int start=0;
     int end=num;

     int mid=start+(end-start)/2;
     int ans=-1;
     while(start<=end){
        int square=mid*mid;
        if (num==square)
        {
            ans=mid;
            return mid;
        }
        else if(square<num){
            ans=mid;
            start=mid+1;
        }

        else{
        end=mid-1;
        }

         mid=start+(end-start)/2;
        
     }
      return ans;


}

double moreprecision(int n,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;

    for (int i = 0; i < precision; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j <= n; j=j+factor)
        {
            ans=j;
        }   
    }
    return ans;
    
}

int main()
{
    int num=64;
    int temp=square(num);
   cout<< "answer is : "<<moreprecision(num,3,temp);

    return 0;
}