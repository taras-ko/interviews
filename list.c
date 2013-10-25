#include<stdio.h>

typedef struct list {
	struct list *next;
	char val;
} List;

void print_list(struct list *head) {
	struct list *p;

	for (p = head; p != NULL; p = p->next)
		printf("%c ", p->val);

	putchar('\n');
}

void reverse(struct list *head) {
	struct list *prev, *next, *current, *tail;

	prev = NULL;
	current = head;
	next = current->next;

	while (next != NULL)
	{
		current->next = prev;
		prev = current;
		current = next;
		next = current->next;
	}

	tail = current;
	tail->next = prev;
}

main(int argc, char **argv)
{
	List a, b, c, d, e;
	List *head;
	List *list[] = {a, b, c, d, e};

	while (--argc > 0)
//		add_element(*++argv);

	/*
	a.val = 'a';
	a.next = &b;
	b.val = 'b';
	b.next = &c;
	c.val = 'c';
	c.next = &d;
	d.val = 'd';
	d.next = &e;
	e.val = 'e';
	e.next = NULL;

	print_list(&a);

	reverse(&a);

	print_list(&e);
	*/
}
