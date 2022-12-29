#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string str;
	cout<<"Please Enter Value so it will be create Pyramid"<<endl;

	
    getline(cin,str);
    int row = str.size();
    int column = row *2 -1;
    int printer_str = row;
    
    for(int i = 0; i < row; i++)
    {
        for(int k = i; k < column - (row ); k++)
        {
            cout<<" ";
        }
        for(int k = 0; k <= (i*2); k++)
        {
            int check = i;
            if (k == 0 && i == 0)
                cout<<str[0];
            else if((k != (i*2 + 1)) && (k != (i * 2)) && k <= i)
            {
                cout<<str[k];
            }
            if(k == (i*2) && k != 0)
            {
                for(int midd = check - 1; midd >= 0; midd--)
                    cout<<str[midd];
            }
        }
        for(int k = i; k < column - i; k++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
