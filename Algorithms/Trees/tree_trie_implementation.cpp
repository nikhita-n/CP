//nested class rules violated, so pls check, also test constructors for calss with templates
template<typename Value>
class TrieST{
    private: int R=256;//extended ASCII
    template<typename T> class Node{
        private:
        T value;
        Node<T> *next[R];//R is the alphabet size
    };

    private:
    
    Node<Value> *root=new Node();
    Node<Value> *put(Node<Value> *x,string key,Value val,int d)
    Node<Value> *get(Node<Value> *x, string key,int d)

    public:
    void put(string key,Value val)
    bool contains(string key)
    Value get(string key)
};

Node<Value> *TrieST:: put(Node<Value> *x,string key,Value val,int d)
    {
        if(x==NULL) //check when X can be NULL
            x=new Node();
            if(d==key.length())
             {  x->value=val;
                return x;
             }
            char c=key[d];
            x->next[c]=put(x->next[c],key,val,d+1);
            return x;
    }

Node<Value> *TrieST::get(Node<Value> *x, string key,int d)
    {
        if(x==NULL)
            return NULL;
        if(d==key.length())
            return x;
        char c=key[d];
        return get(x->next[c],key,d+1);
    }

 void TrieST::put(string key,Value val)
    {
        root=put(root,key,val,0);
    }

 bool TrieST::contains(string key)
    {
        return get(key)!=NULL
    }
Value TrieST::get(string key)
    {
        Node<Value> x=get(root,key,0);
        if(x==NULL)
            return NULL;
        return x->value;
    }

#PERFORMANCE
    search hit- need to examine all L characters for equality
    search miss - could have mismatch on first characters
                - typical case: examine only a few characters(sublinear)

    #CONS 
    R null links at each leaf