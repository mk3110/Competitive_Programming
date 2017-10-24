#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		ll n, dig, pwr, num, temp, rem;
		scanf("%lld", &n);
		n++;
		dig = floor(log(n) / log(2));
		pwr = 1 << dig;
		num = n - pwr + 1;
		pwr = pwr >> 1;
		for(ll i = 0;i < dig;i++) {
			temp = num / pwr;
			rem = num % pwr;
			if(!rem) {
				if(temp & 1)
					printf("5");
				else
					printf("6");
			}
			else {
				if(temp & 1)
					printf("6");
				else
					printf("5");
			}
			pwr = pwr >> 1;
		}
		printf("\n");
	}
	return 0;
}
