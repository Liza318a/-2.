#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << boolalpha;

    //  Завдання 1. Integer28 
    cout << "--- Завдання 1. Integer28 ---" << endl;
    int K, N;
    cout << "Введіть номер дня року K (1-365): ";
    cin >> K;
    cout << "Введіть день тижня 1 січня N (1-7): ";
    cin >> N;
    
    int day_of_week = (N + K - 2) % 7 + 1;
    cout << "Номер дня тижня для " << K << "-го дня року: " << day_of_week << endl << endl;

    //  Завдання 2. Boolean40 
    cout << "--- Завдання 2. Boolean40 ---" << endl;
    int x1, y1, x2, y2;
    cout << "Введіть координати першого поля (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введіть координати другого поля (x2 y2): ";
    cin >> x2 >> y2;
    
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    bool is_knight_move = (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
    cout << "Кінь може зробити такий хід: " << is_knight_move << endl << endl;

    //  Завдання 3. Math 17 
    cout << "--- Завдання 3. Math 17 ---" << endl;
    const double PI = 3.14159265358979323846;
    double x;
    cout << "Введіть дійсне значення x: ";
    cin >> x;
    
    double rad48 = 48.0 * PI / 180.0;
    double numerator = pow(sin(2.0 * x), 2) * pow(2.0, 1.0 - 2.0 * x);
    double denominator = tan(fabs(x)) * sin(rad48);
    double term2 = (1.0 / 5.0) * log2(x * x);
    
    double y = (numerator / denominator) + term2;
    cout << "Значення функції y = " << y << endl;

    return 0;
}
