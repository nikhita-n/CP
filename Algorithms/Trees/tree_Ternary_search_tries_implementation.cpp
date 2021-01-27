//consists of 5 fields,
    -A value
    -A character c
    -A reference to a left TST
    -A reference to a middle TST
    -A reference to a right TST
/*
    NODE class

    template<typename T>
    class Node{
        T val;
        char c;
        Node<T> *left,*mid,*right;
    };
*/
template<typename Value>
class TST{
    private:
    Node *root;
    template<typename T>
    class Node{
        T val;
        char c;
        Node<T> *left,*mid,*right;
    };
    Node<Value> *get(Node<Value> *x, string key,int d)
    Node<Value> *root=new Node();
    Node<Value> *put(Node<Value> *x,string key,Value val,int d)

    public:
    void put(string key,Value val)
    bool contains(string key)
    Value get(string key)


};

void TST::put(string key,Value val)
    {
        root=put(root,key,val,0);
    }
Node<Value> *TST:: put(Node<Value> *x, string key,int d){
    char c=key[d];
    if(x==NULL)
    {
        x=new Node();
    }
    if(c<x->c)   x->left=put(x->left,key,val,d);
    else if(c>x->c)  x->right=put(x->right,key,val,d);
    else if(d<key.length()-1)   x->mid=put(x->mid,key,val,d+1);
    else    x->val=val;
    return x;
}

Node<Value> *TST::get(Node<Value> *x, string key,int d)
    {
        if(x==NULL)
            return NULL;
        if(d==key.length())
            return x;
        char c=key[d];
        if(c<x->c)
            return get(x->left,key,d);
        else if(c>x->c)
            return get(x->right,key,d);
        else if(d<key.length()-1)
            return get(x->mid, key,d+1);
        else    return x;
    }
void TST::get(string key,Value val){
    Node *x=get(root,key,0);
    if(x==NULL)
        return NULL;
    return x->val;
}

