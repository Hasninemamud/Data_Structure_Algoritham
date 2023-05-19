#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int>pq;
    cout<<"Enter the value: "<<endl;
    for(int i = 1; i <= 5; i++)
    {

        int n;

        cin>>n;
        pq.push(n);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }

}
