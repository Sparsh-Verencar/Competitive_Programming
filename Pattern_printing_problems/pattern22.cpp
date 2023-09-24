

/*pattern22
   1   
  12A
 123AB
1234ABC
*/



 

 
/* 
#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    int num;
    int letter;
    for (int i = 1; i <= 4; i++)
    {
        num = 1;
        letter = 65;
        for (int j = 1; j <= 7; j++)
        {
            
            if (j >= 4-k && j <= 4 + k)
            {
                if(j<=4)
                {
                    cout<<num;
                    num++;
                }
                else
                {
                    cout << (char)letter;
                    letter++;
                }
                
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




