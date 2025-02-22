#include<iostream>
using namespace std;

bool soNguyenTo(int soA)
{
    if (soA < 2)
        return false;

    for (int i = 2; i <= sqrt((float)soA); i++)
    {
        if (soA % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool kiem_nam_nhuan(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0) {
            return true;
        }
        else 
        {
            return false;
        }
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

	return 0;
}