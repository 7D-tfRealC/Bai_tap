#include <iostream>
using namespace std;
int main(){
	int n,so_le=0,so_chan=0,so_am=0,so_duong=0;
	cout << "nhap n: ";
	cin >>n;
	int numbers[n];
	for(int i=0 ;i<n;i++){
		cin >>numbers[i];
	}
	for ( int i = 0; i < n; i++)
	{
		if(numbers[i]%2==0){
			so_chan=so_chan+1;
		}
		else{
			so_le=so_le+1;

		}
	}
	for(int i = 0; i < n; i++)
	{
		if(numbers[i]>0){
			so_duong=so_duong+1;
		}
		else{
			so_am=so_am+1;
		}
	}
	cout << "so phan tu chan la: "<<so_chan<< endl;
	cout << "so phan tu le la: "<<so_le<< endl;
	cout << "so phan tu duong la: "<<so_duong<< endl;;
	cout << "so phan tu am la: "<<so_am;
	
	
	
	
	
	
	return 0;
}
