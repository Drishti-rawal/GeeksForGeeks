#include<iostream>
using namespace std;
int find_missing(int arr[],int size)
{
    int t=0;
    int total= (size*(size+1))/2;
    for(int i=0;i<size-1;i++)
    t=t+arr[i];
    return total-t;
}
int main()
 {
     int tc,size;
     cin>>tc;
     while(tc--)
     {
         cin>>size;
         int arr[size];
         for(int i=0;i<size-1;i++)
         cin>>arr[i];
         int res=find_missing(arr,size);
         cout<<res<<endl;
     }
	//code
	return 0;
}
