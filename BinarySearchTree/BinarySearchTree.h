/**
 * @file    BinarySearchTree.h
 * @brief   Class definition for the BinarySearchTree class
 *
 *
 * @author        Tushar Verma
 * @date          09/07/2017
 */
#ifndef BINARYSEARCHTREE_h
#define BINARYSEARCHTREE_h
#include"Node.h"


//Class Binary Search Tree Starts..

class BinarySearchTree
{
    Node* root; //Creating a Node
    
    Node* makeEmpty(Node* t) //Delete the node
    {
        if(t == NULL) //If the value of "t" is zero
            return NULL;
        {
            makeEmpty(t->left); //Deleting the value from left leaf
            makeEmpty(t->right);//Deleting the value from right leaf
            delete t; //Erasing the value from t
        }
        return NULL;
    }
    
    Node* insert(int x, Node* t)
    {
        if(t == NULL)
        {
            t = new Node; //Creating a new Node
            t->data = x; //Geting the value of "t" and make it equal to "x"
            t->left = t->right = NULL;
        }
        else if(x < t->data) //Else the value of of x is less than "t"
            t->left = insert(x, t->left); //On the value of left leaf add the new value "x"
        else if(x > t->data) //Or the value of x is larger than "t"
            t->right = insert(x, t->right); //On the value of right leaf add the new value "x"
        return t;
    }
    void inorder(Node* t)
    {
        if(t == NULL)
            return;
        inorder(t->left); //Recurse the function with the left leaf
        cout << t->data << " "; //Print the value of the Node
        inorder(t->right); //Recurse the function with the right leaf
    }
    
public:
    BinarySearchTree() //Create a instance of BST with root value equal to zero
    {
        root = NULL;
    }
    
    ~BinarySearchTree() //Destroy the instance of BST
    {
        root = makeEmpty(root);
    }
    
    void insert(int x)
    {
        root = insert(x, root); //Calling the private function for Insert with value of x and this is equal to the root
    }
    

    void display()
    {
        inorder(root); //Displaying every single value in the tree from the root
        cout << endl;
    }

};

#endif
