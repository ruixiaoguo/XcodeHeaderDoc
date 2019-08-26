//
//  MainViewController.h
//  XcodeHeaderDoc
//
//  Created by grx on 2019/8/26.
//  Copyright © 2019 ruixiao. All rights reserved.
//

#import <UIKit/UIKit.h>
/*!
 
 @header MainViewController
 
 @abstract 主页控制器类
 
 @author guoruixiao
 
 */
NS_ASSUME_NONNULL_BEGIN

@interface MainViewController : UIViewController

/*!@method
 @abstract 获取所有json数据
 @discussion 获取所有json数据
 @param str 参数
 @result 成功ok 失败fail
 */
-(NSString *)gaintAllLocalData:(NSString *)str;

@end

NS_ASSUME_NONNULL_END
