//#include "logic.h"
//
//void printOddNumbersDesc(int N, int M) {
//    cout << "The resulting numerical sequence: ";
//
//    int start = M - (M % 2 == 0);
//
//    for (int i = start; i >= N; i -= 2) {
//        cout << i;
//        if (i - 2 >= N) {
//            cout << " ";
//        }
//    }
//    cout << endl;
//}
//
//int countOddNumbers(int N, int M) {
//    int firstOdd = N + (N % 2 == 0);
//    int lastOdd = M - (M % 2 == 0);
//
//    if (firstOdd > lastOdd) {
//        return 0;
//    }
//
//    return (lastOdd - firstOdd) / 2 + 1;
//}
