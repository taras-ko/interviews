#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct list {
	struct list *next;
	char *str;
} List;

void print_list(List *l) {
	if (l == NULL) return;
	print_list(l->next);
	printf("%s ", l->str);
}

List *reverse(List *head) {
	List *prev, *next, *current, *tail;

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

	return tail;
}

List *add_elem(List *token, const char *s)
{
	List *new = (List *)malloc(sizeof(List));
	new->str = strdup(s);
	new->next = token;

	return new;
}

main(int argc, char **argv)
{
	List *l;
	List **list;

	l = NULL;
	while (--argc > 0) {
		l = add_elem(l, *++argv);
	}

	l = reverse(l);

	print_list(l);
}
