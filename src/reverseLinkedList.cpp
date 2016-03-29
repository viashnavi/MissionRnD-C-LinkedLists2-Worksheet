/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	if (head != NULL){
		struct node* res = NULL;
		while (head != NULL){
			struct node* nn = (struct node*)malloc(sizeof(struct node*));
			nn->num = head->num;
			nn->next = NULL;
			if (res == NULL){
				res = nn;
			}
			else{
				nn->next = res;
				res = nn;
			}
			head = head->next;
		}
		return res;
	}
	return NULL;
}
