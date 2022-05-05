#include <stdio.h>
char line[100];
int main()
{
    int T;
    FILE * fin = fopen("input.txt","r");
    fscanf(fin,"%d",&T);///讀檔
    printf("你讀到了T: %d\n",T);
    /// scanf() vs. gets()
    /// fscanf() vs. fgets()
    /// while( gets(line) ){
    while( fgets(line, 100, fin) )
    {
            printf("讀到了=%s=\n",line);///做處理
    }
}
