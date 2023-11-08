#include <iostream>
using namespace std;

int main() {
   int i, j, m;

   std::cout << "Masukkan angka: "; std::cin >> m;
   int ar[m][m];

   for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
        std::cout << "index ["<<i<<"]["<<j<<"]= "; std::cin >> ar[i][j];
    }
   }

    std::cout << "array: " << endl;
    for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
        std::cout << ar[i][j] << " ";
    }
    std::cout << endl;
   }

    std::cout << "array2: " << endl;
    for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
        if (i+j == m-1) {
            cout << ((i*j)+2) << " ";
        }
        else {
            cout << (i+j+2) << " ";
        }
    }
    std::cout << endl;
   }


   std::cout << "array3: " << endl;
    for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
        if (i+j == m-1) {
            cout << ((i*j)+2) << " ";
        }
        else if (i+j == 2*i) {
            cout << ((i+j)+2*j) << " ";
        }
        else {
            cout << (i+j+2) << " ";
        }
    }
    std::cout << endl;
   }

  return 0;
}
