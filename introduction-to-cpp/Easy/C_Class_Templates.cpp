#include <iostream>
#include <sstream>
#include <string>

template <typename T>
class MyTemplate {
    T element1;

   public:
    MyTemplate(T num) : element1(num) {}

    T add(T element2) {
        return element1 + element2;
    }

    T concatenate(T element2) {
        return element1 + element2;
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string type;
        std::cin >> type;

        if (type == "string") {
            std::string e1, e2;
            std::cin >> e1 >> e2;

            MyTemplate<std::string> mt1(e1);
            std::cout << mt1.concatenate(e2) << '\n';
        } else if (type == "int") {
            int e1, e2;
            std::cin >> e1 >> e2;

            MyTemplate<int> mt2(e1);
            std::cout << mt2.add(e2) << '\n';
        } else if (type == "float") {
            double e1, e2;
            std::cin >> e1 >> e2;

            MyTemplate<double> mt3(e1);
            std::cout << mt3.add(e2) << '\n';
        }
    }

    return 0;
}