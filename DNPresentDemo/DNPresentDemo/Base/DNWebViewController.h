//
//  DNWebViewController.h
//  163Music
//
//  Created by zjs on 2018/8/1.
//  Copyright © 2018年 zjs. All rights reserved.
//

#import "BaseController.h"

@interface DNWebViewController : BaseController
// 精度条颜色
@property (nonatomic, strong) UIColor * progressColor;
// webView 加载的 URL 或者HTML富文本
@property (nonatomic, copy) NSString * urlString;
@end
