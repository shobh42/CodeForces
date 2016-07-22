#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

	int maximum=0;
	int max_index;
	int minimum=1000000000;
	int min_index;
	for(int i=1;i<=n;i++){
		if(a[i]>maximum){
			maximum=a[i];
			max_index=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]<=minimum){
			minimum=a[i];
			min_index=i;
		}
	}
	int swaps=0;
	if(a[1]==maximum && a[n]==minimum){
		cout<<swaps;
	}else if(min_index<max_index){
		cout<<n-min_index+max_index-2;
	}else{
		cout<<max_index-1+n-min_index;
	}

}
