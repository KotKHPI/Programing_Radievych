#define N 33
int main() {
 int a = 0;
 int result = 0;
	if (N > 1) {
		for(int i = 2; i < N; i++) {
		a = N % i;
		if (a == 0) {
 result = -1;
} else {
 result = 1;
}

}
	} else {
	result = 0;
}
return 0;
}
