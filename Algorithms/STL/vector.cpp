   //nested vector - correct way
    vector<int> *a;
    a=new vector<int>[10];
    //to insert elements - i is the list index
    (*(a+i)).push_back(j);

    //wrong way:
    vector<int>[] a; //the square braces are available for std gnu++ types only. NOT STL
    
          