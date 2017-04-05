# NDK-json

NDK-json Android NDK json implementation from Niels Lohmann JSON for Modern C++ library
at https://github.com/nlohmann/json

## Description

This is a prof of concept to build some android NDK library using JSON for Modern C++

Create a new project with C/C++ support

In build.gradle add to cmake at externalNativeBuild secction    
 
 ```
                 arguments "-DANDROID_STL=c++_shared"
                 cppFlags "-std=c++11 -fexceptions"
 ```

## License

### No Copyright
The person who associated a work with this deed has dedicated the work to the public domain by waiving all of his or her rights to the work worldwide under copyright law, including all related and neighboring rights, to the extent allowed by law.

You can copy, modify, distribute and perform the work, even for commercial purposes, all without asking permission. See Other Information below.

### Other Information

- In no way are the patent or trademark rights of any person affected by CC0, nor are the rights that other persons may have in the work or in how the work is used, such as publicity or privacy rights.
- Unless expressly stated otherwise, the person who associated a work with this deed makes no warranties about the work, and disclaims liability for all uses of the work, to the fullest extent permitted by applicable law.
- When using or citing the work, you should not imply endorsement by the author or the affirmer.

Copy of the Legal Code at <http://creativecommons.org/publicdomain/zero/1.0/>.

