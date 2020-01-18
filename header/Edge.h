#include "Node.h"

class Edge
{
    private:
        int id;
        Node* src;
        Node* dest;
        int rgb[3];
    public:
        Edge(Node *, Node *, int, int, int);
        ~Edge();

        Node getSource();
        Node getDest();
        void setColor(int ,int ,int);

};

