#include "word_iterator.h"

#include <string.h>
#include <stdio.h>

int main()
{
    char *test_str = "Hello world, these are my words!";

    word_iterator wi;
    char *cur_word;
    size_t cur_length;
    for(word_iterator_init(&wi, test_str, strlen(test_str));
        word_iterator_get_next(&wi, &cur_word, &cur_length);)
    {
        printf("Current word is: ");
        fwrite(cur_word, cur_length, 1, stdout);
        printf("\n");
    }
    return 0;
}
