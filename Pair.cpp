#include<bits/stdc++.h>

using namespace std;

int main()
{
	pair<string,int>p[10];

	for(int i = 1; i <= 3; i++)
	{
		string s;
		int age;
		cin>>s;
		cin>>age;

		p[i].first = s;
		p[i].second = age;

	}
	for(int i = 1; i <= 3; i++)
	{
		cout<<"This is "<< i << "student "<<p[i].second<<endl;
	}
}
