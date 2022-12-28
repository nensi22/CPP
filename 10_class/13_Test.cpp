#include<iostream>
#include<string>
using namespace std;
class Test 
{
   private:
   int testcode;
   string discription;
   int  nocandidate;
   int CenterReqd;
   int calctr()
   {
      CenterReqd=nocandidate/100+1;
      return CenterReqd;
   }
   public:
   void Schedule();
   void disptest();
};
void Test::Schedule()
   {
      cout<<"enter testcode=";
      cin>>testcode;
      cout<<"enter discription=";
      fflush(stdin);
      getline(cin,discription);
      // cin>>discription;
      cout<<"enter candidate no=";
      cin>>nocandidate;
      calctr();
   }
void Test::disptest()
{
   cout<<"\n test code="<<testcode;
   cout<<"\n discription="<<discription;
   cout<<"\n candidata no="<<nocandidate;
   cout<<"\n center reqd="<<CenterReqd;
}
int main()
{
   Test tst;
   tst.Schedule();
   tst.disptest();
}
