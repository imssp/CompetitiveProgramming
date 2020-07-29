#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >vec;
vector<bool> visited;
void bfs(int node)
{
	queue<int> lst;
	lst.push(node);
	visited[node]= true;
	while(!lst.empty())
	{
		node= lst.front();
		lst.pop();
		cout<< node<< " ";
		for(int i=0; i< vec[node].size(); i++)
		{
			if(!visited[vec[node][i]])
			{ 
			    lst.push(vec[node][i]);
			    visited[vec[node][i]]= true;
			}
		}
	}
}

int main()
{
	int N, u, v;
	cin>>N;
	vec.resize(N+1);
	visited.resize(N+1);
	for(int i= 0; i<N; ++i)
	{
		cin>> u>> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	bfs(1);
	return 0;
}
