#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack < int > st;
	st.push(100);
	st.push(20);
	st.push(50);


	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}


}
