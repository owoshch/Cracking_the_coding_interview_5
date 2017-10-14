#include <iostream>

struct Node {
	int data;
	Node *next;
};


class LinkedList {

public:
	LinkedList() {
		head = NULL;
	}
	void Push(int value) {
		Node *temp = new Node;
		temp->data = value;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
		}
		else {
			Node *end = head;
			while (end->next != NULL) {
				end = end->next;
			}
			end->next = temp;
		}
	}

	void Print() {
		Node *temp = head;
		std::cout << temp->data << " ";
		while (temp->next != NULL) {
			temp = temp->next;
			std::cout << temp->data << " ";
		}
		std::cout << std::endl;
	}



	void Delete(int value) {
		Node *n = head;
		//delete head
		if (n->data == value) {
			head = head->next;
			delete n;
			return;
		}
		while (n->next->data != value and n->next->next != NULL) {
			n = n->next;
		}
		if (n->next->next != NULL) {
			n->next = n->next->next;
		}
		else {
			n->next = NULL;
		}
	}



private:
	Node *head;
};


int main() {
	LinkedList test;
	test.Push(5);
	test.Push(10);
	test.Push(15);
	test.Print();
	test.Delete(15);
	test.Print();
}