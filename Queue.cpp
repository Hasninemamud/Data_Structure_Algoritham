#include<bits/stdc++.h>

using namespace std;

int main()
{
	queue <int> q;

	q.push(100);
	q.push(20);
	q.push(30);

	while(!q.empty())
	{
		cout<<q.front()<<endl;

		q.pop();

	}
}
