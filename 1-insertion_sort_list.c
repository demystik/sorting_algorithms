#include "sort.h"

void insertion_sort_list(listint_t **list)
{

    listint_t *head, *temp, *h;
    head = *list;
    temp->prev->next = h->prev;
    temp->next = h->next->prev;
    h->next->prev = temp->next;
    h->prev = temp->prev->next;
    h->next = temp->prev;
    temp->prev = h->next;
    
    /*
    listint_t *head, *i, *h, *temp;
    i = head = *list;

    i = head->next;
    while (i != NULL)
    {
        h = i;
        while(h != NULL && h->prev->n > h->n)
        {
            temp = h->prev;
            //swap
            temp->prev->next = h->prev;
            temp->next = h->next->prev;
            h->next->prev = temp->next;
            h->prev = temp->prev->next;
            h->next = temp->prev;
            temp->prev = h->next;
            // done swapping

            h = h->prev;
        }
        print_list(*list);
        i = i->next;
    }
    */

}