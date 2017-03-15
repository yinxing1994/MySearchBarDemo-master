//
//  DataModel.h
//  searchBarDemo
//
//  Created by yinxing on 16/7/5.
//  Copyright © 2016年 yinxing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject
@property(nonatomic,strong)NSString *content;
@property(nonatomic,strong)NSString *pinyin;


+(NSArray *)demoData;

@end
