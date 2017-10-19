/* 
Implement a function to check if binary tree is balanced
*/

#include <iostream>
#include <algorithm>

class Node {
public:
	int data;
	Node *left;
	Node *right;
	Node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};


int Maximum(const int& a, const int& b) {
	if (a >= b) {
		return a;
	}
	return b;
}

class Tree {
public:
	Node * Insert (Node *root, int d) {
		if (root == NULL) {
			return new Node(d);
		}
		else {
			Node *cur;
			if (d <= root->data) {
				cur = Insert(root->left, d);
				root->left = cur;				
			}
			else {
				cur = Insert(root->right, d);
				root->right = cur;
			}
		}
		return root;
	}

	int Height(Node* root) {
		if (root == NULL) {
			return -1;
		}
		else {
			return 1 + Maximum(Height(root->left), Height(root->right));
		}
	}
};

int main() {
	Tree tree;
	int n = 0; // number of nodes
	int data = 0;
	Node* root = NULL;
	std::cin >> n;
	while (n-- > 0) {
		std::cin >> data;
		tree.Insert(root, data);
	}

	int height = tree.Height(root);
	std::cout << height << std::endl;

}