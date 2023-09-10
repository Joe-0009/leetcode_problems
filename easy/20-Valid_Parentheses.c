struct bra {
        char brack1;
        char brack2;
    };

    struct bra parenth[3] = {
        { ')', '('},
        { '}', '{'},
        { ']', '['}
    };
char closebrack(char par)
    {
        for (int i = 0; i < 3; i++)
        {
            if (parenth[i].brack1 == par)
            {
                return (parenth[i].brack2);
            }
        }
        return ('F');
    }
bool isValid(char * s) {
    int slen = strlen(s);
    char c;
    int j = 0;
    int i = 0;
    char *op = malloc((slen / 2) + 1 );
    
    if (op == NULL)
        return(false);
    if (strlen(s) <= 1)
        return false;
    if (strlen(s) % 2 != 0 )
        return false;
    
    for (;s[i];i++)
    {
        if ( s[i] == '(' || s[i] == '[' || s[i] == '{' )
        {
            op[j] = s[i];
            j++;
        }else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (j <= 0) {
                free(op);
                return false; // Unmatched closing bracket
            }
            c = closebrack(s[i]);
            if (op[j - 1] == c )
            {
                op[j - 1] = '\0';
                if(op[j - 1] == '\0' && j > 0)
                {
                    j--;
                }
            }else 
            {
                free(op);
                return false;
            }
        }
    }
    
    free(op);
    return j == 0; // Check if all opening brackets were closed
}

