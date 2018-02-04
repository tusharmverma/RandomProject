//
//  main.cpp
//  BST
//
//  Created by Tushar  Verma on 9/7/17.
//  Copyright © 2017 Tushar Verma. All rights reserved.
//
/**
 * @file    main.cpp
 * @brief
 *
 *
 * @remarks
 *      Course:        Computer Science
 *      Assignment #:  BST
 *      Due Date:      09/07/2017
 *      Instructor:    Dr. E. T. Hammerand
 *
 * @author        Tushar Verma
 * @date          09/07/2017
 */

#include <stdio.h>
#include<iostream>
using namespace std;
#include "BinarySearchTree.h"
#include "Node.h"


int main()
{
    //Added tests to add into binary search tree
    BinarySearchTree t1; //Create a Binary tree
    t1.insert (333); //Adding a value to the tree
    t1.insert (888); 
    t1.insert (222);
    t1.insert (777);
    t1.display();

}
