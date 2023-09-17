#include<iostream>
using namespace std;
int str_to_int(char *arr,int n){
	//base case
	if(n==0){
		return 0;
	}
	//recursive case
	int digit=arr[n-1]-'0';
	return str_to_int(arr,n-1)*10+digit;
}
int main(){
	char arr[100];
	cin>>arr;
	int l=strlen(arr);
	int x=str_to_int(arr,l);
	int y=x+100;
	cout<<y<<endl;
	return 0;
}