//
//  Graph.hpp
//  DataStructuresProject
//
//  Created by Billings, Spencer on 3/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Grpah
{
private:
    static adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]):
    
public:
    Graph();
    
    //Grpah Operations
    void addVertex(const Type& value);
    
    //Connect Vetices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    
    //Disconnect Vertices
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessors
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    
    //Check Connections
    bool has UndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target) const;
    std :: set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int vertex);
};
    
    tempate <class Type>
    const int Graph<Type> :: MAXIMUM;
    
    template <class Type>
    Graph<Type> :: Graph()
    {
        this->vertexCount = 0;
    }
    
    /* We cannot 'remove' from an array in C++, we only implement addint to a Graph. In Java, all objects can be set to null, unlike C++ */
    
    template <class Type>
    int Graph<Type> :: size() const
    {
        return vertexCount;
    }
    
    template <class Type>
    Type& Graph<Type> :: operator[](int vertex)
    {
        assert(vertex < vertexCount);
        return graphData[vertex];
    }
    
    //Right hand side operator
    template <class Type>
    Type Graph<Type> :: operator[](int vertex) const
    {
        assert(vertex < vertexCount);
        return graphData[vertex];
    }
    
    template <class Type>
    void Graph<Type> :: addVertex(const Type& value)
    {
        assert(vertexCount < MAXIMUM);
        int newVertexNumber = vertexCount;
        vertexCount++;
        
        for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
        {
            adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
            adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
        }
        
        graphData[newVertexNumber] = value;
    }

    template <class Type>
    void Graph<Type> :: addEdge(int source, int target)
    {
        assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
        adjacencyMatrix[source][target] = true;
    }
    
    template <class Type>
    void Graph<Type> :: addEdgeCost(int source, int target, int cost)
    {
        assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
        weightCostMatrix[source][target] = cost;
        weightCostMatrix[source]
    }
#endif /* Graph_hpp */
