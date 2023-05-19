#include<bits/stdc++.h>

using namespace std;

int main()
{

 deque <int>dq;

 dq.push_back(100);
 dq.push_back(200);
 dq.push_front(50);
 dq.push_front(5);

 dq.push_back(70);



 while(!dq.empty())
 {
 	cout<<dq.front()<<endl;
 	dq.pop_front();
 	cout<<"Push Back: "<<dq.back()<<endl;

 }

}
