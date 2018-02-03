#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, j, start, make;
    string diamond;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>diamond;
        make = 0;
        j = 0;
        start = 0;
        make = 0;
        while(true)
        {
            if(diamond[j] == '\0') break;
            if(diamond[j] == '<') start++;
            if(diamond[j] == '>'){
                if(start > 0){
                make++;
                start--;
                }
            }
            j++;
        }
        cout<<make<<endl;
    }
    return 0;
}

