

/*pattern17
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*/

/* 
#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    for (int i = 1; i <= 9; i++)
    {

        for (int j = 1; j <= 9; j++)
        {
            if (j <= 5 - k || j >= 5 + k)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        i < 5 ? k++ : k--;
        cout << endl;
    }
    return 0;
}
*/
