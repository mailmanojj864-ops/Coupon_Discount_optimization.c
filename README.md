# 🏷️ Coupon Discount Optimization – C Program

This repository contains a **C program** that determines whether applying a **coupon** results in a cheaper total cost compared to paying the normal price.

---

## 📌 Problem Statement

You are given:

* `n` → Number of items
* `x` → Coupon activation cost
* `y` → Maximum discounted price limit per item
* `prices[]` → Array containing the prices of all items

### Goal:

Determine whether using the **coupon** results in a **lower total cost** than paying the **normal total price**.

---

## 🧠 Approach

1. **Normal Sum Calculation:**

   * Sum all item prices directly.

2. **Discounted Sum Calculation:**

   * Start with coupon activation cost `x`.
   * For each item:

     * If `price > y`, add `(price - y)` to the discounted total.
     * Else, no extra cost is added.

3. **Comparison:**

   * If `discountedSum < normalSum`, return `"COUPON"`.
   * Otherwise, return `"NO COUPON"`.

---

## ⏱️ Time & Space Complexity

| Complexity Type | Value |
| --------------- | ----- |
| **Time**        | O(n)  |
| **Space**       | O(1)  |

---

## 🧪 Sample Input & Output

### Input:

```
n = 4  
x = 20  
y = 10  
prices = [5, 15, 8, 25]
```

### Output:

```
COUPON
```

---

## 🎯 Key Concepts Used

* Arrays
* Loops
* Conditional Statements
* Time Complexity Optimization

---

## 🚀 Why This Problem Matters

* Improves **logical thinking**
* Strengthens **array traversal**
* Enhances **decision-based programming**
* Common in **competitive programming & interviews**

---

