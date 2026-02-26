// MyWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int ConsoleInputSizeArray(const int sizeMax)
{
    int size = 0;
    do {
        cout << " Input size Array ( 0< 1 < " << sizeMax << " ) ";
        cin >> size;
    } while (size <= 0 || size >= sizeMax);
    return size;
}
int RndInputArray(int sizeMax, double A[])
{
    int size = ConsoleInputSizeArray(sizeMax);
    int r1 = 0, r2 = 0;
    srand(size);

    for (int i = 0; i < size; i++) {
        r1 = rand();
        r2 = rand();
        A[i] = 100.0 * r1;
        A[i] = A[i] / (1.0 + r2);
        cout << A[i] << "   ";
    }
    return size;
}
int main()
{
    std::cout << "MyWork sey : Hello World!\n";
    std::vector<double> numbers; // пустий вектор
    int k = 5;
    double tmp = 0;
    cout << " Input 5 number \n";
    for (int i = 0; i < k; i++)
    {
        std::cin >> tmp;
        numbers.push_back(tmp);

    }
    std::cout << std::endl;
    for (double n : numbers)
        std::cout << n << "\t";
    std::cout << std::endl;
    // new example
    double A[100];
    int size = 100;
   /* do {
        cout << " Input size masive  \n";
        cin >> size;
    } while (size <= 0 || size > 100);
    */
    int ns = 0;
    ns = RndInputArray(size, A);
    for (int i = 0; i < ns; i++)
        cout << A[i] << "\t\t";
    std::cout << std::endl;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
