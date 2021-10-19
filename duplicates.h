#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char *pathname;
    int size;
    char *hash;
} FILES;

FILES *files;
int nfiles;

char *strSHA2(char *filename);
void scan_directory(char *dirname);

bool including_hidden;