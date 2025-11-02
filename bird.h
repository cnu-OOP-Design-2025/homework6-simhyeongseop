#pragma once

#include <iostream>

class Bird {
    std::string species; 
public:
    Bird(){}
    Bird(std::string species): species(species){
        std::cout << species << " has borned" << std::endl;
    }

    virtual void fly() {
        std::cout << "This bird can fly." << std::endl;
    }

    virtual void swim() {
        std::cout << "This bird can swim." << std::endl;
    }

    virtual void display() {
        std::cout << "Species: " << species << std::endl;
    }

    virtual void quack(){};

    virtual void cry(){};

    virtual ~Bird() {
        std::cout << species << " has died" << std::endl;
     }
};

/*
DUCK CLASS (METHODS)
- cry() 메서드: "Quak!" 문자열을 출력 (.bat 파일에 따라 수정됨)
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Duck" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출
*/ 
class Duck : public Bird {
public:
    Duck();
    void cry() override;
    ~Duck() override;
};

/*
PENGUIN CLASS (METHODS)
- cry() 메서드: "Squawk!" 문자열을 출력 (.bat 파일에 따라 수정됨)
- fly() 메서드: "This bird can't fly." 문자열을 출력
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Penguin" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출
*/  
class Penguin : public Bird {
public:
    Penguin();
    void cry() override;
    void fly() override;
    ~Penguin() override;
};

/*
EAGLE CLASS (METHODS)
- cry() 메서드: "Screech!" 문자열을 출력
- swim() 메서드: "This bird can't swim." 문자열을 출력
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Eagle" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출
*/  
class Eagle : public Bird {
public:
    Eagle();
    void cry() override;
    void swim() override;
    ~Eagle() override;
};
