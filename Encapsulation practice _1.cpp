#include <iostream>
#include <string>
#include <windows.h> 

using namespace std;

class book 
{
    string author;
    string title;
    string genre;
    int year;
    int status;
public:
    book(string t, string a, string g, int y, int s);
    int get_status() { return status; }
    void set_status(int s) { status = s; }
    void show();
};

book::book(string t, string a, string g, int y, int s)
    : title(t), author(a), genre(g), year(y), status(s) {}

void book::show() 
{
    cout << title << ", " << author << ", жанр: " << genre << ", рік: " << year << " знаходиться ";
    if (status == 1)
        cout << "у бібліотеці" << endl;
    else
        cout << "у читача" << endl;
}

int main() 
{
   
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001); 

    book b1("Том Сойєр", "Марк Твен", "Пригоди", 1876, 1);
    book b2("Мобі Дік", "Герман Мелвілл", "Роман", 1851, 0);

    b1.show();
    b2.show();

    return 0;
}
