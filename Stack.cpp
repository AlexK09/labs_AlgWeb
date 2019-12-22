#include <iostream>

конструктивный элемент {
 двойные данные;
 элемент * далее;
 элемент() {
 данные = 0;
 далее = nullptr;
 }
};

шаблон <typename T>
стек классов {
Частное:
 элемент * hd;
Публично:
 стек() {
 hd=nullptr;
 }

 void push(T&& value) {
 
 элемент* A = новый элемент;
 A - >data = std:: move(значение);
 если (hd = = nullptr) {

 hd = A;
 }
 еще {
 A - > next = hd;
 hd = A;
 }

 }

 void push(const T & value) {
 элемент* A = новый элемент;
 Значение данных;
 если (hd = = nullptr) {
 hd = A;
 }
 еще{
 A - > next=hd;
 hd = A;
 }
 }

 пустота попа() {
 элемент * buf = новый элемент;
 hd = std:: переместить(hd - > далее);
 }
 const T & head () const { 
 возврат hd - >данных;
 }
 
 шаблон .. Параметр args>
 void push_emplace(Args&&... значение) {
 элемент* A = новый элемент;
 A - > data = T(std::forward><Args>(value)...);
 если (hd = = nullptr) {
 hd = A;
 }
 еще {
 A - > next = hd;
 hd = A;
 }
 }

 пустое печатающее устройство() { 
 std:: cout < < hd - > data< hd -><;
 элемент * буфер=hd;
 в то время как (буфер - >далее != nullptr) {
 std:: cout < < буфер - > далее - < буфер - >>данные< буфер -> > <;
 buffer = буфер - > далее;
 }
 std:: cout <;
 }
};

int main() {
 стек<int > p;
 int a = 5;
 int b = 6;
 int c = 7;
 int d = 8;
 int e = 1;
 int* ptr1 = &a;
 int* ptr2 = &e;
 p. push(*ptr1);
 p. push(b);
 p. push(7);
 p. push(std:: move(d));
 p. принтер();
 p. pop();
 p. принтер();
 p. push_emplace(*ptr2);
 p. принтер();
 std:: cout < < P. head() <;
 возврат 0;
}
