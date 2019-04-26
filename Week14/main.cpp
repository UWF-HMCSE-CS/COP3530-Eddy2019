#include <iostream>
#include <queue>
#include <stack>

void depthFirstSearch(int graph[6][6], int start)
{
	std::stack<int> path;
	int visited[6] = {0, 0, 0, 0, 0, 0};
	visited[start] = 1;
	path.push(start);
	int currentIndex;
	while(!path.empty())
	{
		currentIndex = path.top();
		for(int vertex = 0; vertex < 6; ++vertex)
		{
			if((graph[currentIndex][vertex] == 1) && (visited[vertex] == 0))
			{
				std::cout << vertex << std::endl;
				path.push(vertex);
				visited[vertex] = 1;
				currentIndex = vertex;
				vertex = 0;
			}
		}
		path.pop();
	}
}

void breadthFirstSearch(int graph[6][6], int start)
{
	std::queue<int> neighbors;
	int discovered[6] = {0, 0, 0, 0, 0, 0};
	discovered[start] = 1;
	neighbors.push(start);
	while(!neighbors.empty())
	{
		int currentVertex = neighbors.front();
		for(int vertex = 0; vertex < 6; ++vertex)
		{
			if((graph[currentVertex][vertex]  == 1) && discovered[vertex] == 0)
			{
				std::cout << vertex << std::endl;
				discovered[vertex] = 1;
				neighbors.push(vertex);
			}	
		}
		neighbors.pop();
	}
}

int main()
{
	int graph[6][6] = {{0,1,0,1,0,0}, 
			   {1,0,0,0,1,1}, 
			   {0,0,0,0,0,1}, 
			   {1,0,0,0,0,0}, 
			   {0,1,0,0,0,1}, 
			   {0,1,1,0,1,0}};
	//breadthFirstSearch(graph, 0);
	depthFirstSearch(graph, 0);


	return 0;
}
