

#include <iostream>
#include <string>

using namespace std;

//class X{
//private:
//	int data;
//public:
//	X(){data = 0;};
//	void set(int i){data = i;};
//	int read() {return data;};
//};
//class Y : public X{
//public:
//	int data;
//public:
//	Y() {data = 1;}
//	void set(int i){data = i;}
//	int read(){return data;};
//	int get() {return X::read();}
//	void change(int i){X::set(i);}
//};
//
//class Pet{
//	string pname;
//public:
//	Pet(const string &petName) : pname(petName){}
//	virtual string name() const {return pname;}
//	virtual string speak()	const {return "";}
//	virtual string description() const {return "This is " + pname;}
//	//virtual void eat()		const = 0;
//};
////void Pet::speak() const{
////	cout << "Pet::speak()" << endl;
////}
////void Pet::eat() const{
////	cout << "Pet::eat()" << endl;
////}
//class Dog : Pet{
//	string name;
//	string favorite;
//public:
//	Dog(const string &petName) : Pet(petName){}
//	Dog(const string &name, const string& activty) :Pet(name), favorite(){}
//	string description() const {
//		return Pet::name() + "likes to " + favorite;
//	}
//	virtual string sit() const {
//		return Pet::name() + " sits";
//	}
//	string speak()	const {
//		return Pet::name() + " says 'Bark!'";
//	}
//	//void eat()		const {Pet::eat();}
//};
//
//void describe(Pet p){
//	cout << p.description() << endl;
//}
//
//void main(void)
//{
//
//	Y y;
//	y.set(3);
//
//	cout << "y.x.data = " << y.get() << endl;
//	cout << "y.data = "   << y.data  << endl;
//
//	Pet pet("Alfred");
//	Dog dog("Fluffy", "Sleep");
//
//	cout << "pet.speak() =" << pet.speak() << endl;
//	cout << "dog.speak() =" << dog.speak() << endl;
//	cout << "dog.sit()   =" << dog.sit()   << endl;
//
//	describe(pet);
//	//describe((Pet)dog);
//}

int main(void)
{
	printf("Hello World!\n");

	return 1;
}