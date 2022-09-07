#include <iostream>
using namespace std;
void pypart(int n)
{
    int i = 0, j = 0;
    while (i < n) 
	{
         while (j <= i) 
		 {    
            cout << "* ";
            j++;
        }
        j = 0; 
        i++;
        cout << endl;
    }
}
 int main()
{
    int n = 5;
    pypart(n);
    return 0;
}