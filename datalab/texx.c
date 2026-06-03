#include<stdio.h>

int isAsciiDigit(int x) {
  int size = x>>8;
  int fst = !((x & 0xf0) ^ 0x30);
  int scd = (!(x&0x08) | !((x&0x07)&0x06));
  printf("%d %d %d", size, fst, scd);
  return fst & scd & !size;
}
int logicalNeg(int x) {
  //0 and not 0
  //how to identify 0
  int idz = (~x + 1) ^ x;
  printf("%d ",idz);
  idz = (idz>>31) | (x>>31);//idz == 0 if and only if x==0
   printf("%d ",idz);
  return (~idz + 1) + 1;
}
int main(){
    logicalNeg(0x70000000);
}
//-2147483648