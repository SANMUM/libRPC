# libRPC
基于c++11实现RPC

## 日志模块

```
LogEvent类用于指定日志事件类型(Unknown, Debug, Info, Error),打印日志消息的前缀信息，包括日志类型，时间（精准到ms）(进程号：线程号)等[%y-%m-%d %H:%M:%s.%ms]\t[pid:thread_id]\t[filename:line][%msg]

Logger类提供打印日志的方法、设置日志输出的路径，向缓冲区中载入数据
```