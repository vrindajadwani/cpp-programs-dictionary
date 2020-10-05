#include<iostream>
using namespace std;
void bubble(int,int[]);
int main()
{
	int n,arr[50];
	double time_taken;
	cout<<"Bubble sort \n";
	cout<<"Enter how many elements you want to enter in the array : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Elements before sorting : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	bubble(n,arr);
	cout<<endl<<"Elements after sorting : \n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void bubble(int size,int arr[]){
	int tmp,ctr=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<(size-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
		cout<<endl<<"Array after iteration "<<++ctr<<" is : ";
		for(int k=0;k<size;k++)
		cout<<arr[k]<<" ";
		cout<<endl;
	}
}
