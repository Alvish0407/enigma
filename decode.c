#include<stdio.h>
#include<string.h>

int main()
{
  char cipher[100],key[20],s2[100];
  int j=0,i;
  
  printf("Enter the Cipher Text: ");
  gets(cipher);
  
  printf("Enter the Key: ");
  scanf("%s",key);
  
  int l1=strlen(cipher);
  
  for(i=0;i<l1;i++)
  {
    if(cipher[i]==' ')
    {
      s2[i]=' ';
    }
    else
    {
      s2[i]=key[j];
      j++;
    }
    if(key[j]=='\0')
    {
      j=0;
    }
  }
  
 s2[i]='\0';
// printf("\n%s",s2);
 
 char s3[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  
 char s4[26][26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
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
                  
/*  int k,z=0;
  char simple[100];
                 
  for(i=0;cipher[i]!='\0';i++)
  {
    if(cipher[i]!=' ')
    {
      j=0;
      while(s3[j]!=cipher[i])
      {
        j++;
      }
      
      k=0;
      while(s3[k]!=s2[i])
      {
        k++;
      }
      
      simple[z]=s4[j][k];
      z++;
      
    }
    else
    {
      simple[z]=' ';
      z++;
      continue;
    }
  }
  
  simple[z]='\0';
  printf("\nSimple Text: %s",simple);
*/
  int z=0,k=0,l;
  char simple[100];
  
  for(i=0;s2[i]!='\0';i++)
  {
    if(s2[i]!=' ')
    {
      k=0;
      while(s2[i]!=s3[k])
      {
        k++;
      }
      
      j=0;
      l=0;
      while(cipher[i]!=s3[l])
      {
        l++;
      }
      
      while(s3[l]!=s4[k][j])
      {
        j++;
      }
    
      simple[z]=s3[j];
         z++;
         
    }
    else
    {
      simple[z]=' ';
        z++;
        continue;
    }
  }
  
    
    simple[z]='\0';
    printf("\nSimple Text: %s",simple);
    
return 0;
}

//SEND SHIP SAND ARMS PLEASE
//FIKW FLFI FEKW NVJL CPBTFI

//MY NAME IS ALVISH
//ZC KTZI FL NPSBFL