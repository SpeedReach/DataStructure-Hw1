#include<iostream>
#include<list>
#include<time.h>
#include <math.h>
#include <random>

using namespace std;

void insert(list<short>& v,int amount){
    clock_t start = clock();
    for(long i=0;i<amount;i++){
        v.push_back(rand()%10);
    }
    clock_t end = clock();
    cout<< "insert took: " << end - start << endl;
}

void addUp(list<short>& v){
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
    list<short> v;
    insert(v,n);
    addUp(v);
}

int main(){
    srand( time(NULL) );
    for(int i=15;i<=30;i++){
        run(i);
    }
}
