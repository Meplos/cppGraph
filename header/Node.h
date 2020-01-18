#include <iostream>
class Node{
    private:
        const std::string name;
    public:
        Node(std::string);
        ~Node();
        std::string getName();
}