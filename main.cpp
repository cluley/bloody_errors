#include "syntax.h"
#include "semantic.h"
#include "linker.h"

int main(int argc, char** argv) {
	bool_out();//вместо оператора `<<` использован оператор `<`;
	
	angles_operations();//создаем кастомные функции (cos, sin, tan), чьи
                        //имена совпадают с именами функций из стандартной 
                        //библиотеки. Так что либо меняем имена кастомных 
                        //функций (cos_, sin_, tan_), либо отменяем пространство 
                        //имен std.
	
	ordering();//опечатка в имени подключаемого файла

	return 0;
}