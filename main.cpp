#include <iostream>

int main(){
    using namespace std;
    long long n;
    cin>> n;
    cout << n<<" ";
    while (true){
        if(n == 1){
            break;
        }
        if (n %2==0){
            n = n/2;
            cout <<n<<" ";
        }
        else if(n % 2 ==1){
            n = (n*3)+1;
            cout << n << " ";
        }

    }
    return 0;
}