#include <iostream>
#include <vector>

class IntList {
private:
    std::vector<int> data;

public:
    void addElement(int value) {
        data.push_back(value);
    }

    void removeElement(int index) {
        if (index < 0 || index >= data.size()) {
            std::cout << "Chỉ số không hợp lệ!\n";
            return;
        }
        data.erase(data.begin() + index);
    }

    void printList() const {
        std::cout << "Danh sách: ";
        for (int value : data) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    IntList list;
    list.addElement(10);
    list.addElement(20);
    list.addElement(30);
    list.printList();

    list.removeElement(1);
    list.printList();

    return 0;
}
