#define N 31
int main() {
 int a = 0;
 int result = 0;
	if (N > 0) { // від 0, бо 1 та 2 теж є простими числами
		for(int i = 2; i < N; i++) { //запуск циклу
		a = N % i; //запускаємо перевірна на просто число
		if (a == 0) { //Якщо при діленні в циклі, хоча б одне число ділиться націло - то воно не просте
 		 result = -1;
 }
}
           } else {
	    result = -1; //число яке меньше 0, не може бути простим
}
return 0; // Якщо в кінці ми отримуємо result = 0, то число N просте, якщо result = -1 - число N не просте
}
