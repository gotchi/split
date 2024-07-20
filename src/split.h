#ifndef SPLIT_H__
#define SPLIT_H__

typedef struct wordslist
{
    int count;      /* wordの数　*/
    char **word;    /* wordの2次元配列 */
} WORDSLIST;

WORDSLIST* split(char *string, char *resolve);

#endif