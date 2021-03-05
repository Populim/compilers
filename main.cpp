#include <fstream>
#include <iostream>
#include "btree/binary_tree.h"

int read_from_file(string name){
	fstream new_file;
	new_file.open(name, ios::in);
	return 1;

}

int main(){
	string teste = "teste 123 parsing";
	BT* btree = new BT(teste);

}
