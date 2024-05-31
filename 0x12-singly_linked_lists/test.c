#include "test.h"

int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

void _strcpy(char *dest, char *src)
{
	 int i;
	 for (i = 0; src[i] != '\0'; i++)
	 {
		 dest[i] = src[i];
	 }
	 dest[i] = '\0';
}

char *_strdup(char *str)
{
	int size;
	char *new;

	size = _strlen(str);
	new = malloc(sizeof(char) * (size + 1));
	_strcpy(new, str);

	return (new);
}

void add_node(list_t **h, char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = _strdup(str);
	new->len = _strlen(new->str);

	new->next = *h;
	*h = new;
}

void print_ll(list_t *h)
{
	while (h != NULL)
	{
		printf("name = [%s], size = [%u]\n", h->str, h->len);
		h = h->next;
	}
}

int ll_len(list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

void print_ll_reverse(list_t *h)
{
	if (h != NULL)
	{
		print_ll_reverse(h->next);
		printf("name = [%s], size = [%u]\n", h->str, h->len);
	}
}

list_t *ll_to_array(list_t *h)
{
	int size;
	list_t *a;
	int i;

	size = ll_len(h);
	a = malloc(sizeof(list_t) * size);
	for(i = 0; i < size; i++, h = h->next)
	{
		a[i] = *h;
	}
	return (a);
}

void print_array(list_t *a)
{
	int i;

	for (i = 0; a[i].next != NULL; i++)
	{
		printf("name = [%s], size = [%u]\n", a[i].str, a[i].len);
	}
	printf("name = [%s], size = [%u]\n", a[i].str, a[i].len);
}
int main(void)
{
	list_t *h;
	list_t *a;

	h = NULL;
	add_node(&h, "Gianna");
	add_node(&h, "Warren");
	add_node(&h, "Jeremy");
	
	print_ll(h);
	printf("Size of the list = [%d]\n", ll_len(h));
	print_ll_reverse(h);
	printf("\nARRAY\n");
	a = ll_to_array(h);
	print_array(a);

	return (0);
}
