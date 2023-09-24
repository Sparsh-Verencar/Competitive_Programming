

/*pattern24
*******
*     *
* *** *
* * * *
* *** *
*     *
*******
*/





#include <iostream>
using namespace std;

int main()
{
    int num;
    for (int i = 1; i <= 7; i++)
    {
        num = 1;
        for (int j = 1; j <= 7; j++)
        {
            
            if ((i==1||i==7||j==1||j==7)||(i>=3 && i<= 5 && j>=3 && j<= 5) &&(i==3 ||j ==3||i==5||j==5))
                cout<<"*";
           
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}    
 





