#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main() {
	int n;
	cout << "nhap n :";
	cin >> n;
	int numbers[n];
	for(int i=0;i<n;i++){
		cin >> numbers[i];
		
	}
	int max=numbers[0];
	for(int i=1;i<n;i++){
		if(numbers[i]>0){
			max=numbers[i];
		}
		
	}
	cout << max;
	
	
  
    return 0;
}
