***run tests from command line:***

test.c

<br>

Since 'sizeof(ranks)' will show only size of a pointer, there is no way to get
size of this array inside of a function. There are two (in my opinion the best)
solutions:
    1) Cheat a little bit and add value of -1 at the end of 'ranks' array to know
       where valid values end.
    2) Add 'N' parameter that will hold size of the array.
I chose the second option.