#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include <iostream>
#include <string>
#include "binary_tree.h"
using namespace std;

// how it works:
// https://runestone.academy/runestone/books/published/cppds/Trees/ParseTree.html
//
//  

//class Binary Tree
// BT::BT {
// 	private:
// 		string key;
// 		BT* left;
// 		BT* right;
// 	public:
BT::BT(string rootObj){
	this->key = rootObj;
	this->left = NULL;
	this->right = NULL;
}


void BT::insertLeft(string newNode){
	if(this->left == NULL){
		this->left = new BT(newNode);
	}
	else{
		BT* newChild = new BT(newNode);
		newChild->left = this->left;
		this->left = newChild;
	}
}


void BT::insertRight(string newNode){
	if(this->right == NULL){
		this->right = new BT(newNode);
	}
	else{
		BT* newChild = new BT(newNode);
		newChild->right = this->right;
		this->right = newChild;
	}
}

BT* BT::getLeft(){
	return this->left;
}

BT* BT::getRight(){
	return this->right;
}

void BT::setRootVal(string val){
	this->key = val;
}

string BT::getRootVal(){
	return this->key;
}


// TODO:
// implement a stack

//implement the string -> binarytree function