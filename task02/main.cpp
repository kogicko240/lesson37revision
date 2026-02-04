//#include "logic.h"
//
//int main() {
//    int N, M;
//
//    cout << "Input your two numbers N and M: ";
//    cin >> N >> M;
//
//    if (M <= N) {
//        cout << "Error: M must be greater than N (M > N)!" << endl;
//        return 1;
//    }
//
//    int count = countOddNumbers(N, M);
//
//    if (count == 0) {
//        cout << "No odd numbers found between " << N << " and " << M << endl;
//    }
//    else {
//        printOddNumbersDesc(N, M);
//    }
//
//    return 0;
//}