#include <iostream>

struct Node {
	int data;
	Node* next;
};


class Stack {
public:
	Stack() {
		head = NULL;
	}

	void Push(int d) {
		Node *first = new Node;
		first->data = d;
		first->next = head;
		head = first;
	}
	void Print() {
		if (head != NULL) {
			std::cout << head->data << " ";
		}
		else {
			return;
		}
		Node *runner = head;
		while (runner->next != NULL) {
			runner = runner->next;
			std::cout << runner->data << " ";
		}
		std::cout << std::endl;

	}



private:
	Node *head;

};


int main() {
	Stack stack;
	stack.Push(5);
	stack.Print();
}