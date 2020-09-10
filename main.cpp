#include <iostream>

using namespace std;

int main()
{

	int quantity = 5;
	float cost = 27.82,
		tax_rate = 0.10,
		subTotal = cost * quantity,
		tax = subTotal * tax_rate;

	cout << "Qty: " << quantity << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Subtotal: $" << subTotal << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << subTotal + tax << endl;

	return 0;
}
