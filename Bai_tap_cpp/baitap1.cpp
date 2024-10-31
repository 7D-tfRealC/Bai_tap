#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap n: ";
    cin >> n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cin >>numbers[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+numbers[i];
    }
    cout << "tong cac phan tu la : "<<sum<<endl;
















    return 0;

}