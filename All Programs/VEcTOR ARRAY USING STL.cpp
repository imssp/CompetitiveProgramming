/*N array Tree
-> the most simple form of tree.
->a parent node can have N number of children node
INPUT
7 6
1 2
1 3
2 4
2 5
2 6
3 7
*/

vector<vector<int> > vec;

void dfs(int val)
{
	cout<< val<< " ";
	for (int i=0; i< vec[val].size(); ++i)
	{ dfs(vec[val][i]);}
}
int main()
{
	int u, v, N, E;
	cin>>N >>E;
	while(E--)
	{
		cin>>u >>v;
		vec[u].push_back(v);
	}
	dfs(1);
	return 0;
}

