#include <stdio.h>
//Temperature Conversion execise
main(){
    int f, c;
    int start, limit, incr;
    start=0;
    limit=300;
    incr=20;
    
    while(f<=limit){
        c = 5*(f-32)/9;
        printf("%d\t %d\n", c, f);
        f=f+20;
    }
}
// This changing int to float did not work, so two ways to fix this, line 27 for info
/*
#include <stdio.h>
main(){
    float f, c;
    int start, limit, incr;
    start=0;
    limit=300;
    incr=20;
    
    while(f<=limit){
        c = (5/9)*f;
//above you can do 5.0/9 or ((float)5/9) but I still don't get my -17 so will go with original       
        printf("%f\t %f\n", c, f);
        f=f+incr;
    }
}
 */
//exercise 1.5 I DID IT! changed three things, f's initial value, less than to greater than with start
//then minus 20 instead of plus
/*
#include <stdio.h>
main(){
    int f, c;
    f=300;
    int start, limit, incr;
    start=0;
    limit=300;
    incr=20;
    
    while(f>=start){
        c = 5*(f-32)/9;
        printf("%d\t %d\n", c, f);
        f=f-20;
    }
}

 */


main(){
int c;
c=getchar();
while (c!=EOF){
    putchar(c);
    c = getchar();
}
}























