#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int size)
{
    int tmax=arr[0],pmax=arr[0];
    for(int i=1;i<size;i++)
    {
        pmax=max(arr[i],pmax+arr[i]);
        tmax=max(tmax,pmax);
    }
    cout<<tmax<<endl;
}
int main()
 {
	//code
	int tc,size;
	cin>>tc;
	while(tc--){
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++)
	    {cin>>arr[i];}
	    kadane(arr,size);
	     
	}
	return 0;
}
