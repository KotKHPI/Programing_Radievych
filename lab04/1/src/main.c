#define R 5
#define PI 3.14
int main()
{
	char command = 's';  // вибір команди
	float result;
switch(command) {
	case 'l' :
	float l = 2 * PI * R;
	result = l;
	break;  //при виборі команди "l" буде виконуватися така дія
	case 's' :
	float s = PI * R * R;
	result = s;
	break; // при виборі команди "s" буде виконуватися така дія
	case 'v' :
	float v = 4/3 * PI* R * R  * R;
	result = v;
	break; // при виборі команди "v" буде виконуватися така дія
}
	return 0;
}
