#include <stdio.h>
char mirror(char c)
{
    if(c == 'A') return 'A';  if(c == 'N') return ' ';  if(c == '0') return '0';
    if(c == 'B') return ' ';  if(c == 'O') return 'O';  if(c == '1') return '1';
    if(c == 'C') return ' ';  if(c == 'P') return ' ';  if(c == '2') return 'S';
    if(c == 'D') return ' ';  if(c == 'Q') return ' ';  if(c == '3') return 'E';
    if(c == 'E') return '3';  if(c == 'R') return ' ';  if(c == '4') return ' ';
    if(c == 'F') return ' ';  if(c == 'S') return '2';  if(c == '5') return 'Z';
    if(c == 'G') return ' ';  if(c == 'T') return 'T';  if(c == '6') return ' ';
    if(c == 'H') return 'H';  if(c == 'U') return 'U';  if(c == '7') return ' ';
    if(c == 'I') return 'I';  if(c == 'V') return 'V';  if(c == '8') return '8';
    if(c == 'J') return 'L';  if(c == 'W') return 'W';  if(c == '9') return ' ';
    if(c == 'K') return ' ';  if(c == 'X') return 'X';
    if(c == 'L') return 'J';  if(c == 'Y') return 'Y';
    if(c == 'M') return 'M';  if(c == 'Z') return '5';
    return ' ';
}
int main()
{
    char c;
    scanf("%c",&c);

    char ans = mirror(c);
    printf("它的鏡像字是--%c--\n",ans);
    return 0;
}
