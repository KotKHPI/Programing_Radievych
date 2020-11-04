#define N 123.656
int main() {
	int whole = N; //ми виділели цілу частину 123
	float y = N - whole; //ми виділели частину 0.656
	float result;

	if (y == 0) { // перевірка ділення на 0
	result = -1;
 }
	y *= 1000;
	result = y / whole; // 5.33
	result = result * 100;
	result = (int) result * 1;
	result /= 100;

return 0;
}
