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
	for (int i = 0; i < length; i++)
	{
		if (item.ComparedTo(info[i]) == EQUAL)
		{
			for (int j = i; j <= length - 2; j++)
			{
				info[j] = info[j + 1];
			}
			length--;
		}
	}
}

void AList::ResetList()
{
	currentPos = 0;
}

ItemType AList::GetNextItem()
{
	currentPos++;
	return info[currentPos-1];
}
