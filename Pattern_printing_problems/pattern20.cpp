

/*pattern19
   A1   
  AB12
 ABC123
ABCD1234
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
        letter = 65;
        num = 1;
        for (int j = 1; j <= 8; j++)
        {
            
            if (j >= 4-k && j <= 5 + k)
            {
                if(j<=4)
                {
                    cout << (char)letter;
                    letter++;
                }
                else
                {
                    cout<<num;
                    num++;
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



