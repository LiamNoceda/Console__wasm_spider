#include "spider.hpp"
#include <iostream>

// Функция для печати информации о пауке
void print_spider_info(const Spider& spider) {
    std::cout << "\tName this spider is " << spider.name << "\n";
    std::cout << "\tSex-Pol " << spider.sex << "\n";
    std::cout << "\tSpider x and y " << spider.x << " - " << spider.y << "\n";
    std::cout << "\tSpider age " << spider.age << "\n";
}

// Процесс создания пользовательского паука
Spider create_user_spider() {
    Spider user_spider;
    std::cout << "\nCreate your own spider:\n";

    std::cout << "\tEnter spider name: ";
    std::cin >> user_spider.name;

    std::cout << "\tEnter spider sex: ";
    std::cin >> user_spider.sex;

    std::cout << "\tEnter spider width (x): ";
    std::cin >> user_spider.x;

    std::cout << "\tEnter spider height (y): ";
    std::cin >> user_spider.y;

    std::cout << "\tEnter spider age: ";
    std::cin >> user_spider.age;

    return user_spider;
}