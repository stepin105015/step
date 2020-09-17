#include<iostream.h>
using namespace std;
class account{
private:
    int m_accNumber;
    int m_accName;
    double m_balance;
public:
    account():
        m_accNumber(0),m_accName(0),m_balance(0){}
     account(int a,int b,double c):
         m_accNumber(a),m_accName(b),m_balance(c){}
     account(const account &c)
         m_accNumber(c.m_accNumber),m_accName(c.m_accName),m_balance(c.m_balance){}

     void debit(double w)
     {

         m_balance-=w;
         cout<<m_balance<<endl;
     }
     double credit(double c)
     {
         m_balance+=c;
         cout<<m_balance<<endl;
         return m_balance;
     }
     double getbalance()
     {

         cout<<m_balance<<endl;
         return m_balance;
     }
     void display()
     {
         cout<<m_accnNumber<<endl;
          cout<<m_accnName<<endl;
           cout<<m_balance<<endl;

     }

};
