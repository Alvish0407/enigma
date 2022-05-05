#include<stdio.h>
#include<string.h>

int main()
{
  char s1[100],s2[20],s3[100];
  int l1,l2,i,j=0;
  
  /*
    s1=Text Text
    s2=Key
    s4=String A to Z
    s6=Cipher Text
  */
    
  printf("Enter the Simple Text: "); 
  gets(s1);
  
  printf("Enter the Key: ");
  gets(s2);
  
  l1=strlen(s1);
  l2=strlen(s2);
  
  for(i=0;i<l1;i++)
  {
    if(s1[i]==' ')
    {
      s3[i]=' ';
    }
    else
    {
      s3[i]=s2[j];
      j++;
    }
    if(s2[j]=='\0')
    {
      j=0;
    }
  }
  
 s3[i]='\0';
 // printf("%s",s3);
  
 char s4[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  
 char s5[26][26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
                  "BCDEFGHIJKLMNOPQRSTUVWXYZA",
                  "CDEFGHIJKLMNOPQRSTUVWXYZAB",
                  "DEFGHIJKLMNOPQRSTUVWXYZABC",
                  "EFGHIJKLMNOPQRSTUVWXYZABCD",
                  "FGHIJKLMNOPQRSTUVWXYZABCDE",
                  "GHIJKLMNOPQRSTUVWXYZABCDEF",
                  "HIJKLMNOPQRSTUVWXYZABCDEFG",
                  "IJKLMNOPQRSTUVWXYZABCDEFGH",
                  "JKLMNOPQRSTUVWXYZABCDEFGHI",
                  "KLMNOPQRSTUVWXYZABCDEFGHIJ",
                  "LMNOPQRSTUVWXYZABCDEFGHIJK",
                  "MNOPQRSTUVWXYZABCDEFGHIJKL",
                  "NOPQRSTUVWXYZABCDEFGHIJKLM",
                  "OPQRSTUVWXYZABCDEFGHIJKLMN",
                  "PQRSTUVWXYZABCDEFGHIJKLMNO",
                  "QRSTUVWXYZABCDEFGHIJKLMNOP",
                  "RSTUVWXYZABCDEFGHIJKLMNOPQ",
                  "STUVWXYZABCDEFGHIJKLMNOPQR",
                  "TUVWXYZABCDEFGHIJKLMNOPQRS",
                  "UVWXYZABCDEFGHIJKLMNOPQRST",
                  "VWXYZABCDEFGHIJKLMNOPQRSTU",
                  "WXYZABCDEFGHIJKLMNOPQRSTUV",
                  "XYZABCDEFGHIJKLMNOPQRSTUVW",
                  "YZABCDEFGHIJKLMNOPQRSTUVWX",
                  "ZABCDEFGHIJKLMNOPQRSTUVWXY"};
  int k,z=0;
  char s6[100];
                 
  for(i=0;s1[i]!='\0';i++)
  {
    if(s1[i]!=' ')
    {
      j=0;
      while(s4[j]!=s1[i])
      {
        j++;
      }
      
      k=0;
      while(s4[k]!=s3[i])
      {
        k++;
      }
      
      s6[z]=s5[j][k];
      z++;
      
    }
    else
    {
      s6[z]=' ';
      z++;
      continue;
    }
  }
  
  s6[z]='\0';
  printf("\nCipher Text: %s",s6);
  
return 0;
}