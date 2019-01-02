/*
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
*/

/*
#include <iostream>

using namespace std;

int main()
{
    auto func = [] () { cout << "Hello world"; };
    func(); // now call the function
}
*/

#include <iostream>
using namespace std; 
int main()
{
    int from=0, to=7; 
    int count = to - from + 1; 
    int n = (count + 7) / 8;
    cout<<"-- count: "<<count<<", n: "<<n<<", remainder: "<<count%8<<" --\n";

    switch (count % 8) 
    {
        case 0: do { to = from++; cout<<"\tcase 0\n"; 
        case 7:      to = from++; cout<<"\tcase 7\n";
        case 6:      to = from++; cout<<"\tcase 6\n";
        case 5:      to = from++; cout<<"\tcase 5\n";
        case 4:      to = from++; cout<<"\tcase 4\n";
        case 3:      to = from++; cout<<"\tcase 3\n";
        case 2:      to = from++; cout<<"\tcase 2\n";
        case 1:      to = from++; cout<<"\tcase 1\n";
                    cout<<"-- end of loop, n: "<<n<<" --\n";
                } while (--n > 0);
    }

    return 0;
}
