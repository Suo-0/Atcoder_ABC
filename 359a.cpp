#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt=0;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(str == "Takahashi") cnt++;
    }
    cout << cnt << endl;
}