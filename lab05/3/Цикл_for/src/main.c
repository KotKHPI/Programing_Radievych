#define N 777777 //
int main() {
 int a = N / 1000; //виділяємо просто першу половину числа N
 int b = N % 1000; //виділяємо просто другу половину числа N
 int half1 = 0; //сума першої половини
 int half2 = 0; //сума другої пловини
 int result = 0;
 int i = 0; //коефіціент
 int j = 0; //коефіціент

for  (i = 10, j = 1; i <= 1000; i *=10, j *=10) {
	half1 += a % i / j; //виділяємо суму першої половини числа
}
for (i = 10, j = 1; i <= 1000; i *=10, j *=10) {
        half2 += b % i / j; //виділяємо суму другої половини числа
}
if (half1 == half2) {
	result = 1; //білет щасливий
 } else {
	result = -1; //білет на щасливий
}
	return 0;
}
