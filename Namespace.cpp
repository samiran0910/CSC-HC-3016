#include <iostream>
using  std::cout;
using  std::endl;
namespace first
{
    int x = 1;
} // namespace first
namespace second
{
    int x = 2;
} // namespace second

int main()
{
    int x = 0;
    cout<<"without namespace x: "<<x<<endl;
    cout<<"with namespace first x: "<<first::x<<endl;
    cout<<"with namespace second x: "<<second::x<<endl;
    return 0;
}