#include<iostream>
using namespace std;

void add(int n, int result[], int arr[]){
    result[0] = arr[0];
    for(int i = 1; i < n; i++){
        result[i] = result[i-1] + arr[i];
    }
}

int main(){
    int n;
    cout << "Enter the length of array = ";
    cin >> n;
    int arr[n];
    int result[n];
    cout << "Enter the elements of the array = ";
    for(int i = 0; i < n; i++){
        cout << i+1 << ".";
        cin >> arr[i];
    }

    cout << "Your array is = ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    add(n, result, arr);

    cout << "The resulted array is = ";
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}