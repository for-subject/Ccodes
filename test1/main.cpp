#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <list>
using namespace std;
int main()
{
   /*
   std::string data="30 40.5";
      std::istringstream iss(data);
      int i;
      double d;
      iss>>i>>d;
      std::cout<<i<<" "<<d<<std::endl;
      //想字符流里面写数据
      std::ostringstream oss;
      int i1=100;
      double d2=200.5;
      oss<<i1<<d2;
      std::string str=oss.str();
      std::cout<<str<<std::endl;
   */
   std::list<int> lst1 = {1, 3, 5, 7};
    std::list<int> lst2 = {2, 4, 6, 8};
    lst1.merge(lst2);
    lst1.reverse();
    std::cout << "List elements: ";
    for (const auto& elem : lst1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

   return 0;
}