**MSSV:** 21126074 

**Họ tên:** Đào Thành Lực Bài 2: console 

Code:  



|#include <iostream> |
| - |
|using *namespace* std; |
|*class* Base{ |
|*private:* |
|*int* t; |
|*public:* |
|Base() { |
|cout << "Base constructor-0 param" << endl; |
|t=0; |
|} |
|Base(*int* *u*) { |
|cout << "Base constructor-1 param" << endl; |
|t=*u*; |
|} |
|Base(const Base& *b*){ |
|t=*b*.t; |
|cout << "Base copy constructor" << endl; |
|} |
|~Base(){ |
|cout<<"Base destructor" << endl; |
|} |
|}; |
||
|*class* DerivedA: *public* Base { |
|*public:* |
|DerivedA(){ |
|cout<<"DerivedA constructor-0 param"<<endl; |
|a=0; |
|} |
|DerivedA(*int* *x*) { |
|cout<<"DerivedA constructor-1 param"<<endl; |
|a = *x*; |
|} |
|DerivedA(*int* *u*, *int* *x*) { |
|cout<<"DerivedA constructor-2 params"<<endl; |
|a = *x*; |
|} |
|DerivedA(const DerivedA& *da*){ |
|a=*da*.a; |
|} |
|~DerivedA(){ |
|cout<<"DerivedA destructor" << endl; |
|} |
|*void* print() { |
|cout << "DerivedA = " << a << endl; |
|} |
|*private:* |
|*int* a; |
|}; |
||
|*class* DerivedB: *public* Base { |
|*public:* |
|DerivedB() { |
|cout << "DerivedB constructor-0 param" << endl; |
|b = 0; |
|} |
|DerivedB(*float* *x*) { |
|cout << "DerivedB constructor-1 param" << endl; |


|b = *x*; |
| - |
|} |
|DerivedB(*int* *u*, *float* *x*):Base(*u*) { |
|cout << "DerivedB constructor-2 params" << endl; |
|b = *x*; |
|} |
|DerivedB(const DerivedB& *db*):Base(*db*) { |
|cout << "DerivedB copy constructor" << endl; |
|b=*db*.b; |
|} |
|~DerivedB(){ |
|cout<<"DerivedB destructor" << endl; |
|} |
|*void* print() { |
|cout << "DerivedB = " << b << endl; |
|} |
|*private:* |
|*float* b; |
|}; |
||
|*void* f(Base *b*){ |
|cout<<"Function f" << endl; |
|} |
||
|*int* main(){ |
|Base b1; |
|Base b2(3); |
|Base\*pb=new Base(1); |
|DerivedA da1; |
|DerivedA da2(2); |
|DerivedA da3(2,3); |
|DerivedA da4(da2); |
|pb=new DerivedA(4,5); |
|DerivedB db1; |
|DerivedB db2(2.7); |
|DerivedB db3(3,2.7); |
|DerivedB db4(db2); |
|pb=new DerivedB(4,5); |
|f(b1); |
|f(da1); |
|f(db1); |
|delete pb; |
|return 0; |
|} |
Output:  

Base constructor-0 param Base constructor-1 param 

Base constructor-1 param Base constructor-0 param DerivedA constructor-0 param Base constructor-0 param DerivedA constructor-1 param Base constructor-0 param DerivedA constructor-2 params Base constructor-0 param 

Base constructor-0 param DerivedA constructor-2 params Base constructor-0 param DerivedB constructor-0 param 

Base constructor-0 param DerivedB constructor-1 param Base constructor-1 param DerivedB constructor-2 params Base copy constructor DerivedB copy constructor Base constructor-1 param DerivedB constructor-2 params Base copy constructor Function f 

Base destructor 

Base copy constructor Function f 

Base destructor 

Base copy constructor Function f 

Base destructor 

Base destructor 

DerivedB destructor 

Base destructor 

DerivedB destructor 

Base destructor 

DerivedB destructor 

Base destructor 

DerivedB destructor 

Base destructor 

DerivedA destructor 

Base destructor 

DerivedA destructor 

Base destructor 

DerivedA destructor 

Base destructor 

DerivedA destructor 

Base destructor 

Base destructor 

Base destructor 

Giải thích: ta có thể chia ra thành các giai đoạn chạy chương trình khác nhau:   

- Khi chạy 3 hàm là : 

Base b1; 

`    `Base b2(3); 

`    `Base\*pb=new Base(1); 

Output được:  

Base constructor-0 param  *(1)*

Base constructor-1 param  *(2)*

Base constructor-1 param  *(3)*

Base destructor 

Base destructor 

+ *(1)* là hàm Base() nên sẽ in trực tiếp ra dòng cout được tạo trong Base(), t = 0. *(2)* cũng xuất ra dòng cout 

trong hàm Base(int u), t = 3. *(3)* là tạo ra 1 con trỏ pb giống với kết quả xuất của hàm Base(int u), t = 1. 

+ Còn lại là các kết quả chạy của hàm hủy trong class Base. Được hủy theo thứ tự ngược lại của quá trình 

tạo. 

- Khi chạy 5 hàm tiếp theo là:  

DerivedA da1; DerivedA da2(2); DerivedA da3(2,3); DerivedA da4(da2); pb=new DerivedA(4,5); 

//pb là con trỏ Base được tạo ra từ Base\*pb=new Base(1); Output được: 

Base constructor-1 param : đây là output của Base\*pb=new Base(1); Base constructor-0 param   ![](ngoac1.png)

DerivedA constructor-0 param  *(1)*

Base constructor-0 param  ![](ngoac1.png)

DerivedA constructor-1 param  *(2)*

Base constructor-0 param  ![](ngoac1.png)

DerivedA constructor-2 params  *(3)*

Base constructor-0 param   *(4)*

Base constructor-0 param  ![](ngoac1.png)

DerivedA constructor-2 params  *(5)*

DerivedA destructor 

Base destructor 

DerivedA destructor 

Base destructor 

DerivedA destructor 

Base destructor DerivedA destructor Base destructor 

+ class DerivedA kế thừa class Base. 
+ *(1)* Hàm khởi tạo DerivedA da1 mà không có tham số truyền vào nên sẽ gọi constructor của class Base là 

hàm Base(). Và in ra dòng " Base constructor-0 param". Sau đó xuất ra dòng cout trong hàm DerivedA là " DerivedA constructor-0 param ", a = 0. 

+ *(2)*  Hàm khởi tạo DerivedA da2 có tham số truyền vào là 2, sẽ gọi constructor của clas Base là Base() và 

constructor của lớp DerivedA với một tham số là 2, xuất ra "Base constructor-0 param" và "DerivedA constructor-1 param", a = 2. 

+ *(3)* Hàm khởi tạo đối tượng DerivedA da3 với 2 tham số là 2 và 3 (u và x), sẽ gọi constructor của class Base 

không có tham số là Base() và constructor của lớp DerivedA với 2 tham số u = 2 và x = 3, xuất ra "Base constructor- 0 param" và "DerivedA constructor-2 params", a = 3. 

+ *(4)* Là hàm sao chép da2 cho đối tượng da4, giá trị của a = 2. Nhưng không in ra "DerivedA constructor-1 

param" vì sau đó đối tượng da2 bị hủy. 

+ *(5)* con trỏ pb bị thay đổi trỏ tới đối tượng DerivaedA có 2 tham số là 4 và 5. Sẽ gọi constructor của class 

Base là Base() và constructor của lớp DerivedA với 2 tham số là 4 và 5, xuất ra "Base constructor-0 param" và "DerivedA constructor-2 params", a = 5. 

+ Các đối tượng sẽ được hủy theo thứ tự ngược lại với quá trình tạo. 
- Khi chạy 5 hàm tiếp theo là: 

`    `DerivedB db1; 

`    `DerivedB db2(2.7); 

`    `DerivedB db3(3,2.7); 

`    `DerivedB db4(db2); 

`    `pb=new DerivedB(4,5); 

//pb lúc này là con trỏ tạo ra từ pb=new DerivedA(4,5); 

Output: 

Base constructor-1 param : đây là output của Base\*pb=new Base(1);

Base constructor-0 param  ![](ngoac1.png)

DerivedA constructor-2 params  đây là output của pb=new DerivedA(4,5);

Base constructor-0 param  ![](ngoac1.png)

DerivedB constructor-0 param  *(1)*

Base constructor-0 param  ![](ngoac1.png)

DerivedB constructor-1 param  *(2)*

Base constructor-1 param  ![](ngoac1.png)

DerivedB constructor-2 params  *(3)*

Base copy constructor  ![](ngoac1.png)

DerivedB copy constructor  *(4)*

Base constructor-1 param  ![](ngoac1.png)

DerivedB constructor-2 params  *(5)*

DerivedB destructor 

Base destructor 

DerivedB destructor 

Base destructor 

DerivedB destructor 

Base destructor 

DerivedB destructor 

Base destructor 

+ class DerivedB kế thừa class Base. 
+ *(1)* Đối tượng db1 được khởi tạo bởi hàm DerivedB(). Sẽ gọi constructor Base() và constructor DerivedB() , 

xuất ra màn hình "Base constructor-0 param " và " DerivedB constructor-0 param ". 

+ *(2)*  Khởi  tạo  đối  tượng  db2  bởi  hàm  DerivedB(float  x).  Sẽ  gọi  constructor  Base()  và  constructor 

DerivedB(2.7), xuất ra " Base constructor-0 param " và " DerivedB constructor-1 param ", b = 2.7. 

+ *(3)* Khởi tạo đối tượng db2 bởi hàm DerivedB(int u, float x), kế thừa từ Base(u). Sẽ gọi constructor Base(3) 

và constructor DerivedB(3, 2.7), xuất ra " Base constructor-1 param " và " DerivedB constructor-2 params ", t = 3, b = 2.7. 

+ *(4)* tạo ra đối tượng db4 từ việc copy đối tượng db2 bởi hàm DerivedB(const Derived& db) kế thừa 

Base(const Base& b). Sẽ gọi hàm constructor copy Base(db2) và constructor copy DerivedB(db2). Xuất ra màn hình " Base copy constructor " và " DerivedB copy constructor ", b = 2.7. 

+ *(5)* con trỏ pb bị thay đổi trỏ tới đối tượng DerivaedB có 2 tham số là 4 và 5. Sẽ gọi constructor của class 

Base là Base(u) và constructor của lớp DerivedB(u, x) với 2 tham số là u = 4 và b = 5, xuất ra "Base constructor-1 param" và "DerivedB constructor-2 params", t = 4, b = 5. 

+ Các đối tượng sẽ được hủy theo thứ tự ngược lại với quá trình tạo. 
- Chạy 3 hàm kế tiếp là:  

`    `f(b1); 

`    `f(da1); 

`    `f(db1); 

//b1 là đối tượng được khởi tạo bởi Base b1;

//da1 là đối tượng được khởi tạo bởi DerivedA da1; //db1 là đối tượng được khởi tạo bởi DerivedB db1;  

Output: 

Base constructor-0 param : đây là khởi tạo đối tượng b1 

Base constructor-0 param  ![](ngoac1.png)

DerivedA constructor-0 param  đây là khởi tạo đối tượng da1 Base constructor-0 param  ![](ngoac1.png)

DerivedB constructor-0 param  đây là khởi tạo đối tượng db1 Base copy constructor  ![](ngoac2.png)

Function f  *(1)*

Base destructor 

Base copy constructor  ![](ngoac2.png)Function f  *(2)* Base destructor 

Base copy constructor  ![](ngoac2.png)Function f  *(3)* Base destructor 

DerivedB destructor 

Base destructor 

DerivedA destructor 

Base destructor 

Base destructor 

+ *(1)*, *(2)*, *(3)* đều cho ra 1 kết quả output là " Base copy constructor ", " Function f ", " Base destructor". 
+ 3 hàm f(b1), f(da1), f(db1) sẽ gọi hàm f() với các biến khác nhau  có kế thừa class Base và thực thi các hàm hủy để xóa từng biến (u, a, b). Output sẽ in ra hàm tạo và hàm hủy. 3 hàm f() với các biến khác nhau, xuất ra "Function f". 
- Đa hình của đa hình. 
- Chương trình có tính kế thừa và đa hình. 
