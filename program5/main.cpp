#include<stdio.h>
#include<ctype.h>

int getchar(void);
int toupper(int c);
int main(){
   int V=0, C=0, O=0;
   char ch;
   printf("INPUT TEXT:");
  do{
    ch=getchar();
    ch=toupper(ch);
    if(ch>='A'&& ch<='Z'){
    switch(ch){
      case'A':
      case'E':
      case'I':
      case'0':
      case'U':
        V++;
        break;
      default:C++;
            }
        }else O++;
   }while(ch!='\n');
   printf("Vowles:%d\n",V);
   printf("Consonants:%d\n",C);
   printf("Others:%d\n",O);
   return 1;
   };

