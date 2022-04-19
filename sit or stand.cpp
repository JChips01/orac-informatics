#include <cstdio>

int r, s, n;
// Define: rows of seats; no. of seats in each row; number of tickets

int main() {
	freopen("sitin.txt", "r", stdin);
	freopen("sitout.txt", "w", stdout);
// write/read

	scanf("%d %d", &r, &s);
// Scan in the number of *rows*, *no. of seats*
	scanf("\n%d", &n);
// Scan in the number of *tickets*

// Case 1: there are more people than seats

	if (n > r*s) {
	printf("%d %d", r*s, n-r*s);
// Case 2: There are less people than seats
	} else {
	printf("%d 0", n);
	}

}