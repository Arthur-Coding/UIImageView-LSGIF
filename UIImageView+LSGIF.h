//
//  UIImageView+LSGIF.h
//
//  Created by ArthurShuai on 16/5/22.
//  Copyright © 2016年 ArthurShuai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (LSGIF)
/*
 加载本地 GIF 图片,只需要传入 GIF 图片的名字的即可,不需要后缀
 */
- (void)showGifImageWithGIFImageName:(NSString *)gifName;
/*
 加载网络 GIF 图片,只需要传入 GIF 图片链接地址字符串即可
 */
- (void)showGifImageWithURLString:(NSString *)urlString;

@end
