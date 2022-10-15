#include<iostream>
#include<vector>
#include<time.h>
#include <math.h>
#include <random>

using namespace std;

void push(vector<short>& v,int amount){
    clock_t start = clock();
    for(long i=0;i<amount;i++){
        v.push_back(rand()%10);
    }
    clock_t end = clock();
    cout<< "push took: " << end - start << endl;
}

void addUp(vector<short>& v){
    long long total = 0;
    clock_t start = clock();
    for (const auto &item : v){
        total+=item;
    }
    clock_t end = clock();
    cout << "addUp took: "<< end- start << "  result:" << total << endl;
}
void run(int k){
    long n = pow(2,k);
    cout << endl;
    cout << "k = " << k<< ", n = "<<n<<endl;
    vector<short> v;
    push(v,n);
    addUp(v);
}

int main(){
    srand( time(NULL) );
    for(int i=15;i<=30;i++){
        run(i);
    }
}
