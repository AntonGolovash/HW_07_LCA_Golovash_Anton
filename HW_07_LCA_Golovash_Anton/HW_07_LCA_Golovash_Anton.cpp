#include <iostream>
#include "Tree.h"
#include "Tree.cpp"

int main()
{
	Tree<int> tree;
	tree.AddIteratively(8);
	tree.AddIteratively(3);
	tree.AddIteratively(1);
	tree.AddIteratively(0);
	tree.AddIteratively(6);
	tree.AddIteratively(7);
	tree.AddIteratively(4);
	tree.AddIteratively(10);
	tree.AddIteratively(14);
	tree.AddIteratively(13);
	tree.AddIteratively(15);
	// add recursevely
	//tree.AddRecursively(20);
	//tree.AddRecursively(25);
	//tree.AddRecursively(19);
	//tree.AddRecursively(17);
	//tree.AddRecursively(25);
	//tree.AddRecursively(5);

	tree.DisplayMaxMin();
	cout << endl;

	int node1 = 1;
	int node2 = 7;

	cout << "LCA:\t" << tree.LCA(node1, node2);

	return 0;
}