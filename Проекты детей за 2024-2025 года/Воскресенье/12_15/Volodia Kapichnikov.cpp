#include <iostream>
#include <string>
#include <cctype> // для tolower()

using namespace std;

int main() {
    string secretWord;
    string censored;
    string guess;
    int attemptsLeft = 5;

    // Первый игрок вводит слово
    cout << "Игрок 1, введите слово: ";
    getline(cin, secretWord);

    // Создаем цензурированную версию (звездочки)
    censored = string(secretWord.length(), '*');

    // Очищаем экран (условно, в реальной программе нужно system("cls") или другой способ)
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout << "Игрок 2, попробуйте угадать слово! У вас " << attemptsLeft << " попыток.\n";
    cout << "Слово: " << censored << endl;

    // Основной игровой цикл
    while (attemptsLeft > 0) {
        cout << "Введите вашу догадку: ";
        getline(cin, guess);

        // Проверяем угадано ли слово
        if (guess == secretWord) {
            cout << "Поздравляем! Вы угадали слово!\n";
            return 0;
        } else {
            attemptsLeft--;
            if (attemptsLeft > 0) {
                cout << "Неверно! Осталось попыток: " << attemptsLeft << endl;
                cout << "Слово: " << censored << endl;
            }
        }
    }

    // Если попытки закончились
    cout << "К сожалению, вы не угадали. Загаданное слово было: \"" << secretWord << "\"\n";
    return 0;
}