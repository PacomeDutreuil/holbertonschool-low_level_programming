# Memory Analysis

---

## Program 1: nom_du_fichier.c

### Step 1: Start of main

Stack:
- int a = 10 (0x...)
- int *p = &a (0x...)

Heap:
- empty

Notes:
- p points to a

---

### Step 2: Allocation

Code:
int *p = malloc(sizeof(int));

Stack:
- p = 0x1000

Heap:
- 0x1000 → uninitialized int

Notes:
- memory allocated on heap

---

### Step 3: Assignment

Code:
*p = 42;

Heap:
- 0x1000 → 42

---

### Step 4: Aliasing

Code:
int *q = p;

Stack:
- p → 0x1000
- q → 0x1000

Notes:
- p and q point to the same memory

---

### Step 5: Free

Code:
free(p);

Heap:
- 0x1000 → freed

Stack:
- p → 0x1000
- q → 0x1000

Notes:
- both p and q are now dangling pointers

---

### Step 6: Error Example

Code:
printf("%d", *q);

Problem:
- undefined behavior (use after free)

---

## AI Mistake Analysis

AI said:
"q is still valid because only p was freed"

Why this is wrong:
- free() releases the memory, not the pointer
- all pointers to that memory become invalid

Correction:
- q is also a dangling pointer
