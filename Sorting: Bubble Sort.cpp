#include<iostream>
using namespace std;
int main(){
    int n, temp ,m=0;
    cin>>n; // size of the array 
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i]; //accept the numbers from the user         
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                m++;//defines by how many swaps does the array is swaped
            }
        }
    }
    cout<<"Array is sorted in "<<m<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}
