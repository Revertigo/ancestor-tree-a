#include "FamilyTree.hpp"

namespace family
{
    //Ctor
    Tree::Tree(string name):_root(name, NULL, NULL){};
    Tree & Tree::addFather(const string & son, const string & father){return *this;}
    Tree & Tree::addMother(const string & son, const string & mother){return *this;}
    void Tree::display(void){}
    string Tree::relation(const string & name){return "";}
    string Tree::find(const string & relation){ return "";}
    void Tree::remove(string name){}
}