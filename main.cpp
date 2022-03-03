#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

int f1(int x)
{
x++;
return x;
}

int f2(int x)
{
x--;
return f1(x);
x++;
}

int f3(int x, int y)
{
x = f1(x);
y = f2(y);
return x + y;
}

main()
{
int x = 4, y = 7;
printf("%d , %d , %d", x, y, f3(x, y));
}

}






#include <stdio.h>






















