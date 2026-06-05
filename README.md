# Wasm Spider - оса паук

Простой код на C++ с использованием структуры `Spider` и современного стандарта C++20.

## Что делает программа
Создает объект `wasm_spider` с заданными характеристиками и выводит их в консоль в красивом стиле.

## Характеристики структуры паука
- Имя (`name`)
- Пол (`sex`)
- Ширина и длина с учетом ног (`x`, `y`)
- Возраст (`age`)

## Исходный код проекта
```cpp
#include <iostream>
#include <string>

struct Spider {
    std::string sex{"Unknown"};
    double x{0.0};
    double y{0.0};
    int age{0};
    std::string name{"NoName"};
};

int main() {
    std::cout << "Wasm-Spider\n";

    // Назначенная инициализация полей (C++20)
    Spider wasm_spider{
        .sex = "Male",
        .x = 4.5,
        .y = 5.2,
        .age = 1,
        .name = "Webby"
    };

    std::cout << "\tName this spider is " << wasm_spider.name << "\n";
    std::cout << "\tSex-Pol " << wasm_spider.sex << "\n";
    std::cout << "\tSpider x and y " << wasm_spider.x << "-" << wasm_spider.y << "\n";
    std::cout << "\tSpider age " << wasm_spider.age << "\n";

    return 0;
}
```

## Как скомпилировать и запустить
Для сборки кода требуется компилятор с поддержкой **C++20** (например, GCC 10+, Clang 10+ или MSVC 2019+).

```bash
# Компиляция (флаг -std=c++20 обязателен)
g++ -std=c++20 main.cpp -o wasm_spider

# Запуск программы
./wasm_spider
```

## Пример вывода в консоль
```text
Wasm-Spider
        Name this spider is Webby
        Sex-Pol Male
        Spider x and y 4.5-5.2
        Spider age 1
```

---
