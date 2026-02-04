<<<<<<< HEAD
//#include "logic.h"
//
//void printNumbersOptimized(int N, int M) {
//    cout << "The -resulting numerical sequence: ";
//
//    int step = (N < M) ? 1 : -1;
//
//    int end = M + step;
//
//    for (int i = N; i != end; i += step) {
//        cout << i;
//        if (i + step != end) {
//            cout << " ";
//        }
//    }
//    cout << endl;
//}
=======
#include "logic.h"

void printNumbersOptimized(int N, int M) {
    cout << "The resulting numerical sequence: ";
    
    int step = (N < M) ? 1 : -1;

    int end = M + step;

    for (int i = N; i != end; i += step) {
        cout << i;
        if (i + step != end) {
            cout << " ";
        }
    }
    cout << endl;
}
>>>>>>> b32e5a29173520eb53006e0e9301ec7ff4ce8166
