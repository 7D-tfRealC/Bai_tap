#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap n: ";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];

    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
          
        }
    }
    cout << "gia tri lon nhat: "<< max << endl;
    cout << "gia tri nho nhat:"<< min;
    return 0;
}