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

private:
	Node *head;
};


