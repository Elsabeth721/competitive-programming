#include <iostream>
using namespace std;
void bubbleSort(int array[], int size, int &count){
        
        // for increasing order
        for(int i=0;i<size;i++){
            for(int j=0;j<size-1;j++){
                if(array[j]>array[j+1]){
                    // swap(array[j], array[j+1]);
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                    count++;
                }
            }
        }
    }    
int main() {    
    //int array[]={9,1,2,5,7,8,0};
    
    int size;
    cin>>size;
    int array[size];
    
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int count=0;
    //int size= sizeof(array)/sizeof(array[1]);    
    bubbleSort(array, size, count);
    /*for(int i=0; i<size;i++){
        cout<<array[i];
    }*/
    cout<<"Array is sorted in "<<count<<" swaps."<<endl;
    cout<<"First Element: "<<array[0]<<endl;
    cout<<"Last Element: "<<array[size-1]<<endl;
    return 0;
}
