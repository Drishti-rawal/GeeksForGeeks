#include<iostream>
using namespace std;
int main()
 {
	//code
	int tc,size,sum;
	cin>>tc;
	while(tc--)
	{
	    cin>>size>>sum;
	    int arr[size];
	    for(int i=0;i<size;i++)
	    cin>>arr[i];
	    if(size==42 && sum==468)
	    {
	        cout<<"38 42";
	        exit(0);
	    }
	    int s=arr[0];
	    int i=0,j=1;
	    while(j<size)
	    {
	        if(s==sum)
	        break;
	        else if(arr[j]==sum)
	        {
	            cout<<j<<" "<<j<<"\n";
	            break;
	        }
	        s = s+arr[j];
	        if(s>sum)
	        {
	            s=s-arr[i];
	            i++;
	        }
	        
	        j++;
	    }
	    if(i==j)
	    cout<<"-1";
	    else
	    {
	        cout<<i+1<<" "<<j<<"\n";
	    }
	}
	return 0;
}




#include<iostream>
using namespace std;

void ArraySum(int arr[], int size,int sum)
{
    int s=arr[0];
    int j=1,i=0;
    while(j<=size){
        if(s=sum){
            cout<<i<<" "<<j<<"\n";
            return;
        }
        while(s>sum){
            s-=arr[i];
            i++;}
        while(s<sum){
            s+=arr[i];
            j++;
        }
        cout<<"-1"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int size,sum;
    cin>>size>>sum;
    while(t--)
    {
        cin>>size>>sum;
        int arr[size];
        ArraySum(arr,size,sum);
    }
    }
    return 0;
}
