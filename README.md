# Interview-Preperation

## Competitive Programming

## Language Tricks

### Python

> zip(\*itr)

```python
matrix = [[1,2,3],[4,5,6],[7,8,9]]
zip(*matrix) #[(1, 4, 7), (2, 5, 8), (3, 6, 9)]
```

=> It'll **Transpose** the matrix.
How? =>
The \*matrix syntax is used for unpacking the rows of the matrix. It's equivalent to passing each row of the matrix as a separate argument to the zip() function.
The zip() function then combines the elements with the same index from each argument into tuples. In this case, it combines the first elements of each row, the second elements, and so on.

> map(func,itr)

Map basically passess each element of itr to func for modification. Most common usage is **Taking User's Space separated Input** like this

```python
list(map(int, input().split(' ')))
```

> filter(func, itr)

Basic difference with map is that, `map` consider whole List and output contains the whole List manupulated by the Function.
Whereas `filter` can shorten the List based on the **Filter Condition** provided in the 1st arg.

```python
scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]
over_75 = list(map(lambda x: x>75, scores)) # [90, 76, 88, 81]
```

> has()

Using `hash()` in comparator operators is a bit **faster**

```python
hash(str('Fahads')==str('Fahad'))
```

### C++

> substr(start_point, length_to_be_cosidered)

Use `substr` in cpp for slicing.
**Example:**
name = 'Fahad'
cout << name.substr(2,2); -> ha
**substr(starting point, length to cut)**

## CP Quick Notes:

#### Binary Tree

- Try to know if you can traverse based on left or right subtree
- use **Recursive** or **Iterative** (using stack) solution
- Three Types of traversal are there

  - **InOrder:** Left Subtree > Root Node > Right Subtree
  - **PreOrder:** Root Node > Left Subtree > Right Subtree
  - **PostOrder:** Left Subtree > Right Subtree > Root Node

- Find New way of Tree Traversal: `Morris Traversal`

## SQL

Here we'll note down some key points that we must follow in times of
problem solving:

- Dont use `space` between condition. Also you can use <> instead of != symbol in SQL.

  - age != 22 [**wrong**]
  - age <> 22 / age!=22 [**correct**]

- Use `is` to compare `Equality` with `null` values. Like

  - name **is** null

- To find the length of a **string** use `Length` function

- If you use **left join** then the joined table will have all the contents of **first** table

- Remeber to ues `GROUP BY` when using **AGGREGATE** functions like `COUNT`

- To Find difference between dates use `DATEDIFF`

## Pandas

- _null_ is defined with **isna()**
- _Remove duplicate_ is done with **df.drop_duplicates()**
- _sorting values_ is done with **df['col_nam'].sort_values().values**
