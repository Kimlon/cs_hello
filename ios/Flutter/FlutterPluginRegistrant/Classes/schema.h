// Autogenerated from Pigeon (v16.0.0), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class UserInfo;

///用户信息实体类
@interface UserInfo : NSObject
+ (instancetype)makeWithName:(nullable NSString *)name
    email:(nullable NSString *)email;
@property(nonatomic, copy, nullable) NSString * name;
@property(nonatomic, copy, nullable) NSString * email;
@end

/// The codec used by UserInfoApi.
NSObject<FlutterMessageCodec> *UserInfoApiGetCodec(void);

/// Description : 定义与原生通信--通过自动生成减少手写代码量
/// 请求参数和返回结果都必需是类结构 否则无法生成文件
/// - Flutter 调用 Native 方法 ( @HostApi() )
/// - Native 调用 Flutter 方法 ( @FlutterApi() )
/// Flutter 调用原生代码
@protocol UserInfoApi
/// 获取用户信息
///
/// @return `nil` only when `error != nil`.
- (nullable UserInfo *)getUserInfoWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpUserInfoApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<UserInfoApi> *_Nullable api);

NS_ASSUME_NONNULL_END
