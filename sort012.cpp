#include<iostream>
using namespace std;
int main()
 {
	//code
	int tc,size;
	cin>>tc;
	int fix[3]={0};
	while(tc--)
	{
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++)
	    cin>>arr[i];
	    for(int i=0;i<size;i++)
	    {
	        fix[arr[i]]++;
	    }
	    int j=0;
	    for(int i=0;i<3;i++)
	    {
	        while(fix[i]>0)
	        {arr[j]=i;
	            fix[i]--;
	            j++;
	        }
	    }
	    for(int k=0;k<size;k++)
	    cout<<arr[k]<<" ";
	    cout<<endl;
	}
	return 0;
}
