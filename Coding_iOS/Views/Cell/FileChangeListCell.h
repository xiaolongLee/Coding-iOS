//
//  FileChangeListCell.h
//  Coding_iOS
//
//  Created by Ease on 15/6/1.
//  Copyright (c) 2015年 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FileChange.h"

@interface FileChangeListCell : UITableViewCell
@property (strong, nonatomic) FileChange *curFileChange;
+ (CGFloat)cellHeight;

@end
