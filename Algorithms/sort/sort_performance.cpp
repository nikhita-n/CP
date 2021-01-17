"ALGORITHM           |   Guarantee   |  RANDOM           | EXTRA SPACE     |   STABLE?     |   Operations on keys"
                     |               |                   |                 |               |           
Insertion sort       |  N*N/2        |  N*N/4            |   1             |  yes          |  compareTo()
mergesort            |  NlgN         |  NlgN             |   N             |  yes          |  compareTo()
quicksort            |  1.39NlgN     |  1.39NlgN         |   clgN          |  no           |  compareTo()
heapsort             |  2NlgN        |  2NlogN           |    1            |  no           |  compareTo()
LSD(fixedlengthWkeys)|  2WN          |  2NW              |   N+R           |  yes          |  charAt()
MSD(avglengthWkeys)  |  2NW          |  Nlog[R]N         |   N+DR          |  yes          |  charAt()
                     |               |                   |//D-depth of call stack    */    |  
3-waystring quicksort|  1.39WNlgN    |  1.39NlgN         |  logN+W         |   no          |  charAt()                         