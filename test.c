#include<stdio.h>
#include<string.h>
char* remove extra spaces(char *s)
{
  char *p;
  int i=0,j=0;
  p=malloc(strlen(s)+1);
  while(*(s+i))
  {
    while(*(s+i)==" ")
    i++;
    while(*(s#inc#include<stdio.h>
#include<string.h>
char* remove extra spaces(char *s)
{
  char *p;
  int i=0,j=0;
  p=malloc(strlen(s)+1);
  while(*(s+i))
  {
    while(*(s+i)==" ")
    i++;
    while(*(s+i)!=" " && (s+i)!=NULL)
    *(p+j)=*(s+i);
    i++;
    j++;

  }
  if(*(s+i)=NULL && *(p+j-1)=" ")
  j--;
   *(p+j)=*(s+j);
   j++;
   return p;
}
int main()
{ int i=0;
    char str[100];
    printf("ENTER A STRING");
    fgets(str,100,stdin);
    printf("string length : %d",strlen(str));
    strcpy(str,remove  spaces(str));
    return 0;
}
lude<stdio.h>
#include<string.h>
char* remove extra spaces(char *s)
{
  char *p;
  int i=0,j=0;
  p=malloc(strlen(s)+1);
  while(*(s+i))
  {
    while(*(s+i)==" ")
    i++;
    while(*(s+i)!=" " && (s+i)!=NULL)
    *(p+j)=*(s+i);
    i++;
    j++;

  }
  if(*(s+i)=NULL && *(p+j-1)=" ")
  j--;
   *(p+j)=*(s+j);
   j++;
   return p;
}
int main()
{ int i=0;
    char str[100];
    printf("ENTER A STRING");
    fgets(str,100,stdin);
    printf("string length : %d",strlen(str));
    strcpy(str,remove  spaces(str));
    return 0;
}
+i)!=" " && (s+i)!=NULL)
    *(p+j)=*(s+i);
    i++;
    j++;

  }
  if(*(s+i)=NULL && *(p+j-1)=" ")
  j--;
   *(p+j)=*(s+j);
   j++;
   return p;
}
int main()
{ int i=0;
    char str[100];
    printf("ENTER A STRING");
    fgets(str,100,stdin);
    printf("string length : %d",strlen(str));
    strcpy(str,remove  spaces(str));
    return 0;
}
