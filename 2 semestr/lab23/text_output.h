#ifndef TEXT_OUTPUT_H
#define TEXT_OUTPUT_H

#include <stdio.h>
#include "data.h"
#include <math.h>

void text_out(cell *tmp, int space)
{
    int i = space;
    if (tmp->right)
    {
        text_out(tmp->right, space + 1);
    }
    while (i > 0)
    {
        printf("%s", "    ");
        i -= 1;
    }
    printf("%c\n", tmp->value);
    i -= 1;
    if (tmp->left)
    {
        text_out(tmp->left, space + 1);
    }
}

#endif