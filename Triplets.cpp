#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int tc,size,count;
	cin>>tc;
	while(tc--)
	{
	    cin>>size;
	    int j,k,i,arr[size];
	    for(int ind=0;ind<size;ind++)
	    {cin>>arr[ind];}
	    sort(arr,arr+size);
	    count=0;
	    for(i=size-1;i>1;i--)
	    {
	         k=i-1;j=0;
	        while(j!=k)
	        {
	            //cout<<"j="<<arr[j]<<" k= "<<arr[k]<<"i=   "<<arr[i]<<"\n";
	            if(arr[j]+arr[k]==arr[i])
	            {
	                
	                count++;
	                j++;
	            }
	            else if(arr[j]+arr[k]<arr[i])
	            {j++;}
	            else{k--;}
	        }
	    }
	    
	    
	        if(count==0)
	        cout<<"-1"<<endl;
	        else
	        cout<<count<<endl;
	}
	    
	return 0;
}
