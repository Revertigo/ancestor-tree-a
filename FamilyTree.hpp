#ifndef ANCESTOR_TREE_A_FAMILYTREE_HPP
#define ANCESTOR_TREE_A_FAMILYTREE_HPP

#include <string>
using namespace std;

namespace family {
    class Tree {
        class Node {
            string _name;
            Node * _father;
            Node * _mother;
        public:
            //Initialization list :)
            Node(string name, Node * father, Node * mother): _name(name), _father(father), _mother(mother){}
        };

        Tree::Node _root;//Root father

    public:
        Tree(string name);
        Tree & addFather(string sun, string father);
        Tree & addMother(string sun, string mother);
        void display(void);
        string relation(string name);
        string find(string relation);
        void remove(string name);
    };
}

#endif //ANCESTOR_TREE_A_FAMILYTREE_HPP
