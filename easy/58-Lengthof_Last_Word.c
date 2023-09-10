int lengthOfLastWord(char * s){
    int j = 0;
    int len = strlen(s);
    
    len--;
    while (s[len ] == ' ')
    {
            len--;
        
    }
    
     while (len >= 0 ){
         if (s[len] == ' ')
                break;
                j++;
                len--;
            }
        
    return (j  );
}
