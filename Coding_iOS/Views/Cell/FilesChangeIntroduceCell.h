//
//  FilesChangeIntroduceCell.h
//  Coding_iOS
//
//  Created by Ease on 15/6/1.
//  Copyright (c) 2015年 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FilesChangeIntroduceCell : UITableViewCell
- (void)setFilesCount:(NSInteger)filesCount insertions:(NSInteger)insertions deletions:(NSInteger)deletions;
+ (CGFloat)cellHeight;
@end
