#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 0; t < T; t++) {
        int N; cin >> N;
        if (N == 1) {
            cout << "0\n";
        } else if (N == 2) {
            cout << "1\n0 0\n";
        } else if (N == 3) {
            cout << "2\n0 0\n0 1\n";
        } else if (N == 5) {
            cout << "4\n0 0\n0 1\n0 2\n0 3\n";
        } else if (N == 9) {
            cout << "4\n0 0\n0 1\n1 0\n1 1\n";
        } else if (N == 12) {
            cout << "5\n0 0\n0 1\n1 0\n1 1\n1 2\n";
        } else if (N == 17) {
            cout << "6\n0 0\n0 1\n1 0\n1 1\n1 2\n2 0\n";
        } else if (N == 24) {
            cout << "7\n0 0\n0 1\n1 0\n1 1\n2 0\n3 0\n100 1000\n";
        } else {
            /* L lines in general position divides plan into exactly (L*L+L+2)/2 regions. Introducing k lines intersecting in a single point
             * removes (k-1) choose 2 of those regions. Apart from the special cases above, we can take the smallest L that can make at least as
             * many regions as N, and by introducing such intersection points, we reduce the number of regions.
             *
             * The algorithm is as follows: we find the largest (k-1 choose 2) that we can put in (such that it doesn't kill more regions than we need
             * to, and insert k-1 lines such that they intersect with the previous. i-th line will have slope equal to i, which guarantees
             * bounds on the slope and avoids parallel lines.
             *
             * For convenience, I'm using point-line duality to generate the intersection points (three lines in format a_i * x + b_i = y meet at a point
             * if and only if the three points (a_i, b_i) are collinear). This means that if we increase y by some constant, while increasing x by one,
             * we're making collinear points. Let this constant be 0 at the beginning, and increase it by 1 every time we make a set of collinear points. */
            int L = 0;
            while (L*L+L+2 < 2*N) ++L;
            int slope = 0, y0 = 0, linesOutput = 1, regionsToKill = (L*L+L+2)/2 - N;
            cout << L << "\n0 0\n";
            while (linesOutput < L) {
                int collinearPoints = 2;
                while (collinearPoints * (collinearPoints - 1) / 2 <= regionsToKill) ++collinearPoints;
                regionsToKill -= (collinearPoints - 1)*(collinearPoints - 2) / 2;
                for (int i = 1; i < collinearPoints; i++) {
                    y0 += slope;
                    cout << linesOutput << ' ' << y0 << '\n';
                    linesOutput++;
                    if (linesOutput == L) break; // this never happens in production
                }
                ++slope;
            }
        }
    }
}
