#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>
using namespace std;

class lkj
{
public:
	string path = "C:\\Users\\1\\Desktop\\учёба FOX\\File23\\test.txt";//полный путь файла 
	FILE* f, f1;

	void CreateFile(FILE* f, const char* pathP) {//создание файла
		if (!fopen_s(&f, pathP, "w")) {
			printf("Файл успешно создан\n");
		}
		else printf("Ошибка создания\n");
		fclose(f);
	}
	char PrintFile(FILE* f, const char* pathP) {// показать список из файла
		setlocale(0, "");//русский язык
		 const char temp[1000] = " ";// временная переменная
		string A;// строка которая хранит значение расшифрованного файла
		if (!fopen_s(&f, pathP, "w")) {// открываем с перезаписью 

			A.push_back(*temp);// превращаем чар в стринг

			reverse(A.begin(), A.end());// переворачиваем 
			//fputs(A, f);//перезаписываем //// не нужно наверное
				while (!feof(f)) {// смотрим что получилось 

					fscanf_s(f, "%s", temp, sizeof(temp));
					printf("%s\n", temp);
				}

			// выделяем слово 
				string word ;
				while (getline(A, (string)word, ' ')) {/// делим на слова
					cout << word;
				}
			fclose(f);// закрываем поток
		
		}
		else printf("Ошибка файла не существует\n");

	}


};
int main() {
	setlocale(0, "");
    lkj a;
	FILE* g;
	//a.CreateFile(a.f, "C:\\Users\\1\\Desktop\\учёба FOX\\gzdfgzgzghz\\test.txt");
	a.PrintFile(a.f, "C:\\Users\\1\\Desktop\\учёба FOX\\gzdfgzgzghz\\test.txt");


}