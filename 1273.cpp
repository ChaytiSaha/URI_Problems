#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,k=0;
    while(scanf("%d",&t)!=EOF&&t)
    {
       char c[t][50];
       int len[t],maximum;
       getchar();
       i=0;
       while(i<t)
       {
           cin>>c[i];
           len[i]=strlen(c[i]);
           i++;
       }
       maximum=len[0];
       for(i=1;i<t;i++)
           if(maximum<len[i])
               maximum=len[i];

       if(k!=0) cout<<endl;
       for(i=0;i<t;i++)
           cout<<setw(maximum)<<c[i]<<endl;//setw()  ei function use kore c++ e space define kora jy.
       k++;
    }
    return 0;
}
/*


#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int N,length,mark = 0;
    vector<string> words;
    string word;
    while(cin>>N&&N)
    {
        length = 0;

        for(int i = 0 ; i<N; i++)
        {
            cin>>word;
            if(word.length()>length)
                length = word.length();
            words.push_back(word);
        }
        if(mark!=0)
            cout<<endl;
        else
            mark = 1;
        for(int i = 0; i<N; i++)
        {
            cout<<right<<setw(length)<<words.at(i)<<endl;
        }

        words.clear();

    }
}
*/
