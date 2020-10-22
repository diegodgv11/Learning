#include <iostream>

class Runner {
public:
	virtual void run() = 0;
};

class Barker {
public:
	virtual void bark() = 0;
};

class Flying {
public:
	virtual void fly() = 0;
};

class Dog : public Runner, public Barker {
public:
	
	void run() override {
		std::cout << "Dog is running";
	}

	void bark() override {
		std::cout << "Dog is barking";
	}	
};

class Bird : public Flying, public Runner {
	void fly() override {
		std::cout << "Bird is flying";
	}

	void run() override {
		std::cout << "Bird is running";
	}
};

