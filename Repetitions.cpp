#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    long long high=0,count=0;
    string in;
    cin>>in;
    char  a[in.length()+1];
    strcpy(a,in.c_str());
    for (int i = 0; i <in.length(); ++i) {
        if (a[i+1]=='\0'){
            if(count>high) high = count;
            break;}
        if (a[i] == a[i+1])count ++;
        else{
            if(count>high) high = count;
            count = 0;
        }
    }
    cout<<high+1;
    return 0;
}
