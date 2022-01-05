#include <iostream>

int main(){
    using namespace std;
    long long n,s=0;
    int i;
    cin>> n;
    for(long long j= 0; j<n-1;j++){
        cin >>i;
        s+=i;
    }
    cout << n*(n+1)/2-s;
    return 0;
}
