#include <cstdio>

int Majority(int A[], int n) {
	int i, c, count = 1;
	c = A[0];
	for(i = 1; i < n; i++) {
		if(A[i] == c) count++;
		else {
			if(count > 0) count--;
			else {
				c = A[i];
				count = 1;
			}
		}
	}
	if(count > 0)
		for (i = count = 0; i < n; i++){
			if(A[i] == c) count++;
		}
	if(count > n / 2) return c;
	else return -1;
}
int main(){
	int A[] = {0, 5, 5, 3, 4, 7, 5, 5};
	int a = Majority(A, 8);
	printf("%d\n", a);

	return 0;
}
