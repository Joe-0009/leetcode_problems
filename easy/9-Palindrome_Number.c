 int whatbase(int x)
    {
        if (x == 0)
            return 0;
        long int i = 1;
        while (x / i != 0)
        {        
            i = i * 10;
        }
        return i / 10;
    }


    bool isPalindrome(int x) {
        int i = x;
        int j = x;
        int k = whatbase(x) ;
        if (x < 0 )
        {
            return false;
        }
        


        while (j > 0)
        {
            if ((j / k) != (i % 10))
            {
                return false;
            }
            j = j % k;
            i = i / 10;
            k = k /10;
            
        }
        return true;
    }
};
