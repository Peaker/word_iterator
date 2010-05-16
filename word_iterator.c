#include "word_iterator.h"

void word_iterator_init(word_iterator *wi, char *str, size_t length)
{
    wi->pos = str;
    wi->skip_count = 0;
    wi->end = str + length;
}

bool word_iterator_get_next(word_iterator *wi, char **result_word, size_t *result_word_length)
{
    wi->pos += wi->skip_count;
    if(wi->pos >= wi->end || !*wi->pos) {
        *result_word = NULL;
        *result_word_length = 0;
        return false;
    }
    size_t max_length = wi->end - wi->pos;
    size_t i;
    for(i = 0; i < max_length; i++) {
        if(!wi->pos[i] || ' ' == wi->pos[i]) {
            break;
        }
    }
    wi->skip_count = i + 1;
    *result_word = wi->pos;
    *result_word_length = i;
    return true;
}
