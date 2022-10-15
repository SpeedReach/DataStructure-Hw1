#include "iostream"
#include "random"

using namespace std;

int arr[10];
void swapWW(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void print(){
    for(int i=0;i<10;i++){
        cout << arr[i]<<" ";
    }

    cout <<endl;
}
int main(){
    int swaped = 0;
    int pivot = 10;
    srand(200);
    for(int i=0;i<10;i++){
        arr[i] = 10;
    }
    print();
    int lIndex = 0,rIndex = 9;
    while (rIndex > lIndex){
        if(arr[lIndex] < pivot){
            lIndex ++;
        }
        if(arr[rIndex] > pivot){
            rIndex --;
        }
        if(arr[lIndex] >= pivot && arr[rIndex] <= pivot){
            swaped ++;
            swapWW(arr[lIndex],arr[rIndex]);
        }
    }
    print();
    cout << "swaped "<< swaped <<endl;
}