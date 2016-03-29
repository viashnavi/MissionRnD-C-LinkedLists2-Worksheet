/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	if (head != NULL && K > 0){
		//E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5
		//createList(289), 1), 218191
		int count = 0;
		struct node* h = head;
		while (h != NULL){
			count++;
			if (count == K){
				struct node* nn = (struct node*)malloc(sizeof(struct node));
				nn->num = K;
				nn->next = h->next;
				h->next = nn;
				h = h->next;
				count = 0;
			}
			h = h->next;
		}
		return head;
	}
	return NULL;
}
