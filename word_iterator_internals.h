#ifndef __word_iterator_internals_h_
#define __word_iterator_internals_h_

struct word_iterator {
    char *pos;
    size_t skip_count;
    char *end;
};

#endif
