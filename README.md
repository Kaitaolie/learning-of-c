# learning-of-c

A repository to record my C learning: notes, exercises and example programs.

## Structure

- `helloworld/` — a simple Hello World example in C++/C.

## Prerequisites

- A C/C++ toolchain (for example MSYS2/MinGW-w64 with `g++`).

## Build example

From the workspace root you can build the example into `bin`:

```powershell
# create bin (if needed) and build
if (-not (Test-Path .\bin)) { New-Item -ItemType Directory -Path .\bin }
C:\msys64\ucrt64\bin\g++.exe -g .\helloworld\helloworld.cpp -o .\bin\helloworld.exe
```

## Tip

- If you use Git through Clash, enable TUN mode before using `git`.
