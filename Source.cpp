#include <iostream>
#include "Goods.h"
using namespace std;

Goods makegoods(int x, int y)
{
    Goods t;
    if (!t.init(x, y))
        cout << "wrong argument" << endl;
    return t;
}

int main()
{
    Goods t1, t2, t3; 

    t1.init(0,0);
    t1.read();
    t1.display();
    t1.cost(0);

}