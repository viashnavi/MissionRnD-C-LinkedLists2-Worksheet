/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int length2(struct node* temp){
	int count = 0;
	while (temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
//E.g.: 1->2->3->4->5->6, output is 3.

int linkedListMedian(struct node *head) {
	if (head != NULL){
		int len = length2(head);
			
		if (len % 2 == 1){
			for (int i = 0; i < (len / 2); i++){
				head = head->next;
			}
			return head->num;
		}
		else{
			for (int i = 0; i < (len / 2)-1; i++){
				head = head->next;
			}
			return ((head->num) + (head->next->num)) / 2;
		}
	}
	return -1;
}
