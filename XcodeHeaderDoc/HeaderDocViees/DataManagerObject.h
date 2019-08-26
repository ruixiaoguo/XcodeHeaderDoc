//
//  hih.h
//  ffff
//
//  Created by grx on 2019/8/26.
//  Copyright © 2019 ruixiao. All rights reserved.
//


#import <Foundation/Foundation.h>
/*!
 
 @header DataManagerObject
 
 @abstract 数据库管理类
 
 @author guoruixiao
  
 */
NS_ASSUME_NONNULL_BEGIN
@interface DataManagerObject : NSObject

/*! 查询数据方法 */
-(void)search;
/*! 输入数据方法 */
-(void)inPutmethed;
/*! 查找数据方法 */
-(void)fandMethed;
/*! 删除数据方法 */
-(void)deleteMethed;

@end

NS_ASSUME_NONNULL_END
