#include<iostream>
namespace A{
    int x = 2;
}
namespace B{
    int x = 1;
}
namespace C{
    int x = 0;
}

int main(){
    std::cout<<C::x<<" "<<A::x<<" "<<B::x<<std::endl;
}