#ifndef GREP_H
#define GREP_H

typedef struct arguments {
    int e, i, v, c, l, n, h, s, f, o;
    char pattern[1024];
    int len_pattern;
} arguments;

#endif