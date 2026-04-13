#include <iostream>
using namespace std;

int main()
{
    int N, M, result=1;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;

    if (N<=0 || N>=10 || M<1 || M>10){
        cout << "Invalid base number" << endl;
        return 1;
    }

    cout << N << " to power number: " << result << " ";

    for (int i=0; i<M; i++){
        result *= N;
        cout << result << " ";
    }

    cout << endl;

    return 0;
}
