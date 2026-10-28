# Programming Paradigms Lab (Semester 3)

Lab work for the Programming Paradigms course, B.Tech CSE at Manipal Institute of Technology. The first five weeks are in C and the rest are in Java.

| Week | Language | Topic |
| ---- | -------- | ----- |
| 1 | C | Parameter passing and parameter safety |
| 2 | C | Pointers |
| 3 | C | Functions with arrays and structures |
| 4 | C | Recursion and linked lists |
| 5 | C | Process memory layout |
| 6 | Java | Inheritance and interfaces |
| 7 | Java | Collections: `ArrayList`, `HashSet` and `HashMap` |
| 8 | Java | Class hierarchies and polymorphism |
| 9 | Java | Reflection and dynamic class loading |
| 10 | Java | Threads |

`LabMidSem/` has the lab mid-semester paper and my C solution.

## Layout

```text
Week1/ ... Week10/
├── Experiment*.c or Question*.java   my solutions
└── PDFs from the course              manuals and reference notes
```

## Run a solution

```bash
gcc Week2/Experiment3.c -o exp && ./exp                      # C weeks
javac -d out Week10/Question1.java && java -cp out week10.Question1   # Java weeks
```

Java files in Weeks 7 to 10 start with a `package` line (for example `package week10;`), so compile from the repo root and run by the full name. Week 3 keeps its programs in sub-folders.
