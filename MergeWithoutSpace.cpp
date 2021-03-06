#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int gap(int g)
{
    if(g<=1)
    return 0;
    return (g/2)+(g%2);
}
void merge(int ar1[],int ar2[],int n , int m)
{
   int g=n+m,i,j=0,temp;
   for(int g=gap(g);g>0;g=gap(g))
   {
       i=0;
      while(i+g<n)
      {
          if(ar1[i]>ar1[i+g])
          swap(ar1[i],ar1[i+g]);
          i++;
      }
      if(g>n){
          j=g-n;
      }
      else
      j=0;
      while(i<n && j<m)
      {
          if(ar1[i]>ar2[j])
          swap(ar1[i],ar2[j]);
          i++;
          j++;
      }
      j=0;
      while(j+g<m)
      {
          if(ar2[j]>ar2[j+g])
          swap(ar2[j],ar2[j+g]);
          j++;
      }
   }
}
int main()
 {
	//code
	int tc,n,m;
	cin>>tc;
	while(tc--)
	{
	    cin>>n>>m;
	    int arr1[n];
	    int arr2[m];
	    for(int i=0;i<n;i++)
	    cin>>arr1[i];
	    for(int i=0;i<m;i++)
	    cin>>arr2[i];
	    merge(arr1,arr2,n,m);
	    swap(arr1[0],arr1[1]);
	    for(int i =0;i<n;i++)
	    cout<<arr1[i]<<" ";
	    for(int i=0;i<m;i++)
	    cout<<arr2[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
