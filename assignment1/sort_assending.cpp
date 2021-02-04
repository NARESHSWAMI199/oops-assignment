#include <iostream>
using namespace std;

class Sort {    
    public:
        int hold;
        void sorted( int arr[],int size){
            for (int i = 0; i < size; i++){
                for (int j = i; j < size; j++){
                    if (arr[i] > arr[j]){
                        hold = arr[i];
                        arr[i] = arr[j];
                        arr[j] = hold;
                    }
                }
                cout<<arr[i] << " ";
            }
        }
    
};

int main(){

    int size, value; 
    cout<< "enter the size of your input : "<<endl;
    cin >> size;
    int arr[size]; 
    for(int i =0; i< size; i++){
        cout<< "enter the "<<(i+1)<<" of your input : "<<endl;
        cin >> value;
        arr[i] = value;
    }   
    Sort sort;
    sort.sorted(arr,size);

    return 0;
}