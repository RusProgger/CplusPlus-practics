#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

// счетчик атомарной операции

std::atomic<int> count(0);

void printMessage(const std::string& message) {
	std::cout << message << std::endl;
}
// function counter
void counter() {
	for (int a = 0; a < 1000; a++) {
		count.fetch_add(1, std::memory_order_relaxed);
	}
}


int main() {
	// locale Ru

	std::locale::global(std::locale(""));

	std::thread t1(counter); // Поток 1
	std::thread t2(counter); // Поток 2

	std::thread proc(printMessage, "Привет поток 1!\n");
	std::thread proc2(printMessage, "Привет поток 2!\n");

	proc.join();  // Ждем завершения потока t1
	proc2.join();  // Ждем завершения потока t2

	std::cout << "Финальное значение: " << count.load() << std::endl;

	// Ожидаем завершения потоков

	
	t1.join();
	t2.join();
	// Output message
	std::cout << "Все потоки завершены!" << std::endl;

	return EXIT_SUCCESS;
}
