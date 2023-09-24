

/*pattern19
   A   
  ABA
 ABCBA
ABCDCBA
*/



/* 
#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    int letter;
    for (int i = 1; i <= 4; i++)
    {
        letter = 65;
        for (int j = 1; j <= 7; j++)
        {
            
            if (j >= 4-k && j <= 4 + k)
            {
                cout << (char)letter;
                j<4?letter++:letter--;
            }
            else
                cout << " ";
        }
        cout << endl;
        k++;
    }
    return 0;
}  
*/


