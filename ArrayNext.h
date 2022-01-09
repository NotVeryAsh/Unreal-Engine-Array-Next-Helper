/**
 * Return the next element in the array.
 *
 * @param Index The index preceding the element you're searching for.
 * @returns The next element, or the first element if Index is the last index of the array, or nullptr if the Index is out of bounds.
*/
ElementType Next(SizeType Index)
{
	if(!IsValidIndex(Index))
		return nullptr;
			
	if(Index == ArrayNum -1)
		Index = 0;
	else 
		++Index;
		
	return GetData()[Index];
}


/**
 * Return the next element in the array.
 *
 * @param Item The Item preceding the element you're searching for.
 * @returns The next element, or the first element if Index is the last index of the array, or nullptr if the Item cannot be found
*/
ElementType Next(const ElementType& Item)
{
	SizeType Index = Find(Item);

	if(Index == INDEX_NONE)
		return nullptr;

	return Next(Index);
}