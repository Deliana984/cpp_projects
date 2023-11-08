#include <iostream>
using namespace std;


int main() {
   int i, j, m;

   cout << "Masukkan angka: "; cin >> m;
   string ar[m][m];

   for (i = 0; i < m; i++) {
     for (j = 0; j < m; j++) {
        cout << "index["<<i<<"]["<<j<<"]= "; cin >> ar[i][j];
     }
   }
    cout << endl;

    cout << "Array: "<<endl;
     for (i = 0; i < m; i++) {
     for (j = 0; j < m; j++) {
        cout << ar[i][j] << " ";
     }
     cout << endl;
   }





  return 0;
}
