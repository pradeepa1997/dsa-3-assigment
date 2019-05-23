#include<stdio.h>
#include<string.h>

int main(){
   char pattern[20]={NULL};
   char text[100]={NULL};
   int i=1,wilcardcount=0;
   printf("Text:");
   scanf("%s",text);
   printf("Pattern:");
   scanf("%s",pattern);
   while(pattern[i]=='_'){
       wilcardcount++;
       //printf("%c",pattern[i]);
       i++;
   }
   i=0;
   int answercount=0,startindex[10];
   while(text[i]!='\0'){
       //printf("%c",text[i]);
       if(text[i]==pattern[0]){
           if(text[i+wilcardcount+1]==pattern[wilcardcount+1]){
               startindex[answercount]=i;
               answercount++;

           }
       }
       i++;
   }
   printf("Count of answer:%d\n",answercount);
   int len=strlen(pattern);
   for(i=0;i<answercount;i++){
       int j;
       printf("%d answer:",i+1);
       for(j=startindex[i];j<len+startindex[i];j++){
           printf("%c",text[j]);
       }
       printf("\n");
   }
}