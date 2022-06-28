let l_sort = [4, 2, 8, 1, 55, 98, 80, 24, 3, 5, 6];
let i = 0;
let j = 1;
let key = 0;

for (n in l_sort)
{
	key = l_sort[j];
	i = j - 1;
	while (i >= 0 && l_sort[i] > key)
	{
		l_sort[i + 1] = l_sort[i];
		i = i - 1;
	}
	l_sort[i + 1] = key;
	j++;
}

console.log(l_sort.length);
console.log(l_sort);
