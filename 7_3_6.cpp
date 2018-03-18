/*Дано слово, состоящее только из строчных латинских букв.
 *  Проверить, является ли это слово палиндромом.
 *  Вывести Yes или No. Пример:
	Ввод: radar    Вывод: Yes
	Ввод: yes	   Вывод: No
*/

#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

bool palindrom(char *,char *);

int main() {
	char str[] = "radart";
	int lenght = strlen(str);
	char *ptr=str;
	char *endPtr;
	endPtr = str + lenght - 1;
	if (palindrom(ptr, endPtr))cout << "Yes" << endl;
	else cout << " No" << endl;
	return 0;
}

bool palindrom(char *start,char *end){
	if (*start == *end)
		if (start < end) {
			start++;
			end--;
			palindrom(start, end);
		}
		else
			return true;
	else
		return false;
}
