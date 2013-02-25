//Recursive N queens ..
#include<stdio.h>
#include<stdlib.h>
#define not_attacked 0
#define TRUE 1
#define FALSE 0
#define N 5
int Queen_Status(int);
void Place_Queen(int);
void print_sol();
int Q[N+1];
int main() {
	int i = 1;
	Place_Queen(i);
}
void Place_Queen(int i) {
	for (Q[i] = 1; Q[i] <= N; Q[i]++) {
		if (Queen_Status(i) == not_attacked) {
			if (i == N) {
				print_sol();
				exit(1); //stop as soon as a sol. is found.
			} else {
				Place_Queen(i+1);
			}
		}
	}
	return; //control returns back to main or Place_Queen(i-1);
}
int Queen_Status(int i) {
	int j, attacked = FALSE;
	for (j = 1; j < i; j++) {
		if (Q[i] == Q[j] || abs(Q[i]-Q[j]) == i - j) {
			attacked = TRUE;
			return attacked;
		}
	}
	return attacked;
}
void print_sol() {
	int i;
	for (i = 1; i <= N; i++) {
		printf("Q[%d] = %d ", i, Q[i]);
	}
	printf("\n**********************\n");
	return;
}

