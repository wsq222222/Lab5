#include <iostream>
#include <string>
#include <vector>

// Шаблонный класс Queue
template <typename T>
class Queue {
private:
    std::vector<T> data;

public:
    void push(const T& item) {
        data.push_back(item);
    }

    void pop() {
        if (!data.empty()) {
            data.erase(data.begin());
        }
        else {
            std::cout << "Queue is empty. Cannot remove element.\n";
        }
    }

    void show() const {
        std::cout << "Queue elements:\n";
        for (const auto& element : data) {
            std::cout << element << '\n';
        }
    }

    bool isEmpty() const {
        return data.empty();
    }
};

int main() {
    Queue<int> numberQueue;
    numberQueue.push(10);
    numberQueue.push(20);
    numberQueue.push(30);

    std::cout << "Integer Queue:\n";
    numberQueue.show();
    numberQueue.pop();
    numberQueue.show();

    std::cout << "\n";

    Queue<std::string> wordQueue;
    wordQueue.push("healthpotion");
    wordQueue.push("Pickaxe");
    wordQueue.push("Card");

    std::cout << "String Queue:\n";
    wordQueue.show();
    wordQueue.pop();
    wordQueue.show();

    return 0;
}