#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace Class
{
    template <typename T>
    class Watch
    {
    private:
        string name;
        T price;
    public:
        string get_name() { return name; };
        T get_price() { return price; };

        void set_name(string a) { name = a; }
        void set_price(T b) { price = b; }

        Watch() {};
        Watch(string v, T c) { name = v; price = c; }
    };
};