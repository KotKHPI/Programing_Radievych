#define N 8134
int main()
{
	int n1 = N/1000; //вирадення першого числа з 4-розрядного числа
	int n2 = N%1000/100; //вирадення другого числа з 4-розрядного числа
	int n3 = N%1000%100/10; //вирадення третього числа з 4-розрядного числа
	int n4 = N%1000%100%10; //вирадення четвертого числа з 4-розрядного числа
	int N2; //еквівалент числа N в десятковій системі числення
	
	N2 = 1000*n1 + 100*n2 + 10*n3 + n4;
	return 0;
}
