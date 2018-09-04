/**
 * @file    Node.h
 * @brief   Class definition for the Node class
 *
 *
 * @author        Tushar Verma
 * @date          09/07/2017
 */
#ifndef NODE_H
#define NODE_H

struct Node
{
    int data;
    Node* left;
    Node* right;
    struct Node* next;
};


#endif // !NODE_H
