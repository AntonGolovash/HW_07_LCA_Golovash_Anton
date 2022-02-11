#pragma once
#include <iostream>
#include <stack>
#include <string>

using namespace std;

template<class T>
class Tree
{
public:
	Tree();
	~Tree();
	void AddIteratively(T data);
	void AddRecursively(T data);
	void DisplayMaxMin();
	void DisplayMinMax();
	T& GetRoot();
	T& LCA(T& data1, T& data2);
	bool FoundNode(T& data);
private:
	class Node
	{
	public:
		~Node() // Так как Node это отдельный объект, то у каждого нода свой деструктор
		{
			if (right != nullptr) delete right;
			if (left != nullptr) delete left;
		}
		T data;
		Node* right;
		Node* left;
	};
	Node* _root;
	void AddRecursivelyNode(Node** root, Node** newNode); // Рекурсивный обход дерева
	void DisplayRecursivelyMaxMin(Node** root); // Display max - min
	void DisplayRecursivelyMinMax(Node** root); // Display max - min
	bool PrivateFoundNode(Node** root, T& data); // Вспомогательный метод для поиска
	bool key1, key2; // Ключи для поиска
	bool FoundNodes(Node** root, T& data1, T& data2);
};