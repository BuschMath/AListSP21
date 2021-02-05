#ifndef ALIST_H
#define ALIST_H

#include "ItemType.h"

class AList
{
public:
	AList();
	~AList();
	void MakeEmpty();								// no update
	bool IsFull() const;							// no update
	int GetLength() const;							// no update
	ItemType GetItem(ItemType item, bool& found);	// update
	void PutItem(ItemType item);					// update
	void DeleteItem(ItemType item);					// update
	void ResetList();								// no update
	ItemType GetNextItem();							// no update

private:
	int length;
	ItemType info[MAX_ITEMS];
	int currentPos;

};

#endif // !ALIST_H

