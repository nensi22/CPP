#include <iostream>

int main()
{
  int i,n,a,b=0;
  std::cout<<"enter n=";
  std::cin>>n;
  i=n;
  for(i=n;i>0;)
    {
      a=i%10;
      b=(b*10)+a;
      i=i/10;
    }
  if(b==n)
  {
    std::cout<<"number is palindrome";
  }
  else
  {
    std::cout<<"number is not palindrome";
  }

  return 0;
}