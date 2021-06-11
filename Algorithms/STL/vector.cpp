   //nested vector - correct way
    vector<int> *a;
    a=new vector<int>[10];
    //to insert elements - i is the list index
    (*(a+i)).push_back(j);

    //wrong way:
    vector<int>[] a; //the square braces are available for std gnu++ types only. NOT STL
    
    "initialising a vector"
   vector<int> a(size,value); //size is the number of elements and value is the value u wnat all of the elements to take
   vector<int> a(size); //only  size is given

   "initialising 2D vector"
   vector<vector<int>> a(r,vector<int>(c,value)); // r is the num of rows, c is the num of columns and value is the value u wnat them to take
   vector<vector<int>> a(r,vector<int>c; //value not given
                         
   "assigning values to an already declared vector"
    vector<int> a;
    a.assign(size,value) //size is the number of elements you want with the value

   "METHODS"
      -push_back() -pushes from the push_back
      -pop_back() -pops from the back
      -insert() -inserts at the front
      -size()


          
