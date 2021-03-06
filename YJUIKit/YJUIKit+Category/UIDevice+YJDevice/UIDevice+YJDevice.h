//
//  UIDevice+YJDevice.h
//  YJFoundationDemo
//
//  Created by Moyejin668 on 2020/1/16.
//  Copyright © 2020 Moyejin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (YJDevice)

#pragma mark - 设备相关
/**
 获取系统版本号
 
 @return 返回系统版本号
 */
+ (NSString *)yj_getSystemVersion;

/**
 获取设备名称
 
 @return 返回真机或模拟器设备名称
 */
+ (NSString *)yj_getDeviceName;

/**
 获取设备类型
 
 @return 返回iPhone, iPod Touch, iPad其中之一的设备类型
 */
+ (NSString *)yj_getDeviceModelType;

/**
 获取设备的唯一标识符
 
 @return 获取设备的唯一标识符, 格式是:"E621E1F8-C36C-495A-93FC-0C247A3E6E5F"
 */
+ (NSString *)yj_getUUIDString;

/**
 获取设备是否是X系列
 
 @return BOOL
 */
+ (BOOL)yj_isXDeviceModel;

/**
 获取对应的设备名称
 
 @return NSString
 */
+ (NSString *)yj_getCurrentDeviceModelName;

/**
 获取设备是否是iPhone UI
 
 @return BOOL
 */
+ (BOOL)yj_isPhone;

/**
 获取设备是否是iPad UI
 
 @return BOOL
 */
+ (BOOL)yj_isPad;

/**
 获取设备是否是Car Play UI
 
 @return BOOL
 */
+ (BOOL)yj_isCarPlay API_AVAILABLE(ios(9.0));

/**
 获取设备是否是Apple TV UI
 
 @return BOOL
 */
+ (BOOL)yj_isTV API_AVAILABLE(ios(9.0));

/**
 获取设备是否是模拟器
 
 @return BOOL
 */
+ (BOOL)yj_isSimulator;

/**
 获取设备是否已越狱
 
 @return BOOL
 */
+ (BOOL)yj_isJailbroken;

#pragma mark - CPU相关
/**
 获取当前设备的CPU数量
 
 @return NSUInteger
 */
+ (NSUInteger)yj_getCurrentDeviceCPUCount;

/**
 获取当前设备CPU总的使用百分比
 
 @return CGFloat
 */
+ (CGFloat)yj_getCurrentDeviceAllCoreCPUUse;

/**
 获取当前设备单个CPU使用的百分比
 
 @return NSArray;
 */
+ (NSArray *)yj_getCurrentDeviceSingleCoreCPUUse;

#pragma mark - 网络相关
/**
 获取当前连接的WiFi Mac地址
 
 @return NSString
 */
+ (NSString *)yj_getMacAddress;

/**
 获取当前网络运营商的名称
 
 @return 中国移动/中国联通/中国电信或者其他运营商
 */
+ (NSString *)yj_getCarrierName;

/**
 获取当前网络的类型
 
 @return 2G/3G/4G/WiFi或者未来的一些网络类型
 CTRadioAccessTechnologyGPRS            //介于2G和3G之间，也叫2.5G ,过度技术
 CTRadioAccessTechnologyEdge            //EDGE为GPRS到第三代移动通信的过渡，EDGE俗称2.75G
 CTRadioAccessTechnologyWCDMA           //
 CTRadioAccessTechnologyHSDPA           //亦称为3.5G(3?G)
 CTRadioAccessTechnologyHSUPA           //3G到4G的过度技术
 CTRadioAccessTechnologyCDMA1x          //3G
 CTRadioAccessTechnologyCDMAEVDORev0    //3G标准
 CTRadioAccessTechnologyCDMAEVDORevA
 CTRadioAccessTechnologyCDMAEVDORevB
 CTRadioAccessTechnologyeHRPD           //电信使用的一种3G到4G的演进技术， 3.75G
 CTRadioAccessTechnologyLTE             //接近4G
 
 @return NSString
 */
+ (NSString *)yj_getCurrentRadioAccessTechnology;

/**
 获取当前设备的IP地址
 
 @return NSString
 */
+ (NSString *)yj_getCurrentDeviceIPAddresses;

/**
 获取当前DNS服务器IP地址
 
 @return NSString
 */
+ (NSString *)yj_getCurrentDNSServers;

/**
 获取当前设备的WiFi地址
 
 @return NSString
 */
+ (NSString *)yj_getCurrentDeviceIPAddressWithWiFi;

/**
 获取当前设备的单元网络地址
 
 @return NSString
 */
+ (NSString *)yj_getCurrentDeviceIPAddressWithCell;

#pragma mark - 存储相关

/**
 获取设备的总存储大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getDiskSpace;

/**
 获取设备可用存储大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getDiskSpaceFree;

/**
 获取设备已用存储大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getDiskSpaceUsed;

#pragma mark - 内存相关
/**
 获取设备的总内存大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getMemoryTotal;

/**
 获取可用的内存大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getMemoryFree;

/**
 获取正在活跃中的内存大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getMemoryActive;

/**
 获取非活跃中的内存大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getMemoryInactive;

/**
 获取设备中有线的内存大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getMemoryWired;

/**
 获取可清除的内存大小, 单位为Byte
 
 @return int64_t
 */
+ (int64_t)yj_getMemoryPurgable;

@end

NS_ASSUME_NONNULL_END
