#include "FamilyTree.hpp"

namespace family
{
    //Ctor
    Tree::Tree(string name):_root(name, NULL, NULL){};
    Tree & Tree::addFather(string sun, string father){return *this;}
    Tree & Tree::addMother(string sun, string mother){return *this;}
    void Tree::display(void){}
    string Tree::relation(string name){return "";}
    string Tree::find(string relation){ return "";}
    void Tree::remove(string name){}
}