#include <bits/stdc++.h>
using namespace std;
main()
{
    string s;
    while(cin>>s)
    {
        if(s=="#")
            break;
        else
        {
            int cnt=0;
            while(next_permutation(s.begin(),s.end()))
            {
                cnt++;
                if(cnt!=0)
                {
                     cout<<s<<endl;
                     break;
                }
            }
            if(cnt==0)
                cout<<"No Successor"<<endl;
        }
    }
}
