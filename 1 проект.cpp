#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int N = 10;
    double a[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];

    const double eps = 1e-6;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double s = 0.0;
            for (int k = 0; k < N; k++)
                s += a[i][k] * a[j][k];

            if (i == j) {
                if (fabs(s - 1.0) > eps) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else {
                if (fabs(s) > eps) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}