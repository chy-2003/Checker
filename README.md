## Checker ： 一款适用于 OIer 和 ACMer 的实用对拍

version : 1.0

就是个对拍嘛……大概大家都会吧。。。

但是你有没有为答案是浮点数而烦恼？或者觉得 diff 太难用？或是需要一个 special judge ?

这一款 checker 可以帮助你解决这个问题。它可以运行在 linux 平台和 windows 平台。

### 使用说明

由于 checker 是一个命令行工具，所以建议 windows 用户配合 cmder 一起使用。将终端窗口调大以获得更好地视觉体验。

#### 基础使用

首先，你需要下载 checker 的源码，然后编译它。假设你现在将 ```Checker.cpp``` 和其他文件（不要改变相对路径） 放在 ```Checker``` 文件夹下，那么现在执行 ：

```bash
g++ Checker.cpp -o Checker
```



如果你只需要简单地比较整数（忽略空格和换行），并且不嫌麻烦的话，那么就可以这样做：

将 ```Main.cpp``` ， ```Std.cpp``` 和 ```Dmk.cpp``` 放在和可执行文件（ ```Checker``` 或是 ```Checker.exe```）同一个文件夹下。然后 **在命令行里 ** 运行 Checker 即可（```./Checker``` for linux and ```Checker.exe``` for windows）。

接下来它会编译文件（可能要花一段时间），然后运行。你可以看到：

> 测试点标号；
>
> 一个箭头（->）：表示 Dmk 已执行完毕；
>
> 你的程序此次运行时间（Cur） 和平均运行时间 （Avr）。单位毫秒。绿色表示一秒之内，蓝色表示1~3秒，黄色表示3~5秒，红色表示 5 秒以上；
>
> 标程的运行信息（同上）；
>
> 测试结果（应该和 Codeforces 的结果差不多，大家都懂）。

如果对拍一段时间没有停止，那么恭喜，你的程序 **大概** 是正确的了。你可以按 Ctrl+C 强制停止。

产生的文件全部在 ```CheckerFiles``` 文件夹下， ```Input``` 为当前输入， ```MyOut``` 是 ```Main.cpp``` 的输出， ```StdOut``` 是 ```Std.cpp``` 的输出。

下载的文件中应该已经有 a+b problem 的几个文件了，可以直接运行感受一下。

#### 更近一步

checker 使用了 ```testlib.h``` （见Thanks），并使用了相关的文件（如 ```ncmp.cpp```）。也就是说，当前默认的比较器是 ```ncmp``` ，并且 checker 支持使用 ```testlib.h``` 的 special judge 。

你可以在 ```CheckerLib\CheckerConfigure.h``` 看到大部分设置，同时这也意味着更改设置之后需要重新编译 checker 。（我知道这样设计很愚蠢，但是开发时间有限，就先这样了。）建议不要修改 define 的 DEFAULT 部分，可以直接修改下面的赋值部分。

你可以下载更多的比较器模板（如 ```wcmp``` 和```icmp``` ，见Thanks）或者根据 ```testlib``` 来写自己的 special judge 。

#### 参与开发

如果你有好的点子，或者发现了 bug ，可以发 issue  ，或者是直接发 pull request 。也可以联系 ```chy-2003``` （见 Developer）。

#### 将会到来的功能（也许吧）

> * 上面提到的，将 configure 写成一个另外的文件，而不是 .h 。
> * 预编译一些常用比较器，而不是每次调用 checker 时都花五六秒编译一遍。（这可能需要一个 Installer 来实现。）
> * 增加比较信息记录。（或许只记录 fail 的测试点？目前还没有明确的想法。）
> * 增加根据 problem configure 来实现指定一些数据进行测试。（就像一键跑所有大样例。）
> * 设置时空限制？或者更接近 Online Judge ？ 大概这些都是后话了吧。。。

### Developer

[chy-2003](https://www.cnblogs.com/chy-2003)

### Thanks

[MikeMirzayanov/testlib](https://github.com/MikeMirzayanov/testlib)

### LICENSE

MIT license

