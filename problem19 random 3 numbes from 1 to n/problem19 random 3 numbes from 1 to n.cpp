#include <iostream>
#include <string>
using namespace std;



short getRandomNumber(short From, short To)
{
    return rand() % (To - From + 1) + From;
}

void print3RandomNumbers(short From, short To)
{
    for(short i=1; i<=3; i++)
    cout<<getRandomNumber(From, To)<<endl;
}


int main()
{
    srand((unsigned)time(NULL));

    print3RandomNumbers(1, 100);

    


    system("pause>0");
    return 0();

}