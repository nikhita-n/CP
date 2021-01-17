/*
    -They are like macros
    -Compiled by your usage

*/
    "a print fn that prints anything"
    template<typename T> void Print(T value)
    {
        cout<<value<<endl;
    }

    //The above print fn doesn't actually exist, Print() gets created when Print() call is found, depending on what t is

        -valid fn calls:
            --Print<int>(5);
            --Print(5);

    template<class T> void Print(T value) //class in place of typename is also valid
    {
        cout<<value<<endl;
    }

    "for classes"
    #EX1: 
            template<int N> class Array{
            private:    int m_Array[N];
            public:     int GetSize() const{return N;}
            };
            //driver code:
            Array<5> array; //5 is your N

    #EX2:
            template<typename T,int N> class Array{
            private:    T m_Array[N]; //creats an array of type T
            public:     int GetSize() const{return N;}
            };
            //driver code:
            Array<int,5> array;

    