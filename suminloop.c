// bits/stdc++.h 
// It loads most of the libraries of C++ required.
#include <stdio.h> 
int main() {
    // Read the number of test cases.
    int T;
    scanf("%d", &T);
    int i=0;
    while (i<T) {
        // Read the input a, b
        int a, b;
        scanf("%d %d", &a, &b);
        // Compute the ans.
        int ans = a + b;
        printf("%d\n", ans);
        
        i++;
    }
    return 0;
}