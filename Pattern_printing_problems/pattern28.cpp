

/*pattern28
1        
3*3
4*4*4
8*8*8*8
9*9*9*9*9

*/








 #include <iostream>
using namespace std;

int main()
{
    int k = 0;
    int num =0;
   for (int i = 1; i <= 5; i++)
    {
        if(i%2==1)
        {
            num = num+1;
        }
        else
        {
            num = num+i;
        }
        for (int j = 1; j <= 9; j++)
        {
            
            if (j<=i+k)
             {
                if(j%2==0)
                    cout << "*";
                else
                    {
                        
                    cout << num;
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
 


 





