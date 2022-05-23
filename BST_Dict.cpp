#include <iostream>
#include <conio.h>
#include <stdlib.h>


struct BSTnode
{
    int data ;
    BSTnode *left , *right ;

};


class BST
{
   BSTnode *root ;

   public:
        BST() {root=NULL;}
        void create();
        void display();
        void operations();

};

