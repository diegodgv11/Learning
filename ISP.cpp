#include <iostream>

class Animal {
public:
	virtual void fly() = 0;
	virtual void run() = 0;
	virtual void bark() = 0;
};

class 

class Dog : public Animal {
public:
	void fly() override {}
	
	void run() override {
		std::cout << "Dog is running";
	}

	void bark() override {
		std::cout << "Dog is barking";
	}	
};

class Bird : public Animal {
	void fly() override {
		std::cout << "Bird is flying";
	}

	void run() override {
		std::cout << "Bird is running";
	}

	void bark() override {}
};

