#include "sort.h"


/**
 * swap_if - swap if temp->prev is NULL
 *@temp: temp pointer
 *@h: h pointer
 *Author: Thaoban Abdrasheed
 *Return: return void
 */
void swap_if(listint_t *temp, listint_t *h)
{
temp->next = h->next;
h->next->prev = temp;
h->prev = NULL;
h->next = temp;
temp->prev = h;
}




/**
 * swap_elseif - swap if h->next is NULL
 *@temp: temp pointer
 *@h: h pointer
 *Author: Thaoban Abdrasheed
 *Return: return void
 */
void swap_elseif(listint_t *temp, listint_t *h)
{
temp->prev->next = h;
h->next = temp;
h->prev = temp->prev;
temp->prev = h;
temp->next = NULL;
}





/**
 * insertion_sort_list - Implementation of insertion sort
 *@list: pointer to the array
 *
 *Author: Thaoban Abdrasheed
 *Return: nothing to return
 */
void insertion_sort_list(listint_t **list)
{
listint_t *head, *i, *h, *temp;
i = head = *list;

i = head->next;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
while (i != NULL)
{
h = i;
while (h->prev != NULL && h->prev->n > h->n)
{
temp = h->prev;
/* swap */
if (temp->prev == NULL)
{
swap_if(temp, h);
}
else if (h->next == NULL)
{
swap_elseif(temp, h);
}
else
{
temp->prev->next = h;
temp->next = h->next;
h->next->prev = temp;
h->prev = temp->prev;
h->next = temp;
temp->prev = h;
}
while (head->prev != NULL)
head = head->prev;
*list = head;
print_list(*list);
}
i = i->next;
}
}
