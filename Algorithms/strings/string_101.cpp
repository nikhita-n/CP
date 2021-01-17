check
string vs stringstream
//array of suffixes
    The diff arrays u get by starting from index i , where 0<=i<=n-1
#CODE
    void suffixes(string s)
    {
        string a[s.length()];
        for(int i=0;i<s.length();i++)
            a[i]=s.substr(i,length()-1);
    }

//LONGEST COMMON PREFIX
    compute length of LCP of 2 strings 
    int lcp(string s,string t){
        int N=min(s.length(),t.length());
        for(int i=0;i<N;i++)
            if(s[i]!=t[i])
                return i;
    }
//making it work for diff alphabet(Binary,octal,hexadecimal.. )
"Digital KEY: Sequence of digits over fixed alphabet" //mostly the alphabet set
"RADIX:        Number of digits R in alphabet" //also means how many diff values it can take