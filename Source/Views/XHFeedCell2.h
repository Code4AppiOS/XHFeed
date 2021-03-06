//
//  XHFeedCell2.h
//  XHFeed
//
//  Created by 曾 宪华 on 13-12-12.
//  Copyright (c) 2013年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, FeedCell2Type) {
    PictureType,
    TextType
};

@interface XHFeedCell2 : UITableViewCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier FeedCellType:(FeedCell2Type)feedCellType;
@property (nonatomic, strong) UIImageView* profileImageView;

@property (nonatomic, strong) UIImageView* picImageView;

@property (nonatomic, strong) UIView* picImageContainer;

@property (nonatomic, strong) UILabel* nameLabel;

@property (nonatomic, strong) UILabel* updateLabel;

@property (nonatomic, strong) UILabel* dateLabel;

@property (nonatomic, strong) UILabel* commentCountLabel;

@property (nonatomic, strong) UILabel* likeCountLabel;

@end
