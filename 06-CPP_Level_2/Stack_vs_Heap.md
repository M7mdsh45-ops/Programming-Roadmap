
### RAM Segments in C++ (Academic 4-Segment Model)

1. **Text (Code) Segment:**
* **Function:** Stores the compiled machine instructions of the program that the CPU executes.
* **Characteristics:** Typically marked as read-only to prevent the code from being accidentally modified while the program is running.


2. **Data Segment:**
* **Function:** Stores global variables and static variables.
* **Characteristics:** These variables persist for the entire lifetime of the program and retain their values.


3. **Stack:**
* **Function:** Stores local variables, function parameters, and return addresses.
* **Characteristics:** Extremely fast, managed fully and automatically by the compiler (created and destroyed when entering and exiting scopes), but has a limited size.


4. **Heap:**
* **Function:** Stores data allocated dynamically during run-time using the `new` keyword.
* **Characteristics:** Very large capacity, but management is entirely manual (requires `delete` to clean up and prevent memory leaks).



---

### Detailed Comparison: Stack vs. Heap

**1. Speed and Memory Management:**

* **Stack:** Very fast execution due to organized, automatic management (Last-In, First-Out).
* **Heap:** Slower compared to the stack, requiring manual management by the programmer using `new` and `delete`.

**2. Size and Storage Capacity:**

* **Stack:** Small and strictly limited in size; exceeding it results in a "Stack Overflow" error.
* **Heap:** Large capacity constrained only by the total available RAM on the system.

**3. Variable Lifetime:**

* **Stack:** Short-lived and temporary; destroyed automatically as soon as the scope or function ends.
* **Heap:** Persistent; lives until you explicitly delete it using `delete` or until the program terminates.
