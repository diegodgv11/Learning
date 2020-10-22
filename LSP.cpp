#include <iostream>
#include <string>

class Bird {
public:
	virtual void tweet() {
		std::cout << "Tweeting";
	}
};

// Clase que viola LSP
class Chicken final : public Bird {
public:
	void tweet(std::string sound) {
		std::cout << sound;
	}
};

// Clase que respeta LSP
class BlueJay final : public Bird {
public:
	void tweet() override {
		std::cout << "Aaaah! Aaaah!";
	}
};

int main() {
	Bird little_chicken{};
	little_chicken.tweet();
}