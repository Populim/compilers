#include <iostream>
#include <string>

using namespace std;




// how it works:
// https://runestone.academy/runestone/books/published/cppds/Trees/ParseTree.html
//
//  

//class Binary Tree
class BT {
	private:
		string key;
		BT* left;
		BT* right;
	public:
		BT(string rootObj){
			this->key = rootObj;
			this->left = NULL;
			this->right = NULL;
		}
		

		void insertLeft(string newNode){
			if(this->left == NULL){
				this->left = new BT(newNode);
			}
			else{
				BT* newChild = new BT(newNode)
				newChild->left = this->left;
				this->left = newChild;
			}
		}


		void insertRight(string newNode){
			if(this->right == NULL){
				this->right = new BT(newNode);
			}
			else{
				BT* newChild = new BT(newNode);
				newChild->right = this->right;
				this->right = newChild;
			}
		}

		BT* getLeft(){
			return this->left;
		}

		BT* getRight(){
			return this->right;
		}

		void setRootVal(string val){
			this->key = val;
		}

		string getRootVal(){
			return this->key;
		}
}

// TODO:
// implement a stack


//implement the string -> binarytree function


int main(){
	cout << " Hello;World \n";


}
