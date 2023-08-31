[33mcommit 3253ad367b64340bcaccf79fd79a86f72522b6f2[m[33m ([m[1;36mHEAD -> [m[1;32mmain[m[33m, [m[1;31morigin/main[m[33m)[m
Author: justin morton <nukeshadows@gmail.com>
Date:   Wed Aug 30 14:19:22 2023 -0700

    adjusted default build to fix compiler error

[1mdiff --git a/Using Inheritance for is -a Relationships/Using Public Inheritance/v01/.vscode/tasks.json b/Using Inheritance for is -a Relationships/Using Public Inheritance/v01/.vscode/tasks.json[m
[1mindex d2f5dcd..733daf9 100644[m
[1m--- a/Using Inheritance for is -a Relationships/Using Public Inheritance/v01/.vscode/tasks.json[m	
[1m+++ b/Using Inheritance for is -a Relationships/Using Public Inheritance/v01/.vscode/tasks.json[m	
[36m@@ -9,7 +9,7 @@[m
                 "-std=c++20",[m
                 "-fdiagnostics-color=always",[m
                 "-g",[m
[31m-                "${fileworkspaceFolder}/*.cpp", [m
[32m+[m[32m                "${fileworkspaceFolder}/*.cpp",[m
                 "-o",[m
                 "${fileDirname}/${fileBasenameNoExtension}"[m
             ],[m
[36m@@ -24,6 +24,29 @@[m
                 "isDefault": true[m
             },[m
             "detail": "compiler: C:/msys64/mingw64/bin/g++.exe"[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "type": "cppbuild",[m
[32m+[m[32m            "label": "C/C++: g++.exe build active file",[m
[32m+[m[32m            "command": "C:/msys64/mingw64/bin/g++.exe",[m
[32m+[m[32m            "args": [[m
[32m+[m[32m                "-fdiagnostics-color=always",[m
[32m+[m[32m                "-g",[m
[32m+[m[32m                "${file}",[m
[32m+[m[32m                "-o",[m
[32m+[m[32m                "${fileDirname}\\${fileBasenameNoExtension}.exe"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "options": {[m
[32m+[m[32m                "cwd": "C:/msys64/mingw64/bin"[m
[32m+[m[32m            },[m
[32m+[m[32m            "problemMatcher": [[m
[32m+[m[32m                "$gcc"[m
[32m+[m[32m            ],[m
[32m+[m[32m            "group": {[m
[32m+[m[32m                "kind": "build",[m
[32m+[m[32m                "isDefault": true[m
[32m+[m[32m            },[m
[32m+[m[32m            "detail": "compiler: C:/msys64/mingw64/bin/g++.exe"[m
         }[m
     ][m
 }[m
\ No newline at end of file[m
[1mdiff --git a/Using Inheritance for is -a Relationships/Using Public Inheritance/v01/main_v01.exe b/Using Inheritance for is -a Relationships/Using Public Inheritance/v01/main_v01.exe[m
[1mindex fa64fa8..684d3ff 100644[m
Binary files a/Using Inheritance for is -a Relationships/Using Public Inheritance/v01/main_v01.exe and b/Using Inheritance for is -a Relationships/Using Public Inheritance/v01/main_v01.exe differ
