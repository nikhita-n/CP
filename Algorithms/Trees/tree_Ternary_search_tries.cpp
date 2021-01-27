//solves too much memory space occupied by tries
    -each node has 3 children, instead of R children like in trees
        -smaller(left), equal(middle), larger(right)
    -key is sequence of characters frm root down the middle
    -3 null links in each leaf

    #search
     -follow links corresponding to each character in the key.
        -if less, take left link; if greater, take right link
        -if equal, take middle link and move to the next key character
    
    "search hit" - node where search ends has a non-null value
    "search miss" - reach a null link or node where search ends has a null value

    #put
    follow characters, if match not found, insert to the right or left of the node and follow down below.
