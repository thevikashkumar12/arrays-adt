#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,20,13,14};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout <<size;
    return 0;
}