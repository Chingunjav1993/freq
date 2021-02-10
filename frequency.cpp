#include <iostream>
using namespace std;
int main()
{
    int num, i, nev, result, left;
    
    cout << " Input any number : ";
    
	cin >> num;
    
	for (i = 0; i < 10; i++) 
    {
        result = 0;
        for (nev = num; nev > 0; nev = nev / 10) 
        {
            left = nev % 10;
            if (left == i) 
            {
                result++;
            }
        }
        cout << "The frequency of " << i << " = "<< result << endl;
    }
    
    
    return 0;
}
