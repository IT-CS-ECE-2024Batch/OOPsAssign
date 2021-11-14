#include <iostream>

using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

class CSE
{
  public:
    int numStudent;
    CSE(int num)
    {
      this->numStudent = num;
    }

    int show()
    {
      return numStudent;
    }
};

class CSE1 : public CSE
{
  using CSE::CSE;
};

class CSE2 : public CSE
{
  using CSE::CSE;
};

int32_t main()
{
  int stuCSE1, stuCSE2;
  cout<<"Number of students in CSE1 : ";
  cin>>stuCSE1;
  cout<<"Number of students in CSE2 : ";
  cin>>stuCSE2;
  CSE1 myClass1 = CSE1(stuCSE1);
  CSE2 myClass2 = CSE2(stuCSE2);
  cout<<"Number of Students in CSE1 are : "<<myClass1.show()<<endl;
  cout<<"Number of Students in CSE2 are : "<<myClass2.show()<<endl;
  cout<<"Number of Students in CSE are : "<<myClass1.show()+myClass2.show()<<endl;
  return 0;
}
