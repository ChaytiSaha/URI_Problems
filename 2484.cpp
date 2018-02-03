#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int alen,y,i,j;
    while(getline(cin,a))
    {
       y=alen=a.size();
       for(i=0;i<alen;i++,y--)
       {
           for(j=0;j<i;j++)
               cout<<" ";
           for(j=0;j<y;j++)
           {
               if(j==y-1)
                    cout<<a[j];
               else cout<<a[j]<<" ";
           }
           cout<<endl;
       }
       cout<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0;
    string a;
    while(cin >> a)
    {
        for(int i = 0 ; i < a.size() ; i++)
        {
            for(int j = 0 ; j < a.size() ; j++)
            {
                if(j < i)
                    cout << " ";
                else
                  if(j == a.size() - 1)
                    cout << a[j-i];
                  else
                    cout << a[j-i] << " ";
            }
            cout << endl;
        }
     cout << endl;
    }
    return 0;
}
*/
