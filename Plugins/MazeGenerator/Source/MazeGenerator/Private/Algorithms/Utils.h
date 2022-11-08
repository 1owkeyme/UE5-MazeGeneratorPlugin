﻿#pragma once

template <typename T>
FORCEINLINE void ShuffleTArray(TArray<T>& Array, const FRandomStream& RandomStream)
{
	const int32 LastIndex = Array.Num() - 1;
	for (int32 i = 0; i <= LastIndex; ++i)
	{
		const int32 RandomIndex = RandomStream.RandRange(0, LastIndex);
		if (i != RandomIndex)
		{
			Swap(Array[i], Array[RandomIndex]);
		}
	}
}