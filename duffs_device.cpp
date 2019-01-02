//https://en.wikipedia.org/wiki/Duff%27s_device
//
#include <iostream>
using namespace std; 
int main()
{
    int from=0, to=8; 
    int count = to - from + 1; 
    int n = (count + 7) / 8;
    cout<<"count: "<<count<<", n: "<<n<<", remainder: "<<count%8<<"\n";

    switch (count % 8) 
    {
        case 0: do { to = from++; cout<<"case 0\n"; 
        case 7:      to = from++; cout<<"case 7\n";
        case 6:      to = from++; cout<<"case 6\n";
        case 5:      to = from++; cout<<"case 5\n";
        case 4:      to = from++; cout<<"case 4\n";
        case 3:      to = from++; cout<<"case 3\n";
        case 2:      to = from++; cout<<"case 2\n";
        case 1:      to = from++; cout<<"case 1\n";
                } while (--n > 0);
    }

    return 0;
}
