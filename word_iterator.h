#ifndef __word_iterator_h_
#define __word_iterator_h_

#include <string.h>
#include <stdbool.h>

/* Use a forward declaration here, so it is clear the structure itself
 * is a private, abstract type (defined in the internals header): */
typedef struct word_iterator word_iterator;

void word_iterator_init(word_iterator *, char *str, size_t length);
/* Returns NULL when no more words are left: */
bool word_iterator_get_next(word_iterator *, char **result_word, size_t *result_word_length);

#include "word_iterator_internals.h"

#endif
