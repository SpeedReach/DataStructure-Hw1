#include<iostream>
#include <list>
#include<time.h>
#include <math.h>
#include "random"

#define N 25;

using namespace std;

void push(list<int>& list,long amount){
    clock_t start = clock();
    for(long i=0;i<amount;i++){
        list.push_back(rand()%10);
    }
    clock_t end = clock();
    cout << end-start << endl;
}
void iterate(list<int>& v){
    long long total = 0;
    clock_t start = clock();
    for (const auto &item : v){
        total+=item;
    }
    clock_t end = clock();
    cout << "total = "<<total<<endl;
    cout << "took "<< end- start << endl;
}
int main(){
    srand( time(NULL) );
    list<int> list;
    int n = N;
    long amount = pow(2,n);
    push(list,amount);
    iterate(list);
}