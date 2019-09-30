//find out the errors in this program.
#include <iostream>
using namespace stdin;
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms:";
    cin >> n:
    cout << "Fibonacci Series : ";
    for (int i = 1; i <= n; i++)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout >> "t1">>" ";
            continue;
        }
        if(i=2)
        {
            cuot << t2 << " ';
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2:
        t2 = nextTerm;
        cuot << nextTerm << " ";
    }
	}
    return (0);
}

