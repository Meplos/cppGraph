#include "GraphInterface.h"
#include "Node.h"
#include "Edge.h"
#include "iostream"
class Graph : public GraphInterface
{
    private:
        int nb_nodes;
        Node** nodes;
        int nb_edges;
        Edge** edges;

        Node* findNodeByName();
        
        Edge* findEdgeById(int);
        Edge** findEdgesBySource(std::string);
        Edge** findEdgesByDest(std::string);
        Edge** findEdgesBySourceAndDest(std::string, std::string);


    public:
        Graph(/* args */);
        ~Graph();

        // Node Methods
        Node* getNodes();
        void addNodes(std::string name);
        int getNb_nodes();
        // Edge Methods
        void addEdge(std::string, std::string);
        Edge* getEdge();
        void setEdgeColor(int, int, int, int);

};

