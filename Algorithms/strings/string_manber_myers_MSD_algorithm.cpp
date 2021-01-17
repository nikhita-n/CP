//suffix sorting in linearithmic time

//overview
    -sort on first character using key-indexed counting
    -given array of suffixes sorted on first 2^(i-1) characters,
     create array of suffixes sorted on first 2^i characters //u can use key-indexed sorting again

"basically, u are doubling the characters u r looking at in lgN time"

    -Worst case running time: NlgN //since doubling , N-size of string/suffix array
        -finsishes after lgN phases
        -can perform a phase in linear time

//index sort, learn