# Issue categories

When analysing code, classify each issue into one of the following categories.


## 🟠 Warning

> Is the compiler trying to warn me about a potential mistake?

The program can be built, but the compiler suspects something may be wrong.

**Example:** Assigning a `double` to an `int` and losing the decimal part.

---

## 🔴 Compiler Error

> Can this program even be compiled?

The program cannot be built. The compiler stops and no executable is created.

**Example:** Using a variable that does not exist or is out of scope.

---

## 🟣 Runtime Error

> Does my program crash?

The program can be built, but the program crashes after a while or certain action.

**Example:** The program crashes when an invalid input is given.

---

## 🟡 Logic Error

> Does the program produce the correct result?

The program runs, but it does not do what the programmer intended.

**Example:** Calculating an average using integer division and getting the wrong result.


---

## 🔵 Bad Style / Maintainability

> Would another programmer easily understand and maintain this code?

The code works, but it is difficult to understand, modify, or debug.

**Example:** Using variable names like `a` and `b`, or magic numbers such as `42`.


---

## ⚫ Undefined Behaviour (UB)

> Can I trust this code to always behave correctly?

The program does something the C++ language does not define. It might seem to work, crash, or behave differently on another computer.

**Example:** Using a variable before giving it a value.


---
