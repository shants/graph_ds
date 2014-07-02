#include "adjList.h"


void Graph::print() {
    for(int i=0; i < MAX; ++i) {
	if(edges[i] == NULL)
	    continue;
	node* temp = edges[i];
	while(temp != NULL) {
	    cout << "src " << i << "dest " <<temp->dest << " ( " << temp->weight << " ) " << endl;
	    temp = temp->next;
	}
	cout<<"------------------------\n";
    }
}

void Graph::create() {
    std::string line;
    std::ifstream infile("input.txt");

    while (std::getline(infile, line))  // this does the checking!
    {
	std::istringstream iss(line);
	int src;
	int dest;
	int weight;    
	while (iss >> src >> dest >> weight)
	{
	    // construct graph
	    node* newNode = new node(dest, weight);
	    node* temp = edges[src];
	    edges[src] = newNode;
	    newNode->next = temp;
	    degree[src]++;
	    // process value
	}
    }
}


#if 0
int main()
{
struct Graph g;
g.create();
g.print();

return 0;
}
#endif
