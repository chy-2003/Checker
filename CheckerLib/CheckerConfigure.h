/*========== Programed By chy-2003 ==========*/


//This is a configure file to Checker.cpp
//**DO NOT REMOVE IT**

#define DEFAULT_BUILDER "g++ "
#define DEFAULT_MY "Main.cpp "
#define DEFAULT_STD "Std.cpp "
#define DEFAULT_DATAMAKER "Dmk.cpp "
#define DEFAULT_WAY_SHOW_DIFF "gvim -d "

#ifdef _WIN32
#  define DEFAULT_MY_RUNFILE "CheckerFiles\\My.exe "
#  define DEFAULT_STD_RUNFILE "CheckerFiles\\Std.exe "
#  define DEFAULT_DATAMAKER_RUNFILE "CheckerFiles\\Dmk.exe "
#  define DEFAULT_CHECKER "CheckerLib\\ncmp.cpp "
#  define DEFAULT_CHECKER_RUNFILE "CheckerFiles\\Judge.exe "
#  define DEFAULT_INPUT "CheckerFiles\\Input "
#  define DEFAULT_MY_OUT "CheckerFiles\\MyOut "
#  define DEFAULT_STD_OUT "CheckerFiles\\StdOut "
#  define DEFAULT_RESULT "CheckerFiles\\result.txt "
#  define DEFAULT_BUILDER_CONFIGURE "-std=c++11 -O2 -W -DONLINE_JUDGE -Wl,--stack=536870912 "
#endif

#ifdef __linux__
#  define DEFAULT_MY_RUNFILE "CheckerFiles/My "
#  define DEFAULT_STD_RUNFILE "CheckerFiles/Std "
#  define DEFAULT_DATAMAKER_RUNFILE "CheckerFiles/Dmk "
#  define DEFAULT_CHECKER "CheckerLib/ncmp.cpp "
#  define DEFAULT_CHECKER_RUNFILE "CheckerFiles/Judge "
#  define DEFAULT_INPUT "CheckerFiles/Input "
#  define DEFAULT_MY_OUT "CheckerFiles/MyOut "
#  define DEFAULT_STD_OUT "CheckerFiles/StdOut "
#  define DEFAULT_RESULT "CheckerFiles/result.txt "
#  define DEFAULT_BUILDER_CONFIGURE "-std=c++11 -O2 "
#endif


#include <string>
std::string Builder          = (std::string)DEFAULT_BUILDER           ;
std::string BuilderConfigure = (std::string)DEFAULT_BUILDER_CONFIGURE ;
std::string My               = (std::string)DEFAULT_MY                ;
std::string Std              = (std::string)DEFAULT_STD               ;
std::string DataMaker        = (std::string)DEFAULT_DATAMAKER         ;
std::string MyRunfile        = (std::string)DEFAULT_MY_RUNFILE        ;
std::string StdRunfile       = (std::string)DEFAULT_STD_RUNFILE       ;
std::string DataMakerRunfile = (std::string)DEFAULT_DATAMAKER_RUNFILE ;
std::string Checker          = (std::string)DEFAULT_CHECKER           ;
std::string CheckerRunfile   = (std::string)DEFAULT_CHECKER_RUNFILE   ;
std::string Input            = (std::string)DEFAULT_INPUT             ;
std::string MyOut            = (std::string)DEFAULT_MY_OUT            ;
std::string StdOut           = (std::string)DEFAULT_STD_OUT           ;
std::string Result           = (std::string)DEFAULT_RESULT            ;
std::string WayShowDiff      = (std::string)DEFAULT_WAY_SHOW_DIFF     ;


#undef DEFAULT_BUILDER
#undef DEFAULT_MY
#undef DEFAULT_STD 
#undef DEFAULT_DATAMAKER 
#undef DEFAULT_WAY_SHOW_DIFF 
#undef DEFAULT_MY_RUNFILE 
#undef DEFAULT_STD_RUNFILE 
#undef DEFAULT_DATAMAKER_RUNFILE 
#undef DEFAULT_CHECKER 
#undef DEFAULT_CHECKER_RUNFILE 
#undef DEFAULT_INPUT 
#undef DEFAULT_MY_OUT 
#undef DEFAULT_STD_OUT 
#undef DEFAULT_RESULT 
#undef DEFAULT_BUILDER_CONFIGURE 
