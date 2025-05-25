#include <iostream>
#include <vector>
#include <unordered_set>  // Для хранения угаданных букв
#include <algorithm>      // Для transform и all_of
#include <iterator>
#include <fstream>        // Для работы с файлами
#include <cstdlib>        // Для srand и rand
#include <ctime>          // Для time
#include <string>         // Для работы со строками

using namespace std;

class Gibbet final {
private:
    string word;               // Слово, которое нужно угадать
    unordered_set<char> guess; // Множество уже угаданных букв
    
    // Статическое поле с изображениями виселицы
    static const vector<string> gallows;
    
    // Метод для получения случайного слова из файла
    string getRandomWord(const string& filename) {
        ifstream file(filename);  // Открываем файл
        vector<string> words;     // Вектор для хранения слов
        string temp;              // Временная переменная для чтения
        
        // Читаем слова из файла по одному
        while (file >> temp) {
            words.push_back(temp);
        }
        
        // Если файл пуст или не найден
        if (words.empty()) {
            cerr << "File is empty or not found! Using default word." << endl;
            return "hangman";  // Возвращаем слово по умолчанию
        }
        
        // Инициализация генератора случайных чисел
        srand(static_cast<unsigned>(time(nullptr)));
        // Возвращаем случайное слово из вектора
        return words[rand() % words.size()];
    }
    
public:
    // Конструктор с параметром по умолчанию
    explicit Gibbet(const string& filename = "words.txt") {
        // Получаем случайное слово
        word = getRandomWord(filename);
        // Преобразуем слово в нижний регистр
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        // Начинаем игру
        Play();
    }
    
    // Основной игровой цикл
    void Play() {
        int wrongAttempts = 0;                   // Счетчик ошибок
        const int maxAttempts = gallows.size() - 1; // Максимальное число ошибок
        
        // Главный игровой цикл
        while (true) {
            system("cls");  // Очищаем консоль (для Windows)
            // Выводим текущее состояние виселицы
            cout << gallows[wrongAttempts] << endl;
            
            // Отображаем текущий прогресс угадывания
            for (char c : word) {
                if (guess.count(c)) {
                    cout << c << " ";  // Показываем угаданные буквы
                } else {
                    cout << "_ ";     // Скрываем неотгаданные
                }
            }
            cout << "\n\n";
            
            // Проверка условия победы (все буквы угаданы)
            if (all_of(word.begin(), word.end(), [this](char c) { 
                return guess.count(c); 
            })) {
                cout << "YOU WIN! The word was: " << word << endl;
                return;
            }
            
            // Проверка условия поражения (слишком много ошибок)
            if (wrongAttempts >= maxAttempts) {
                cout << "YOU LOSE! The word was: " << word << endl;
                return;
            }
            
            // Показываем уже угаданные буквы
            cout << "Guessed letters: ";
            for (char c : guess) cout << c << " ";
            cout << "\nEnter a letter: ";
            
            // Получаем ввод пользователя
            char letter;
            cin >> letter;
            letter = tolower(letter);  // Приводим к нижнему регистру
            
            // Если буква уже была
            if (guess.count(letter)) {
                continue; // Пропускаем повторные вводы
            }
            
            // Добавляем букву в множество угаданных
            guess.insert(letter);
            
            // Если буквы нет в слове, увеличиваем счетчик ошибок
            if (word.find(letter) == string::npos) {
                wrongAttempts++;
            }
        }
    }
};

// Определение статического поля с изображениями виселицы
const vector<string> Gibbet::gallows {
    // Уровень 0 - только основание
    R"(
        _______
        |/      
        |      
        |       
        |        
        |       
        |
       _|___
    )",
    // Уровень 1 - добавлена перекладина
    R"(
        _______
        |/   | 
        |      
        |       
        |        
        |       
        |
       _|___
    )",
    // Уровень 2 - добавлена голова
    R"(
        _______
        |/   | 
        |   (_)
        |       
        |        
        |       
        |
       _|___
    )",
    // Уровень 3 - добавлено тело
    R"(
        _______
        |/   | 
        |   (_)
        |    | 
        |    |    
        |       
        |
       _|___
    )",
    // Уровень 4 - добавлена одна рука
    R"(
        _______
        |/   | 
        |   (_)
        |   \| 
        |    |    
        |       
        |
       _|___
    )",
    // Уровень 5 - добавлены обе руки
    R"(
        _______
        |/   | 
        |   (_)
        |   \|/
        |    |    
        |       
        |
       _|___
    )",
    // Уровень 6 - добавлена одна нога
    R"(
        _______
        |/   | 
        |   (_)
        |   \|/
        |    |    
        |   /    
        |
       _|___
    )",
    // Уровень 7 - полная виселица
    R"(
        _______
        |/   | 
        |   (_)
        |   \|/
        |    |    
        |   / \  
        |
       _|___
    )"
};

int main() {
    // Указываем путь к файлу со словами
    string filename = R"(C:\Users\Username\Desktop\tr.txt)";
    
    // Создаем экземпляр игры
    // Если файл не найден, будет использовано слово по умолчанию
    Gibbet game(filename);
    
    return 0;
}