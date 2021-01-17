/*Properties
    1)container adapter
    2)constant time lookup of largest or smallest
    3)By default std::vector is the container used inside
    4)cost of insertion/deletion is logarithmic
    5)std::priority_queue is implemented using std::make_heap,std::push_heap,std::pop_heap
    6)MAX heap, parents always greater than chilren
 */

template <class T, class Container = vector<T>/*vector is by default*/,class Compare = less<typename Container::value_type>> //less is by default;less is same as less than, usually returns less than comparison of the value type stored in the container;compare needs a boolean value whether 'a' needs to come before 'b' or not during comparison
class priority_queue{
    private:
    value_type	//The first template parameter (T)	Type of the elements
    container_type	//The second template parameter (Container)	Type of the underlying container
    reference	//container_type::reference	usually, value_type&
    const_reference	//container_type::const_reference	usually, const value_type&
    size_type	//an unsigned integral type	usually, the same as size_t
    public:
    //member fucntions
    bool empty();
    int size();
    T top();
    T emplace(); //construct and insert element
    void push(T item);
    void pop();

};