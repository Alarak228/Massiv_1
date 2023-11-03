#include <iostream>
#include <cstdlib>
using namespace std;
const int SizeMassiv1 = 20;
const int SizeMassiv2 = 10;
int num1[SizeMassiv1];
int num2[SizeMassiv2];
void random();

int main()
{
    setlocale(0, "");
    srand(time(0));
    random();
    return 0;
}
void random() 
{
    for (int i = 0; i < SizeMassiv1; i++) {
        num1[i] = 1 + rand() % 20;
        cout << num1[i] << "";

    }
    cout << endl;
    for (int j = 0; j < SizeMassiv2; j++) {
        num2[j] = 1 + rand() % 20;
        cout << num2[j] << "";
    }
}