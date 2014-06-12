Server端：
主要是接收客户端传输的数据，进行处理和入库
Client端:
主要是接收用户的录入数据，并发送至服务端处理
目前该项目只在局域网内使用
该项目主要使用Qt Widget框架
以后改用QML+C++处理
采用QML方便移植到移动操作系统中
目前数据库采用mysql，个人以后会改成sqlite，然后通过http将数据传输到服务端，这样使用起来，可以将服务端扩展，做到灵活使用
 //var tmpInfo=[tmpHeadImg,groupName,groupStatus,groupbrief,groupLimit,
    //groupdId,local_img_s,local_img_m,local_img_b,groupImg_s,groupImg_b,"1",
    //groupName,followId];