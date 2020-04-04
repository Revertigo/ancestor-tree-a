#ifndef ANCESTOR_TREE_A_FAMILYTREE_HPP
#define ANCESTOR_TREE_A_FAMILYTREE_HPP

#include <string>
using namespace std;

namespace family {
    class Tree {
        class Node {
        public:
            string _name;
            Node * _father;
            Node * _mother;
            //Initialization list :)
            Node(string name, Node * father, Node * mother): _name(name), _father(father), _mother(mother){}
        };

        Tree::Node _root;//Root father

    public:
        Tree(string name);
        Tree & addFather(const string & son, const string & father);
        Tree & addMother(const string & son, const string & mother);
        void display(void);
        string relation(const string & name);
        string find(const string& relation);
        void remove(string name);
    };
}

#endif //ANCESTOR_TREE_A_FAMILYTREE_HPP
