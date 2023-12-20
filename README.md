# Interview-Preperation

## Competitive Programming

## Language Tricks

### Python

> heapify(\*itr)

heapify runs in linear time, and heappop is **O(logN)**, so **O(N)** is correct. It's efficient for sorting elements as usually the `sorted()` has complexity of **O(nlogn)** where as `heapify()` has complexity of **O(N)**.

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

> hash()

Using `hash()` in comparator operators is a bit **faster**

```python
hash(str('Fahads')==str('Fahad'))
```

> range()

This built-in function can be used seprately to generate a sequence of numbers

```python
print(list(range(1,5,1))) # 1 2 3 4
```

> Shalow copy vs Deep copy

In Python, the concepts of shallow copy and deep copy refer to the ways in which objects, especially complex ones like lists or dictionaries, are duplicated. These concepts are relevant when you want to create a copy of an existing object but need to be aware of how changes to the copy might affect the original.

### Shallow Copy:

A shallow copy creates a new object, but does not create new objects for the elements **inside** the original object. Instead, it copies references to the objects contained in the original. This means that if the elements inside the original object are mutable (e.g., lists or other objects), changes to those mutable elements will be reflected in both the original and the shallow copy.

```python
import copy

original_list = [1, [2, 3], 4]
shallow_copy = copy.copy(original_list)

# Modify an element inside the shallow copy
shallow_copy[1][0] = 'X'

print(original_list)   # [1, ['X', 3], 4]
print(shallow_copy)    # [1, ['X', 3], 4]
```

### Deep Copy:

A deep copy creates a completely independent copy of the original object along with all the objects nested within it. Changes made to the elements inside the deep copy do not affect the original object and vice versa.

```python
import copy

original_list = [1, [2, 3], 4]
deep_copy = copy.deepcopy(original_list)

# Modify an element inside the deep copy
deep_copy[1][0] = 'Y'

print(original_list)   # [1, [2, 3], 4]
print(deep_copy)       # [1, ['Y', 3], 4]
```

In summary:

- Shallow copy creates a new object but does not create new objects for nested elements.
- Deep copy creates a new object and recursively creates new objects for all nested elements.

When deciding whether to use a shallow or deep copy, consider the structure of your data and whether you want changes in the copy to affect the original or vice versa. If you need complete independence between the original and the copy, a deep copy is usually the safer choice.

> sort() vs sorted()

In Python, `sort()` and `sorted()` are both used for sorting elements in a list, but they have some key differences:

#### `sort()` method:

1. **In-place Sorting:**

   - `sort()` is a method that can be called on a list directly.
   - It performs an in-place sort, meaning it modifies the original list without creating a new one.

2. **Return Value:**

   - `sort()` returns `None`. It modifies the list in place and does not create a new list.

3. **Usage:**
   ```python
   numbers = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
   numbers.sort()
   print(numbers)
   # Output: [1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9]
   ```

#### `sorted()` function:

1. **New List:**

   - `sorted()` is a built-in function that returns a new sorted list and does not modify the original list.

2. **Return Value:**

   - `sorted()` returns a new sorted list. It does not modify the original list.

3. **Usage:**
   ```python
   numbers = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
   sorted_numbers = sorted(numbers)
   print(sorted_numbers)
   # Output: [1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9]
   ```

### Choosing between `sort()` and `sorted()`:

- If you want to sort a list in-place and don't need the original order, use `sort()`.
- If you want to keep the original list unchanged and get a sorted copy, use `sorted()`.

```python
# Using sort() in-place
numbers = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
numbers.sort()
print(numbers)  # Output: [1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9]

# Using sorted() to create a new sorted list
numbers = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
sorted_numbers = sorted(numbers)
print(sorted_numbers)  # Output: [1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9]
print(numbers)  # Original list is unchanged: [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
```

In summary, `sort()` is used for in-place sorting of lists, modifying the original list, while `sorted()` returns a new sorted list without modifying the original list.

> Decorators

In Python, decorators are a way to **modify or extend the behavior of functions or methods without changing their actual code**. They allow you to wrap a function with additional functionality. Decorators are denoted by the `@decorator` syntax.

Here's a short example:

```python
def my_decorator(func):
    def wrapper():
        print("Something is happening before the function is called.")
        func()
        print("Something is happening after the function is called.")
    return wrapper

@my_decorator
def say_hello():
    print("Hello!")

# Using the decorated function
say_hello()
```

In this example:

- `my_decorator` is a decorator function that takes another function (`func`) as its argument.
- `wrapper` is a nested function inside `my_decorator` that adds behavior before and after calling `func`.
- `@my_decorator` is applied to the `say_hello` function, effectively replacing `say_hello` with the result of `my_decorator(say_hello)`.
- When `say_hello()` is called, it is now the wrapped version provided by the decorator, and additional behavior is executed.

Output:

```
Something is happening before the function is called.
Hello!
Something is happening after the function is called.
```

Decorators are a powerful feature in Python, often used for tasks like **logging, authentication, or performance measurement.**

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
