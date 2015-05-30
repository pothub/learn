#include <stdio.h>
char a[256];
int main(){
 printf("数字だけ抽出\n");
 fflush(stdout);
 scanf("%s",a);
 int i = 0;
 while(a[i]!='\0'){
  if(a[i]>='0' && a[i]<='9'){
   printf("%c",a[i]);
  }
  i++;
 }
 return 0;
}
