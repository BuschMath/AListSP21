#include "AList.h"

AList::AList()
{
	length = 0;
	currentPos = 0;
}

AList::~AList()
{
	MakeEmpty();
}

void AList::MakeEmpty()
{
	length = 0;
	currentPos = 0;
}

bool AList::IsFull() const
{
	if (length > MAX_ITEMS - 1)
		return true;
	else return false;
}

int AList::GetLength() const
{
	return length;
}

ItemType AList::GetItem(ItemType item, bool& found)
{
	found = false;
	for (int i = 0; i < length; i++)
	{
		if (item.ComparedTo(info[i]) == EQUAL);
		{
			found = true;
			return info[i];
		}
	}
	if (found == false)
		return item;
}

void AList::PutItem(ItemType item)
{
	if (!IsFull())
	{
		info[length] = item;
		length++;
	}
}

void AList::DeleteItem(ItemType item)
{
}

void AList::ResetList()
{
}

ItemType AList::GetNextItem()
{
	return ItemType();
}
