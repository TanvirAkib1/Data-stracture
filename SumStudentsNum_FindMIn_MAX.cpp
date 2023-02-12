#include <iostream>
#include <cstdlib> //for random value
#include<ctime>// srand
using namespace std;
int main()
{
    int row, col;

    cout << "How many students attend  all the exam?" << endl;
    cin >> row;

    cout << "How many  subject in exam ?" << endl;
    cin >> col;
    cout << endl;

    int array[row][col];
    srand(time(0));

    for (int i = 0; i < row; i++)
    {

        cout << "Students " << i + 1 << " : " ;
    
        

            for (int j = 0; j < col; j++)
            {
                array[i][j] = 30+rand() % 70;// RANDOM MARKING AND NO ONE GOT LESS THAN 30 MARKS
               cout << array[i][j] << "   " ;
            }

        cout << "   " << endl;
            
        }
        cout << "  " << endl;
        int b[row];
        for (int i = 0; i < row;i++){
        int sum = 0;
        for (int j = 0; j < col;j++){
               sum = sum + array[i][j];
        }
        b[i] = sum;



        }

int max,min;

    max = b[0];
    min = b[0];

    for (int i=0; i<row; i++)
    {
        if(b[i]>=max)
        {
            max = b[i];
        }
    }

   
 for (int i=0; i<row; i++)
    {
        if (b[i]<= min)
        {
            min = b[i];
        }
    }


   for(int i=0; i<row; i++)
    {
        cout << "Student " << i + 1 << " total number "
             << " : ";
        for (int j = 0; j < 1; j++)
        {
            if(b[i] == max)
            {
                cout<< b[i] << " = Largest ";
            }

            else if (b[i] == min)
            {
                cout<< b[i] << " = Smallest";
            }

            else
            {
                cout<< b[i] ;
            }
        }
        cout<< "  " << endl;

    }

    

        return 0;
}
         