// using for_each as well as non-member begin and end 
// http://www.cplusplus.com/reference/algorithm/for_each/?kw=for_each
#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector>       // std::vector

void myfunction (int i) {  // function:
  std::cout << ' ' << i;
}

struct myclass {           // function object type:
  void operator() (int i) {std::cout << ' ' << i;}
} myobject;

int main () {
  std::vector<int> myvector;
  myvector.push_back(10);
  myvector.push_back(20);
  myvector.push_back(30);

  std::cout << "myvector contains:";
  for_each (myvector.begin(), myvector.end(), myfunction);
  std::cout << '\n';

  // or:
  std::cout << "myvector contains:";
  for_each (myvector.begin(), myvector.end(), myobject);
  std::cout << '\n';

    int arr[] = {1,2,3,4,5};
    std::cout << "array contains:";
    std::for_each (std::begin(arr), std::end(arr), myfunction);
    std::cout << '\n';

  return 0;
}

