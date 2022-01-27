#include<stdio.h>
main()
{
int y,o,n;

char *yon="YOUNES IS JUST REALLY GREAT!!r/g.g#i.g/g!j/g.g#i.g/g+g!q0g!mag\
/h(g!m]g+g!p<g!h`i!l`g!k`g!h<g+g!p}g!i}g!i}g!h0g!g]g}g!g}h`g!h}g+g!p<g!h`g\
}g`g!h}g`h]g`g0g}g0g!g}g`g!h<g+g!q]g!n`g!o0g+g!r]g`h!g]g`g0h!g]g}g!g}g!j0g+\
g!n`g!i0g!h}g!g}g!g]g`g0g]g`g0g!h0g(g+g!m}g!g]g!h]g0g`g0g]g!n0g(g+g!m]g`g]g}\
g!g0g!g`h!gag]g!j0g(g+g!p]g0g`g0g`h]g!hag]g0g(g!k/g.h>g(g0gg]g+g!i`j-g`h0g`h-\
g`k-g`l*g0g!i0g|gg~i+g!i.g-g.k-g.h]g.h-g.k-g.i-g]g(g.g(g!g|hg~h+g!q`h0g]g`g!r(\
g.h>g/g]g~g0g+g!p0g`g0g!g}g]h+g!u]g0g";

    for(y=28;o=yon[y++];)
        for( n = ( *(yon+++y) - ( (1<<6) + ( 1<<5) + (1<<2) + (1<<1)) );n--;)
            putchar(!((o-11)^(1<<5))?o-1-(1<<5):o-1);
}
/*
    After seeing the output, she said:
        I don't like to .C, now I will be your .EXE !
*/
