#include <iostream>
using namespace std;

long long dp[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin >> t;

    for(int i = 1; i <= 1000000; i++){
        for(int j=i; j <= 1000001; j+=i){
            dp[j] += i;
        }
    }

    for(int i = 2; i <= 1000000; i++){
        dp[i] += dp[i-1];
    }

    for(int j = 0; j < t; j++){
        cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}