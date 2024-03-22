[![English](https://img.shields.io/badge/lang-English-blue.svg)](https://github.com/juho-creator/FEDEC-Exhibition/blob/main/README.md)
[![한국어](https://img.shields.io/badge/lang-한국어-red.svg)](https://github.com/juho-creator/FEDEC-Exhibition/blob/main/README.KR.md)

### AutoPrema 展示

### 一切的起源...
在介绍性工程课程中，每个小组都被分配了一个任务，要想出一个创造性的发明。我的队友们没有编程经验，所以他们不知道他们在做什么。作为新生，我的队友们想要过上他们"理想的大学生活"，与人们一起喝酒，不愿意把太多时间花在这个项目上。我是我们团队中唯一愿意投入所有时间和精力的人。所以开始起步很艰难。

我是一个新手程序员，所以我也迷失了方向。
我不知道如何自学 Arduino 编程、移动应用程序编程和电路设计。一切对我来说都是不可能完成的任务。

我无法完全独自做所有的事情。因此，我安排了与队友们短暂的会议，讨论各种发明的想法，并分配了一些不需要任何编程经验的简单任务给我的队友们。
（例如：原型的三维设计、制作 PowerPoint、撰写报告）

我将每个问题简化为可以每天完成的任务，并逐个解决它们。我每天自学 Arduino 编程、电路设计和移动应用程序编程。通过根据讨论的想法进行试错，我们提出了"AutoPrema"，并在 FEDEC 展览上赢得了创意奖。独自完成大部分工作是令人生畏的，但因为这是我热爱的事情，即使在绝望的情况下，我也能够继续前进。在 FEDEC 展览之后，我真正爱上了编程，所以我决定改变我的专业。

### 关于 AutoPrema
AutoPrema 是一台美容机器，根据天气信息喷洒适量的化妆品。

AutoPrema 帮助用户适量使用化妆品：
1. 预防因涂抹过量/不足的化妆品而导致的皮肤问题
2. 促进皮肤效果
3. 更有效地使用化妆品，延长使用时间

### AutoPrema 的内部构造
AutoPrema 包括 Arduino UNO、4 节 AA 电池、3 个 MOSFET、HC-05、3 个水泵和一个超声波传感器，它们都通过跳线连接在面包板上。([Arduino 电路](Circuit.png))

目前，AutoPrema 有 3 个化妆品瓶，每个瓶子里面都装有水泵电机。每个化妆品瓶都装有防晒霜、润肤霜和爽肤水。

### AutoPrema 的机制
用户启动应用程序，并通过蓝牙连接到 AutoPrema。当用户在应用程序中选择他们的位置时，从韩国气象管理局获取天气信息并显示在屏幕上。([来自韩国气象管理局的 RSS](https://www.weather.go.kr/w/pop/rss-guide.do))

一旦用户按下"喷雾"按钮，天气信息通过蓝牙发送到 AutoPrema。Arduino UNO 中实现的算法打开每个水泵一段时间，喷洒准确量的化妆品。([Arduino 代码](Arduino.ino))

### 如何使用 AutoPrema
1. 下载 AutoPrema 应用程序 ([下载](Mobile_App.aia))
2. 启动应用程序，并通过蓝牙连接到 AutoPrema 
3. 选择您的位置
4. 将手放在 AutoPrema 内部，并按下"喷雾"按钮

