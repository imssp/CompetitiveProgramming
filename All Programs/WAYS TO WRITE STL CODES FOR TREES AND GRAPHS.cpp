INPUT
5 6
1 2
1 3
2 3
2 4
3 4
3 5
->UNDIRECTED GRAPH
int main()
{
    int u, v, N, E;
	cin>>N >>E;
	vector<vector<int> >vec;
	vec.resize(N+1);
	while( E--)
	{
		cin>>u>>v;
		vec[u].push_back[v];
	    vec[v].push_back[u];  
	  }
	  return 0;
}

->DIRECTED GRAPH
int main()
{
    int u, v, N, E;
	cin>>N >>E;
	vector<vector<int> >vec;
	vec.resize(N+1);
	while( E--)
	{
		cin>>u>>v;
		vec[u].push_back[v];  
	  }
	  return 0;
}

}->UNDIRECTED WEIGHTED GRAPH
int main()
{
    int u, v, N, E, W;
	cin>>N >>E;
	vector<vector<pair<int,int> > >vec;
	vec.resize(N+1);
	while( E--)
	{
		cin>>u>>v>>w;
		vec[u].make_pair(v,w);
	    vec[v].male_pair(u,w);  
	  }
	  return 0;
}

->DIRECTED WEIGHTED GRAPH
int main()
{
    int u, v, N, E, W;
	cin>>N >>E;
	vector<vector<pair<int,int> > >vec;
	vec.resize(N+1);
	while( E--)
	{
		cin>>u>>v>>w;
		vec[u].make_pair(v,w);  
	  }
	  return 0;
}

->UNDIRECTED WEIGHTED GRAPH
class Node
{ 
   int edge;
   int weight;
};
int main()
{
    int u, v, N, E, W;
	cin>>N >>E;
	vector<vector<Node > >vec;
	vec.resize(N+1);
	while( E--)
	{
		cin>>u>>v>>w;
		Node node;
		node.edge= v;
		node.weight= w;
		vec[u].push_back(node);
	    vec[v].push_back(node);  
	  }
	  return 0;
}
