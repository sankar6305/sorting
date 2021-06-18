#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void bubbleSort(vector<int>vect){
	int n=vect.size();
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n-i-1;j++){
			if(vect[j]>vect[j+1]){
				swap(&vect[j],&vect[j+1]);
				flag=1;
			}
		}
		if(flag=0){
			break;
		}
	}
	cout<<"After sort :Bubble sort :: ";
	for(auto i:vect){
		cout<<i<<" ";
	}
	cout<<"\n";
}
void selection(vector<int>vect){
	int n=vect.size();
	int min;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(vect[j]<vect[min]){
				min=j;
			}
		}
		swap(&vect[i],&vect[min]);
	}
	cout<<"After sort : Selection Sort ::: ";
	for(auto i:vect){
		cout<<i<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	vector<int>vect;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		vect.push_back(x);
	}
	bubbleSort(vect);
	selection(vect);
}
