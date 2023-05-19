#include<bits/stdc++.h>

using namespace std;

int main()
{
	set<int>s;

	s.insert(12);
	s.insert(1);
	s.insert(10);
	s.insert(12);
	s.insert(13);

	set<int> ::iterator it;
	for(it = s.begin(); it != s.end();it++)
	{
		cout<<*it<<endl;
	}


}
