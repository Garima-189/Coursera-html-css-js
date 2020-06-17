#include <iostream>
using namespace std;
 
int main() {
	int T; cin>>T;
	for(int h=0;h<T;h++)
	{
		int N; cin>>N;
		int arr[N]; for(int g=0;g<N;g++){ cin>>arr[g];}
		
		int index=0,flag=0,swaps=0,j;
		for(int i=0;i<N;i++)
		{
                        flag=0;
			if(i%2!=0 && arr[i]%2==0)
			{
				if(i==N-1){cout<<"-1"<<endl; continue;}
				for(j=i+1;j<N;j++)
			   {
			   	   if(arr[j]%2!=0)
			   	   {
			   	   	flag=1;
			   	   	index=j; break;
			   	   }
			   }
			    if(flag==0)
			   {
			   	cout<<"-1"<<endl;
			   	continue;
			   }
			   
			   int temp=arr[i];
			   arr[i]=arr[index];
			   arr[index]=temp;
			   swaps++;
			}
			else if(i%2==0 && arr[i]%2!=0)
			{
			   if(i==N-1){cout<<"-1"<<endl; continue;}
			   for(int j=i+1;j<N;j++)
			   {
			   	   if(arr[j]%2==0)
			   	   {
			   	   	flag=1;
			   	   	index=j; break;
			   	   }
			   }
			   if(flag==0)
			   {
			   	cout<<"-1"<<endl;
			   	continue;
			   }
			   
			   int temp=arr[i];
			   arr[i]=arr[index];
			   arr[index]=temp;
			   swaps++;
			}
		}
		  cout<<swaps<<endl;
	}
}