#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string names[1000];
    int A[1000], M[1000], S[1000], E[1000], total[1000];

    for (int i = 0; i < N; i++) {
        cin >> names[i] >> A[i] >> M[i] >> S[i] >> E[i];
        total[i] = A[i] + M[i] + S[i] + E[i];
    }

    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (total[i] < total[j] || (total[i] == total[j] && names[i] > names[j])) {

                swap(total[i], total[j]);
                swap(names[i], names[j]);
                swap(A[i], A[j]);
                swap(M[i], M[j]);
                swap(S[i], S[j]);
                swap(E[i], E[j]);
            }
        }
    }


    for (int i = 0; i < N; i++) {
        cout << names[i] << " " << total[i] << " "
             << A[i] << " " << M[i] << " " << S[i] << " " << E[i] << endl;
    }

    return 0;
}

