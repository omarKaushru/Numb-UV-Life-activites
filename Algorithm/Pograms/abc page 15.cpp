#include<iostream>

float abc(float a, float b, float c);
int main()
{
    float x,y,z,r;
    std::cin>>x>>y>>z;
    r=abc(x,y,z);
    std::cout<<r;
    return 0;
}
float abc(float a, float b, float c)
{
    return a+b+b*c+(a+b-c)/(a+b)+4.0;
}
