 struct roman_numbers {
        char rn;
        int num;
    };

    struct roman_numbers rN[8] = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    } ;

    int romanToInt(char * s) {
            int i, j,k; 
            int sum = 0;

            for (i = 0; s[i] != '\0'; i++)
            {
                for (j = 0; rN[j].rn; j++)
                {
                    if(rN[j].rn == s[i])
                    { 
                        sum = sum + rN[j].num;
                         if (i > 0) { 
                            for (k = 0; rN[k].rn; k++){
                                if(rN[k].rn == s[i-1]){
                                    if (rN[k].num < rN[j].num){
                                        sum = sum -(2 * rN[k].num);
                                    }
                                }
                            }
                        }    
                    }
                }
            }
            return sum;
        }
