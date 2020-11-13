#define F 410113 // білет для циклу for
#define W 777777 // білет для циклу while_do
#define D 100100 // білет для циклу do_while
int main() {
 int f1 = F / 1000; //виділяємо просто першу половину числа F
 int f2 = F % 1000; //виділяємо просто другу половину числа F
 int w1 = W / 1000; //виділяємо просто першу половину числа W
 int w2 = W % 1000; //виділяємо просто другу половину числа W
 int d1 = D / 1000; //виділяємо просто першу половину числа D
 int d2 = D % 1000; //виділяємо просто другу половину числа D
 int half1 = 0; //сума першої половини
 int half2 = 0; //сума другої пловини
 int result_for = 0;
 int result_while = 0;
 int result_do_while = 0;
 int i = 0; //коефіціент
 int j = 0; //коефіціент

// for

for  (i = 10, j = 1; i <= 1000; i *=10, j *=10) {
	half1 += f1 % i / j; //виділяємо суму першої половини числа
}
for (i = 10, j = 1; i <= 1000; i *=10, j *=10) {
        half2 += f2 % i / j; //виділяємо суму другої половини числа
}
if (half1 == half2) {
	result_for = 1; //білет щасливий
 } else {
	result_for = -1; //білет на щасливий
}

// while
half1 = 0;
half2 = 0;
i = 10;
j = 1;
while (i <= 1000) {
	half1 += w1 % i / j;
	i *=10;
	j *= 10;
}

i = 10;
j = 1;

 while ( i <= 1000) {
	half2 += w2 % i / j;
	i *= 10;
	j *= 10;
}
if (half1 == half2) {
	result_while = 1; //білет щасливий
 } else {
	result_while = -1; //білет на щасливий
}

// do_while

half1 = 0;
half2 = 0;
i = 10;
j = 1;
do {
	half1 += d1 % i / j;
	i *= 10;
	j *= 10;
} while (i <= 1000);

i = 10;
j = 1;
do {
        half2 += d2 % i / j;
        i *= 10;
        j *= 10;
} while (i <= 1000);

if (half1 == half2) {
        result_do_while = 1; //білет щасливий
 } else {
        result_do_while = -1; //білет на щасливий
}
return 0;
}
