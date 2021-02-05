#include "AList.h"
#include <iostream>

using namespace std;

int main()
{
	AList list;

	ItemType item;
	item.Set(1);

	list.PutItem(item);

	cout << item.Get();

	return 0;
}