#include <iostream>
#include "bird.h"

/*
DUCK CLASS (METHODS)
- cry() 메서드: "Quak!" 문자열을 출력 (.bat 파일에 따라 수정됨)
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Duck" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출
*/ 
Duck::Duck() : Bird("Duck") {
    cry();
}

void Duck::cry() {
    std::cout << "Quack!" << std::endl;
}

Duck::~Duck() {
    cry();
}

/*
PENGUIN CLASS (METHODS)
- cry() 메서드: "Squawk!" 문자열을 출력 (.bat 파일에 따라 수정됨)
- fly() 메서드: "This bird can't fly." 문자열을 출력
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Penguin" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출
*/ 
Penguin::Penguin() : Bird("Penguin") {
    cry();
}

void Penguin::cry() {
    std::cout << "Squawk!" << std::endl;
}

void Penguin::fly() {
    std::cout << "This bird can't fly." << std::endl;
}

Penguin::~Penguin() {
    cry();
}

/*
EAGLE CLASS (METHODS)
- cry() 메서드: "Screech!" 문자열을 출력
- swim() 메서드: "This bird can't swim." 문자열을 출력
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Eagle" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출
*/ 
Eagle::Eagle() : Bird("Eagle") {
    cry();
}

void Eagle::cry() {
    std::cout << "Screech!" << std::endl;
}

void Eagle::swim() {
    std::cout << "This bird can't swim." << std::endl;
}

Eagle::~Eagle() {
    cry();
}
