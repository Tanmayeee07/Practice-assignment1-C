#include <stdio.h>
void main(){
  int x = 19;
  int ans1 = 0;
  int ans2 =0;
  ans1 = x++ + --x - x++;
  ans2 = --x + x-- - x++ + ++x;
  printf("%d\n",ans1);
  printf("%d\n",ans2);
}
