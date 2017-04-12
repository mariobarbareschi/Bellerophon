# BELLEROPHON #
## AN EVOLUTE SEARCH ENGINE FOR APPROXIMATE COMPUTING ##



### Introduction ###
------------


Bellerophon is a genetic optimization tool for approximate computing.
It is meant for using in collaboration with [clang-Chimera](https://github.com/ntonjeta/clang-chimera). Indeed, Clang-Chimera provides the code mutation feature, while Bellerophon uses Genetic Algorithm for explore approximate variants and finds the pareto-frontier solutions. Bellerophon includes the [ParadisEO](http://paradiseo.gforge.inria.fr/) metaheuristic framework.

For more details about Bellerophon, visit the website [void](null)


### Install ###

#### Requirement ####
-------------

Bellerophon requires LLVM/Clang3.9.1 compiled with following flag: 

* -DLLVM_ENABLE_CXX1Y=true
* -DLLVM_ENABLE_RTTI=ON

NOTE: Bellerophon is developed and tested on a x86 architecture. In case you want run with other architectures, you have to make some changes:

After install LLVM/Clang3.9.1 on your architecture launch:

    llvm-config --componetns

Take output and in CMakeLists.txt at instruction "llvm_map_components_to_libnames", change the list of components after llvm_libs with list of components outputed from previous command.  

Bellerophon requires as a genetic algorithm framework the ParadisEO library avaiable at this link:
 
* http://paradiseo.gforge.inria.fr/



#### Quick Start ####
--------

For use bellerophon you can build it from source, as follow:

    git clone https://github.com/ntonjeta/Bellerophon
    cd Bellerophon
    mkdir build
    cd build
    cmake ../ 
    make
    sudo make install

#### Docker Container - for compiling unenthusiastic ### 

Or you can use docker image for build a [container](https://github.com/ntonjeta/iidea-Docker)

### How To Use ###i
Running the Bellerophon tool without input parameters print this short helper:

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

Bellerophon takes some inputs for testing the approimate variants.
First, with -cd-dir flag it takes a [compilation database](http://clang.llvm.org/docs/JSONCompilationDatabase.html), useful for provide compilation commands to the JIT engine.
With -r flag you can pass a report in CSV format that specifies in which place of the code Bellerophon has to apply approximation techniques. 
This two inputs usually are geenerated and provided by [clang-Chimera](https://github.com/ntonjeta/clang-chimera).

Bellerophon takes other inputs, such as the particular approximate computing technique that has to be applied by using the -t flag. 
The flag -P provides a path to a .param file that specifies Genetic Algorithm parameters.
Finaly, it is mandatory to specify a <tau> value, which is considered as the maximum error that each approximate configuration causes.   


#### Example ####
-------- 

You can test a simple exampe provide in repository, simply run the launch script.
The example uses the bit lenght reduction approximate tecnhnique provided by [FLAP library](https://github.com/Ghost047/Fap) 

### LICENSE ###
--------

* [GPLV3.0](https://www.gnu.org/licenses/licenses.html)

### Contributing ###
----------

Github is for social coding: if you want to write code, I encourage contributions through pull requests from forks of this repository. 
