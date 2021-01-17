//given a string of N characters, find the longest repeated substring

//BRUTE FORCE - O(D*n*n): //D is the length of the longest common prefix
    -try all indices i and j for start of possible match
    -compute longest common prefix(LCP) for each pair

//optimized - O(LRS*n) - not suitable if LRS is only long and big LRS keeps repeating
    -suffix sort - linear time
    -compute LCP between adjacent suffixes in sorted order

for(int i=0;i<N-1;i++)
{
    int len=LCP(suffixes[i],suffixes[i+1])
    if(len>lrs.length())
        lrs=suffixes[i].substring(0,len);
}

//improvmenets:
    Linearithmic algorithm - Manber-Myers Algorithm
    Linear algorithm - suffix trees