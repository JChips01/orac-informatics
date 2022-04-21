#include <cstdio>

int n, d, a, b, x;

int main() {
	freopen("mixin.txt", "r", stdin);
	freopen("mixout.txt", "w", stdout);
	
	scanf("%d %d", &n, &d);
	
	b = n%d;
	a = n/d;
	if (b==0) {
		printf("%d", a);
	} else 
		printf("%d %d/%d", a, b, d);
}

