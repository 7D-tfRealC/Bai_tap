#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main() {
	int n,m;
	cout << "nhap n: ";
	cin >> n;
	cout <<"nhap m: ";
	cin >>m;
	int arr[n][m];
	cout << "nhap mang: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[j][i];
			
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum=sum+arr[j][i];
			
		}
	}
	cout << "tong cac phan tu trong mang la:"<< sum;
	
	
  
    return 0;
}
