#include <bits/stdc++.h>
using namespace std;

class Graph {
public:

	map<int, vector<int>> adj;

	void addEdge(int v, int w)
    {
	    adj[v].push_back(w); 
    }

    int DLS(int v, int g,int l);

    int IDDFS(int v,int g,int l);
};




int Graph::DLS(int v,int goal,int limit)
{
    if(v==goal)
    {
       return 1;
    }
    for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        
        if(limit-1>=0)
        {
            cout<<*i<<" ";
             if(DLS(*i,goal,limit-1)!=-1)
                     return 1;
        }
    }  
    return -1;

}

int Graph::IDDFS(int src, int goal, int limit)
{
    for(int i=0;i<=limit;i++)
    {
        cout<<"Iteration "<<i<<": "<<src<<" ";
        if(DLS(src,goal,i)==1)
        {
            return 1;
        }
        cout<<"\n";
    }
    return -1;
}

int main()
{
	Graph gp;
    gp.addEdge(0, 1);
    gp.addEdge(0, 2);
    gp.addEdge(1, 3);
    gp.addEdge(1, 4);
    gp.addEdge(2, 5);
    gp.addEdge(2, 6);
    gp.addEdge(3, 7);
    gp.addEdge(5, 8);
    gp.addEdge(6, 9);

    int src=0, goal=9, limit=3;

    if(gp.IDDFS(src,goal,limit)==1)
        cout<<"\nGoal node found within depth limit";
    else
        cout<<"Goal node not found !\n";

	return 0;
}

