#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
	cin>>t;
	int l = t;
	while(t--){
		cout<<"Case #"<<l-t<<": ";
		string str;
		string ans="";
		cin>>str;
		
		for(int i=0;i<str.length();i++){
			if(i==0){
				for(int j=0;j<str[i]-'0';j++){
					ans+="(";
				}
				ans+=str[i];
			}
			else{
				int p = str[i]-str[i-1];
				if(p<0){
					for(int i=0;i<abs(p);i++){
						ans+=")";
					}
					ans+=str[i];
				}
				else{
					for(int i=0;i<p;i++){
						ans+="(";
					}
					ans+=str[i];
				}
				
			}
		}
		for(int i=0;i<str[str.length()-1]-'0';i++){
			ans+=")";
		}
		cout<<ans<<endl;
	}
	return 0;
}