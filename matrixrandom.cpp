#include <iostream>
#include <cstdlib> //for random value;
#include<ctime>// for changing value in time
using namespace std;
int main()
{
    int row, col;

    cout << "How many row you need?" << endl;
    cin >> row;

    cout << "How many cols you need?" << endl;
    cin >> col;
    cout << endl;

    int array[row][col];

    srand(time(0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 25;
           
            cout << array[i][j] << "   ";
        }

        cout << "   " << endl;
    }

    return 0;
 }

         
         
