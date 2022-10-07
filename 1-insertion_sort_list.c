#include "sort.h"

void insertion_sort_list(listint_t **list)
{

    listint_t *head, *i, *h, *temp;
    i = head = *list;

    i = head->next;
    while (i != NULL)
    {
        h = i;
        while(h->prev != NULL && h->prev->n > h->n)
        {
            temp = h->prev;
            /* swap */
            if (temp->prev == NULL)
            {
            temp->next = h->next;
            h->next->prev = temp;
            h->prev = NULL;
            h->next = temp;
            temp->prev = h;
            }
            else if (h->next == NULL)
            {
                temp->prev->next = h;
                h->next = temp;
                h->prev = temp->prev;
                temp->prev = h;
                temp->next = NULL;
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
            /* done swapping */
            while(head->prev != NULL)
                head = head->prev;
            *list = head;
            print_list(*list);

           
        }
        i = i->next;
    }

}

