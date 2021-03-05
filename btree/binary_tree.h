#ifndef BT_H
#define BT_H


#include <iostream>

using namespace std;

class BT{
	private:
		string key;
		BT* left;
		BT* right;
	public:
		BT(string rootObj);
		void insertLeft(string newNode);
		void insertRight(string newNode);
		BT* getLeft();
		BT* getRight();
		void setRootVal(string val);
		string getRootVal();
};


#endif