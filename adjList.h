#ifndef _ADJLIST_H_
#define _ADJLIST_H_
/*
Adjacency list implementation of graph
*/

#include<iostream>
#include<vector>
#include<stdio.h>
#include<sstream>
#include<fstream>

using namespace std;
#define MAX 100

struct node {
int dest;
int weight;
node* next;
node() : dest(0), weight(0), next(NULL) {}
node(int d, int w) : dest(d), weight(w), next(NULL) {}
};

class Graph
{

private :
int vertex;
vector<node*> edges;
std::vector<int> degree;

public :
Graph() : vertex(0), edges(MAX), degree(MAX,0) {}
void print();
void create();

};
#endif
