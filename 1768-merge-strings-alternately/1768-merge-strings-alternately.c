char * mergeAlternately(char * word1, char * word2){
    char *result = (char *)malloc(sizeof(char) * (strlen(word1) + strlen(word2) + 1));
    int check = strlen(word1) < strlen(word2) ? strlen(word1) : strlen(word2);

    if (result == NULL) {
        return NULL;
    }
    
    int index = 0;

    for (int i = 0; i < check; i++) {
        result[index++] = word1[i];
        result[index++] = word2[i];
    }

    for (int i = check; word1[i] != '\0'; i++) {
        result[index++] = word1[i];
    }
    for (int i = check; word2[i] != '\0'; i++) {
        result[index++] = word2[i];
    }
    
    result[index] = '\0';

    return result;
}