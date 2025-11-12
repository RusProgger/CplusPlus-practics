#include <iostream>
#include <vector>

template <typename T>

void out_vector(const std::vector<T>& vector_user) {
    for(size_t i{}; i < vector_user.size(); i++) {
        std::cout << vector_user[i] << " ";
    }

    std::cout << std::endl;
}


int main() {

    // Тут дописать вектор user с именами пользователя.



    std::cin.get();
    return 0;
}