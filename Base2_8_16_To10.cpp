/* conversie din baza 2/8/16 in baza 10 */

#include <iostream>

using namespace std;

int val(char c);
int toDeci(char *str, int base);


int main()
{
  char str[20];
  int base;
 cout<<"Initial number in base 2/8/16:"<<endl;
 cin>>str;
 cout<<"Enter the base: "<<endl;
 cin>>base;
 cout<<"The number in base 10 :"<<toDeci(str, base)<<endl;
 
    
 return 0;
}

int val(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return (int)c - '0'; 
    else
        return (int)c - 'A' + 10; 
} 


int toDeci(char *str, int base)
{
 int len=strlen(str);
 int power=1;
 int num=0;
 int i;
 for(i=len-1;i>=0;i--)
  {
     if (val(str[i])>=base)
     {
       cout<<"Invalid number";
       return -1;
                           }
       num += val(str[i])*power;
       power = power * base;
       }
       
 return num;
}
