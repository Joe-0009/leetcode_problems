/**
 * longestCommonPrefix - Find the longest common prefix among an array of strings.
 * @strs: An array of strings.
 * @strsSize: The number of strings in the array.
 *
 * Return: The longest common prefix as a newly allocated string.
 */
char *longestCommonPrefix(char **strs, int strsSize) {
    int i, j, p = 0;
    char *pref;
    int len;

    // Allocate memory for the prefix string.
    pref = malloc(200);
    if (pref == NULL)
        return (NULL);

    // Initialize the prefix with the first string in the array.
    for (p = 0; strs[0][p] != '\0'; p++) {
        pref[p] = strs[0][p];
    }
    pref[p] = '\0';

    // Iterate through the rest of the strings in the array.
    for (i = 1; i < strsSize; i++) {
        // If the current prefix is longer than the current string,
        // truncate the prefix to match the string's length.
        if (strlen(pref) > strlen(strs[i])) {
            len = strlen(strs[i]);
            pref[len] = '\0';
        }

        // Compare characters of the prefix and the current string.
        for (j = 0, p = 0; pref[p] != '\0' && strs[i][j] != '\0'; p++, j++) {
            // If a mismatch is found, truncate the prefix.
            if (pref[p] != strs[i][j]) {
                pref[p] = '\0';
            }
        }
    }

    return (pref);
}

