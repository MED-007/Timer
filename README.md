<!-- MED-007 /-->

# Timer.cpp

## Description

`Timer.cpp` is a simple console-based timer application written in C++. The program allows users to input hours, minutes, and seconds, and then displays a running clock. The time increments every second, and the display is updated in real-time.

## Features

- Input hours, minutes, and seconds.
- Real-time clock display that increments every second.
- Automatic handling of time overflow (e.g., 60 seconds roll over to the next minute).

## How to Use

1. **Clone the Repository**
   ```bash
   git clone https://github.com/MED-007/Timer.git
   ```
   
2. **Compile the Code**
   Ensure you have a C++ compiler installed. You can compile the code using g++:

   ```bash
   g++ Timer.cpp -o Timer
   ```

3. **Run the Program**
   After compiling, you can run the program from your terminal:

   ```bash
   ./Timer
   ```

4. **Input Time**
   - The program will prompt you to enter the hours, minutes, and seconds.
   - After entering the time, the clock will start and update every second.

## Example

```plaintext
Hours: 1
Minutes: 30
Seconds: 45
---------- Clock ----------

  1:30:45

---------------------------
```

## Requirements

- A C++ compiler (e.g., g++, Visual Studio).
- Windows OS (since the program uses `windows.h` and `Sleep()`).

## Notes

- The program uses the `system("cls")` command, which clears the console screen. This command is platform-specific (works on Windows).
- `Sleep(900)` is used to delay the update of the clock by 900 milliseconds.
