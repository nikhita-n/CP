//fast search hit n miss but wastes space
#TRIE
    -characters stored in nodes
    -each node has R children,one for each possible character (NULL LINKS NOT INCLUDED, here)
    -store values in nodes corresponding to last characters in keys
    "string keys and int values"
    
#OPERATIONS:
    //search
    "search hit"- node where search ends has a non-null value, returns the value associated with the last character of the key
    "search miss" - reach null link or node where search ends has a null value
    //insertion
        -follow links corresponding to each character in the key
            -encounter a null link: create new node.
            -encounter last character of the key, set value in that node
    //deletion:
        -find the node corresponding to key and set value to NULL
        -if node has null value and all null links, remove that node(and recur)
            



