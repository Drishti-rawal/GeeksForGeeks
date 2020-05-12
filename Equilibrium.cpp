#include<iostream>
using namespace std;
int equilibrium(long int arr[],int n)
{
      long int ssum[n];
      ssum[n-1]=arr[n-1];
      for(int i=n-2;i>=0;i--)
      ssum[i]=ssum[i+1]+arr[i];
      for(int i=1;i<n;i++)
      arr[i]+=arr[i-1];
      for(int i=0;i<n;i++)
      if(arr[i]==ssum[i])
        return i+1;
      return -1;
}
int main()
 {
	//code
	int tc,n;
	cin>>tc;
	while(tc--)
	{
	    cin>>n;
	    long int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    cout<<equilibrium(arr,n)<<endl;
	}
	return 0;
}
