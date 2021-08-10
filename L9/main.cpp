#include "QueType.h"
#include "QueType.cpp"
#include <bits/stdc++.h>

#define  mxx 10000
using namespace std;





using namespace std;


int countCoins(QueType<int> coins, int n, int money) {
    int count = 0;
    int sum = 0;
    int unsortedArray[n];
    int k = 0;
    while (!coins.IsEmpty()) {
        int c;
        coins.Dequeue(c);
        unsortedArray[k] = c;
        k++;
    }
    for (int i = 0; i < n + 1; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (unsortedArray[i] < unsortedArray[j]) {
                int temp = unsortedArray[i];
                unsortedArray[i] = unsortedArray[j];
                unsortedArray[j] = temp;
            }
        }
    }
    for (int i = 0; i < n + 1; i++) {
        coins.Enqueue(unsortedArray[i]);
    }
    while (sum != money) {
        sum += coins.top();
        count++;
        if (sum == money)
            return count;
        else if (sum > money) {
            int p;
            sum -= coins.top();
            coins.Dequeue(p);
            sum -= p;
            count -= 2;
        }
    }
    return count;
}

int main() {
    QueType<int> coins;
    int n;
    int money;
    cout << "input: " ;
    cin >> n;
    cout << "" << endl;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        coins.Enqueue(m);
    }
    cin >> money;
    int ans = countCoins(coins, n, money);
    cout << ans << endl;
    return 0;
}