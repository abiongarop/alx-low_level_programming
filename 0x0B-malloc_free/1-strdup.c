#include <stdlib.h>
#include <string.h>
#include "main.h"

char *_strdup(char *str) {
    
    if (str == NULL) {
        return NULL;
    }
    
    int len = strlen(str);
    
    char *dup_str = (char*) malloc((len + 1) * sizeof(char));
    if (dup_str == NULL) {
        return NULL; 
    }
    
    strcpy(dup_str, str);
    
    return dup_str;
}

