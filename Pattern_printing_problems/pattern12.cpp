/*

pattern12:
 *******
  ***** 
   ***  
    *   
*/


#include <iostream>
using namespace std;

int main()
{
    int k = 3;
    int rows = 8;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j >= (rows/2)-k && j <= (rows/2)+k)
                cout << "*";
            else
                cout << " ";
        }
        k--;
        cout << endl;
    }

    return 0;
} 

