#ifndef LISTS_H
#define LISTS_H

typedef struct list_s {
	char *str;
	struct list_s *next;
} list_t;
int _putstr(const char *str)
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
