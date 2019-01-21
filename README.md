# Bellerophon 
[![Build Status](https://travis-ci.org/andreaaletto/Bellerophon.svg?branch=master)](https://travis-ci.org/andreaaletto/Bellerophon) 


An evolute search engine for ***Approximate Computing***.


## Introduction

Bellerophon is a genetic optimization tool for approximate computing.
It is meant for using in collaboration with [clang-Chimera](https://github.com/ntonjeta/clang-chimera). Indeed, Clang-Chimera provides the code mutation feature, while Bellerophon uses Genetic Algorithm for explore approximate variants and finds the pareto-frontier solutions. Bellerophon includes the [ParadisEO](http://paradiseo.gforge.inria.fr/) metaheuristic framework.

**Bellerophon** is part of the IIDEAA project. For further information, please refer to [IIDEA website](http://wpage.unina.it/mario.barbareschi/iideaa/handson/).


## Build Bellerophon from source
Now you will understand how to compile and install Bellerophon correctly.

#### Install LLVM/Clang
------------
Bellerophon is intended to be used together with [Clang-Chimera](https://github.com/andreaaletto/clang-chimera), so you need to install LLVM/Clang in the same way as specified in [Clang-Chimera](https://github.com/andreaaletto/clang-chimera) readme, so please refer to its section _Install LLVM/Clang_.

#### Install ParadisEO
-------------

Bellerophon requires [ParadisEO](http://paradiseo.gforge.inria.fr/) metaheuristics framework. Use the following commands to download and install ParadisEO 2.0.1:

```
$ cd ~
$ wget https://gforge.inria.fr/frs/download.php/31732/ParadisEO-2.0.1.tar.gz
$ tar xvfz ParadisEO-2.0.1.tar.gz && rm -f ParadisEO-2.0.1.tar.gz
$ cd ParadisEO-2.0
$ mkdir build && cd build
```
Before running CMake, it is necessary to solve an issue due to the latest version of "CMake Policy Requirement". This issue can be easily solved, by upgrading to 3.3 the minimum CMake version of the package _eo_. 
```
$ sed -i "s/CMAKE_MINIMUM_REQUIRED(VERSION 2.6)/CMAKE_MINIMUM_REQUIRED(VERSION 3.3)/g" ../eo/CMakeLists.txt
```

Now it is possible to run CMake configuration. As well as Clang-Chimera, also for Bellerophon, a compilation with [Ninja](https://ninja-build.org/) building tool is recomended, in order to exploit the multicore platform by default.
```
$ cmake .. -G Ninja
$ ninja
$ sudo ninja install
```

#### Install Bellerophon
-------------
First of all you need to download Bellerophon source and prepare it to the building phase:
```
cd ~
git clone https://github.com/andreaaletto/Bellerophon.git
cd Bellerophon
mkdir build && cd build
```
In order to build Bellerohon it is necessary to adjust the ```CMakeLists.txt``` file, substituting the placeholder ```insert-llvm-libs-here``` with the currently installed LLVM components:
```
$ LLVM_LIBS="$(llvm-config --components)" && sed -i "s/insert-llvm-libs-here/${LLVM_LIBS}/g" ~/Bellerophon/CMakeLists.txt
$ sed -i "s/all-targets //g" ~/Bellerophon/CMakeLists.txt
```
Now you can run CMake, linking Bellerophon configuration to ParadisEO cmake script. Assuming ParadisEO source to be located in ```~/ParadisEO-2.0```, run the following commands:
```
$ cmake .. -DCMAKE_MODULE_PATH=~/ParadisEO-2.0/cmake/module/ -G Ninja
$ ninja
$ sudo ninja install
```
At the end of the process you will find Bellerophon in ``` /usr/bin```. Try run:
``` 
$ bellerophon -version
``` 

## How To Use
Running bellerophon without input parameters, it will print the following short helper:
``` 
    OVERVIEW: Launch a design space exploration over a C/C++ project compiled just-in-time

    USAGE: bellerophon [subcommand] [options] <tau> <source0> [... <sourceN>]

    OPTIONS:

    Bellerophon:
    Options for the Bellerophon tool

     -P=<path>                                 - Specify the path of the parent directory of a .param file
     -arcs=<archive object-path>               - Specify an archive object, or multiple comma separated, to load when linking the executable. It can be specified multiple times
     -cd-dir=<cd-dir>                          - Specify the path of a parent directory in which search for a compile_database.json file
     -extra-arg=<string>                       - Additional argument to append to the compiler command line
     -extra-arg-before=<string>                - Additional argument to prepend to the compiler command line
     -l                                        - Show approximate technique list
     -libdb=<string>                           - Specify the patch in which of the parent directory of a library_database.csv file
     -objs=<path to object file ('.o' , '.so'> - Specify an object, or multiple comma separated, to load when linking the executable. It can be specified multiple times
     -p=<string>                               - Build path
     -r=<string>                               - Report produced by Approximation Operator
     -t=<string>                               - Select the approximate technique to apply
     -test                                     - Simple test
     -v                                        - Enable verbose outputs
    
    Generic Options:

     -help                                     - Display available options (-help-hidden for more)
     -help-list                                - Display list of available options (-help-list-hidden for more)
     -version                                  - Display the version of this program
``` 

Bellerophon takes some inputs for testing the approximate variants.
First, with ```-cd-dir``` flag, it takes a [compilation database](http://clang.llvm.org/docs/JSONCompilationDatabase.html), useful to provide compilation commands to the JIT engine.
With ```-r```  flag you can pass a report in CSV format that specifies in which place of the code Bellerophon has to apply approximation techniques. 
This two inputs usually are generated and provided by [Clang-Chimera](https://github.com/andreaaletto/clang-chimera).

Bellerophon takes other inputs, such as the particular approximate computing technique that has to be applied by using the ```-t``` flag. 
The flag ```-P``` provides a path to a ``` .param```  file that specifies Genetic Algorithm parameters.
Finally, it is mandatory to specify a __tau__ value, which is considered as the maximum error that each approximate configuration causes.

## Quick Start
If you don't want to build LLVM/Clang and Bellerophon from scratch, a ready-to-use solution is provided through a [Docker](https://www.docker.com/) Container. Please refer to [IIDEAA Docker](https://github.com/andreaaletto/iideaa-docker) repository for further details.

#### LICENSE
--------

* [GPLV3.0](https://www.gnu.org/licenses/licenses.html)

#### Contributing
----------

Github is for social coding: if you want to write code, I encourage contributions through pull requests from forks of this repository. 
