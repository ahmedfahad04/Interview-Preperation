# Interview-Preperation

## Competitive Programming

### LeetCode 75 Problem list

- [Problem 3](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75)

- [Problem 4](https://leetcode.com/problems/can-place-flowers/?envType=study-plan-v2&envId=leetcode-75)

- [Problem 5 (Two Pointers)](https://leetcode.com/problems/reverse-vowels-of-a-string/?envType=study-plan-v2&envId=leetcode-75)

- [Problem 6 (Stack for String REVERSE)](https://leetcode.com/problems/reverse-words-in-a-string/?envType=study-plan-v2&envId=leetcode-75)

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

## Pandas

- _null_ is defined with **isna()**
- _Remove duplicate_ is done with **df.drop_duplicates()**
- _sorting values_ is done with **df['col_nam'].sort_values().values**

## Notes

1. Use `substr` in cpp for slicing.
   **Example:**
   name = 'Fahad'
   cout << name.substr(2,2); -> ha
   **substr(starting point, length to cut)**
