#include <stdio.h>
int main()
{
    int T;
    FILE * fin = fopen("input.txt","r");
    fscanf(fin,"%d",&T); ///Ū��
    printf("�AŪ��FT: %d\n", T);
}
