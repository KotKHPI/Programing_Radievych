#define N 16
int main() {
 int mult = 0; // множник
 int root = 0; //корінь

for (int i = 1; i < N; i ++) {
	mult = i * i; // виделення точного множника з числа N
	if (mult == N) {
	 mult = i; // множник числа N
	 root = N / mult; // знаходження корня числа N
 }
}
	return 0;
}
