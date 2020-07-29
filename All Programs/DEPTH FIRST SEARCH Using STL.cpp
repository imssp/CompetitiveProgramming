#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >vec;
vector<bool>visited;
void dfs_r(int s)
{
	visited[s]= true;
	cout<< s<<" ";
	for(int i=0; i<vec[s].size(); ++i)
	{ if(visited[vec[s][i]]== false)
	     dfs_r(vec[s][i]);
	}
}
void dfs(const vector<vector<int> >, int s)
{
	stack<int>stk;
	stk.push(s);
	visited[s]=true;
	while(!stk.empty())
	{
		int node= stk.top();
		stk.pop();
		cout<<"Visited: "<< node<< " ";
		for(int i= 0; i<vec[node].size(); ++i)
		{
			if(!visited[vec[node][i]])
			{
				stk.push(vec[node][i]);
				visited[vec[node][i]]= true;
			}
		}
	}
}

void initialize()
{
	for(int i=0; i<visited.size(); ++i)
	{
		visited[i]= false;
	}
}

int main()
{
	int nodes, edges, x, y;
	cin>>nodes;
	cin>>edges;
	vec.resize(nodes+1);
	visited.resize(nodes+1);
	for(int i=0; i< edges; ++i)
	{
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	initialize();
	dfs_r(1);
	return 0;
}
