int strStr(char * haystack, char * needle){
    int i, j;
    int k = 0;
    bool found = true;
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);
    
    if (haystack_len < needle_len)
        return -1;

    for (i = 0; i < haystack_len; i++){
        if (haystack[i] == needle[0]){
            for(k = i, j = 0; needle[j] && found; j++, k++){
                if (haystack[k] != needle[j])
                {
                    found  = false;
                }
            }
            if (found == true)
            {
                return i;
            }
        }
        found = true;
    }
    return -1;
}
