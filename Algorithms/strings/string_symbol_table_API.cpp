///goal - faster than hashing and more flexible than BST
template <typename Value> //call this way - ST<int> objects 
class stringST{
    stringST()  //create empty symbol table
    void put(string key,Value val) //put key-value pair into the symbol table
    Value get(string key)   //return value paired with given key
    void delete(string key) //delete key and corresponding value
};