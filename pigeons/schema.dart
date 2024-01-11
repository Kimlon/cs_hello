import 'package:pigeon/pigeon.dart';

/// Description : 定义与原生通信--通过自动生成减少手写代码量
/// 请求参数和返回结果都必需是类结构 否则无法生成文件
/// - Flutter 调用 Native 方法 ( @HostApi() )
/// - Native 调用 Flutter 方法 ( @FlutterApi() )

///Flutter 调用原生代码
@HostApi()
abstract class UserInfoApi {
  ///获取用户信息
  UserInfo getUserInfo();
}

///用户信息实体类
class UserInfo {
  String? name;
  String? email;
}
