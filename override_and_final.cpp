#include <iostream>

class B
{
    public:
    virtual void f(int) {std::cout << "B::f" << std::endl;}
};

class D : public B
{
    public:
    virtual void f(int) override final {std::cout << "D::f" << std::endl;}
    //virtual void f(int) override {std::cout << "D::f" << std::endl;}
    //virtual void f(int) {std::cout << "D::f" << std::endl;}
};

class F : public D
{
    public:
    //virtual void f(int) override {std::cout << "F::f" << std::endl;}
    //virtual void f(short) override {std::cout << "F::f" << std::endl;}
    virtual void f(short) {std::cout << "F::f" << std::endl;}
};

int main()
{
    B b_obj; B* b_ptr = &b_obj;
    D d_obj; D* d_ptr = &d_obj;
    F f_obj; F* f_ptr = &f_obj;
    b_ptr->f(0);
    d_ptr->f(0);
    f_ptr->f(0);

    std::cout<<". . . switching . . ."<< std::endl;
    b_ptr = &d_obj;
    d_ptr = &f_obj;
    b_ptr->f(0);
    d_ptr->f(0);

    std::cout<<". . . switching . . ."<< std::endl;
    b_ptr = &f_obj;
    b_ptr->f(0);

    return 0;
}
