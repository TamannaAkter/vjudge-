#include<bits/stdc++.h>
using namespace std;
main()
{
     vector<int>a;
    vector<int>::iterator ip;
    int b,c,d,t,temp=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>b;
        a.push_back(b);
    }
    sort(a.rbegin(), a.rend());
    ip =unique(a.begin(), a.begin() + t);
    a.resize(distance(a.begin(), ip));
    if(a.size()==1)
        temp=1;
    //c=a.back();
    a.pop_back();
    d=a.back();
    if(temp==1)
        cout<<"NO"<<endl;
    else
        cout<<d<<endl;

}

