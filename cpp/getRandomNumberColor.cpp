//Возвращает случайный цвет в виде числа от 0 до 0xffffff
//RAND_MAX =  0x7fff
long long getRandNumberColor() {
	return rand() / (double)RAND_MAX * 0xffffff;
}