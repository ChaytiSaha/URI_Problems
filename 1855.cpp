#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,y,a=0,b=0,f=0,loc=0;
    scanf("%d",&x);
    scanf("%d",&y);
    char c[x][y+1];
    getchar();
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%c",&c[i][j]);
            if(c[0][0]=='>'|| c[0][0]=='<'|| c[0][0]=='^' || c[0][0]=='v'|| c[0][0]=='.' || c[0][0]=='*')loc++;
            if(c[x-1][0]=='>'|| c[x-1][0]=='<'|| c[x-1][0]=='^' || c[x-1][0]=='v'|| c[x-1][0]=='.' || c[x-1][0]=='*')a++;
            if(c[0][y-1]=='>'|| c[0][y-1]=='<'|| c[0][y-1]=='^' || c[0][y-1]=='v'|| c[0][y-1]=='.' || c[0][y-1]=='*')b++;
            if(c[x-1][y-1]=='>'|| c[x-1][y-1]=='<'|| c[x-1][y-1]=='^' || c[x-1][y-1]=='v'|| c[x-1][y-1]=='.' || c[x-1][y-1]=='*')f++;
        }
    }
    if(loc>=1 && a>=1 && b>=1 && f>=1) cout<<"*"<<endl;
    else cout<<"!"<<endl;
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    int m,n,i,j,mn,x=0,k=0,l=0,M,G;
    char fao;
    scanf("%d%d", &m, &n);
    char image[n][m+1];

    for(i=0; i<n; i++)
        scanf("%s", image[i]);
    mn=m*n;
    for(M=1; M<=mn; )
    {
        if(image[k][l]=='>')
        {
            l++; M++; G=1;
            if(l>=m) break;
        }
        else if(image[k][l]=='v')
        {
            k++; M++; G=2;
            if(k>=n) break;
        }
        else if(image[k][l]=='<')
        {
            l--; M++; G=3;
            if(l<0) break;
        }
        else if(image[k][l]=='^')
        {
            k--; M++; G=4;
            if(k<0) break;
        }
        else if(image[k][l]=='*')
        {
            M=1000;
            break;
        }
        else if(image[k][l]=='.')
        {
            if(G==1)
            {
                l++; M++;
                if(l>=m) break;
            }
            else if(G==2)
            {
                k++; M++;
                if(k>=n) break;
            }
            else if(G==3)
            {
                l--; M++;
                if(l<0) break;
            }
            else if(G==4)
            {
                k--; M++;
                if(k<0) break;
            }
        }
    }
    if(M==1000) printf("*\n");
    else printf("!\n");

    return 0;
}
*/
