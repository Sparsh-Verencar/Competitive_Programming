

// pattern16:
// \*****/
// *\***/*
// **\*/**
// ***\***
// **/*\**
// */***\*
// /*****\




 
 /*
  #include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if(i == j)
                cout<<"\\";
            else if(j == 8-i)
                cout<<"/";
            else
                cout<<"*";
        }
        cout << endl;
    }
    return 0;
}  
  */
