#include <stdio.h>
/* function to show bytes in memory, from location start to start+n*/
void show_mem_rep(char *start, int n)
{
    int i;
    for (i = 0; i < n; i++)
         printf(" %.2x", start[i]);
    printf("\n");
}
 #define Swap4Bytes(val) \
 ( (((val) >> 24) & 0x000000FF) | (((val) >>  8) & 0x0000FF00) | \
   (((val) <<  8) & 0x00FF0000) | (((val) << 24) & 0xFF000000) )
int main()
{
   unsigned int i = 1025;
   char *c = (char*)&i;
   if (*c)
       printf("Little endian\n");
   else
       printf("Big endian\n");
    show_mem_rep((char *)&i, sizeof(i));

    int p = 256;
    printf("p=%d\n", p);
    Swap4Bytes(p);
    printf("p=%d\n", p);
    return 0;
}
