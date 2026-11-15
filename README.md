# DSA01 – Assignment 4: Designing Reusable Class Hierarchies

**Name: P Rahul Sai
**Register Number:192524226
**Course:** Object Oriented Programming with C++ (DSA01)  
**Course Outcome:** CO4  
**Compiler:** g++ 14.2.0 (C++17)  
**Compile command:** `g++ -std=c++17 -Wall -Wextra -pedantic source.cpp -o program`  
**Sanitizer command (Task 4):** `g++ -std=c++17 -Wall -Wextra -fsanitize=address -fno-omit-frame-pointer Task04/original_defects.cpp -o original_defects`

## How to run
Open a terminal in the repository root. Compile a program using the command above, replacing `source.cpp` and `program` with the required file and executable name. Run on Linux/macOS with `./program`; on Windows MinGW use `program.exe`.

## Task folders and results

| Folder | Program(s) | Result |
|---|---|---|
| Task01 | `staff_hierarchy.cpp` | Uses an abstract Staff base class and overridden `pay()` methods; all staff are processed in one loop. |
| Task02 | `virtual_diamond.cpp`, `diamond_without_virtual.cpp` | Virtual inheritance creates one shared Person subobject; without virtual, two Person constructors run. |
| Task03 | `construction_trace.cpp`, `teaching_assistant_trace.cpp`, `complete_student.cpp`, `initializer_order.cpp` | Demonstrates initializer lists, member classes and reverse destruction order. Complete-code output matches the expected line. |
| Task04 | `account_polymorphism.cpp`, `predict_binding_slicing.cpp`, `original_defects.cpp` | Demonstrates runtime dispatch, virtual destruction, object slicing and the defective raw-pointer design. |
| Task05 | `cart.cpp` | Demonstrates direct, pointer, reference and dynamic access; `this`-based chaining produces 324.00. |
| Task06 | `vehicle_fleet.cpp` | Implements an abstract Vehicle hierarchy, rent/return operations and extension with ElectricBus. |

## Output evidence
Text output captures are stored in `outputs/`. `outputs/*.png` contains terminal-style screenshots. Compiler warning evidence is in `outputs/initializer_order_warning.txt`; sanitizer output (if supported by the runtime) is in `outputs/original_defects_asan.txt`.

## Submission checklist
- [ ] Replace name and register-number placeholders.
- [ ] Add the actual GitHub repository URL to this README and the report cover page.
- [ ] Review every source file and run it on your own college/lab system.
- [ ] Create repository `DSA01-<RegisterNumber>-Assignment4`.
- [ ] Commit progressively, at least one commit per task (do not upload `.git` internals through the browser).
- [ ] Share the repository with faculty and submit the repository link plus report on Google Classroom.

**Note:** This folder is prepared locally. It has not been pushed to GitHub or submitted to Google Classroom.
