# SwiftCXX
Call C/C++ combined from Swift in windows 




# build
open CMakeLists.txt file and edit swiftc compiler path if not correct 

```bash
cmake .
cmake --build . --target all
cmake .
```





Copy The swift app (app.exe) to lib folder
and run the app from cmd

it should print
```bash
4
Hello From C++ Class
```
