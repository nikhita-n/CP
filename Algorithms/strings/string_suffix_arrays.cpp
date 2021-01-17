//used for pre-processing
suffix array- an array of suffixes of a given string
           
ith suffix - it is a sub-array of a string starting at position i.

//Keyword-in-context search
    -preprocess: suffix sort the text
    -query - binary search for query;scan until mismatch

   void suffixes(string s)
    {
        string a[s.length()];
        for(int i=0;i<s.length();i++)
            a[i]=s.substr(i,length()-1);
    }


"suffix sort" - sort suffixes to bring repeated strings together
              