/*
** EPITECH PROJECT, 2020
** B-CPP-300-LYN-3-1-CPPD02A-clement.fleur
** File description:
** del_generic_list.c
*/

#include "generic_list.h"
#include <stddef.h>

bool list_del_elem_at_front(list_t *front_ptr)
{
    list_t list = *front_ptr;

    if (!list)
        return false;
    *front_ptr = list->next;
    free(list);

    return true;
}

bool list_del_elem_at_back(list_t *front_ptr)
{
    list_t linked_list = *front_ptr;
    list_t last_data = NULL;

    if (!linked_list)
        return false;
    while (linked_list->next) {
        last_data = linked_list;
        linked_list = linked_list->next;
    }
    if (last_data)
        last_data->next = NULL;
    else
        *front_ptr = NULL;
    free(linked_list);
    return true;
}

bool list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    list_t last_data = *front_ptr;
    list_t linked_list = last_data->next;

    if (position == 0)
        return list_del_elem_at_front(front_ptr);

    if (!front_ptr)
        return false;
    for (unsigned int i = 0; i + 1 < position; i++) {
        if (!linked_list)
            return false;
        last_data = linked_list;
        linked_list = linked_list->next;
    }
    if (linked_list)
        last_data->next = linked_list->next;
    free(linked_list);
    return true;
}

bool list_is_empty(list_t list)
{
    if (!list)
        return true;
    return false;
}

void list_clear(list_t *front)
{
    list_t linked_list = *front;

    while (*front) {
        list_del_elem_at_back(front);
    }

}