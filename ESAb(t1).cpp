#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,bits;
    cin>>t>>bits;
        for(int j=0;j<t;j++)
        {
            string str;
            for(int i=0;i<10;i++)
            {
            char c;
            cout<<(i+1)<<"\n";
            cout.flush();
            cin>>c;
            str+=c;
            
            }
            cout<<str<<"\n";
            cout.flush();
            char a;
            cin>>a;
            if(a=='N' || a=='n')
                break;
    }
    return 0;
}