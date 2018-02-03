
///first process is very easy and quick process

/*
    #include <bits/stdc++.h>

    using namespace std;

    int ara[111];
    int cpy[111];
    int main()
    {
        int n, m, x;
        cin >> n >> m;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin >> x, ara[i]+=x;
        for(int i=0; i<n; i++)
            cpy[i] = ara[i];
        sort(cpy, cpy+n);
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
                if(ara[j] == cpy[i])
                {
                    cout << j+1 << endl;
                    break;
                }
        }
    	return 0;
    }
    */
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int x,y,d=0,sum,n,j,i;
        cin>>x>>y;
        int data[x];
        for(i=0;i<x;i++)
        {
            sum=0;
            for(j=1;j<=y;j++){
                cin>>n;
                sum=sum+n;
            }
            data[d++]=sum;
        }
         int loc1=0,loc2=1,temp,first,second,third,loc3=2;
        first=data[0];
        second=data[1];
        third=data[2];
        if(first>second)
        {
            temp=first;
            first=second;
            second=temp;
            temp=loc1;
            loc1=loc2;
            loc2=temp;
        }
        if(first>third)
        {
            temp=first;
            first=third;
            third=temp;
            temp=loc1;
            loc1=loc3;
            loc3=temp;
        }
        if(second>third)
        {
            temp=second;
            second=third;
            third=temp;
            temp=loc2;
            loc2=loc3;
            loc3=temp;
        }
        for(i=3;i<x;i++)
        {
            if(first>data[i])
            {
                third=second;
                second=first;
                first=data[i];
                loc3=loc2;
                loc2=loc1;
                loc1=i;
            }
            else if(second>data[i])
            {
                third=second;
                second=data[i];
                loc3=loc2;
                loc2=i;
            }
            else if(third >data[i])
            {
                third=data[i];
                loc3=i;
            }
        }
        cout<<loc1+1<<endl<<loc2+1<<endl<<loc3+1<<endl;
        return 0;
    }
