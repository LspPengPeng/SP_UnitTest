//
//  ViewController.h
//  SP_UnitTest
//
//  Created by Eleven_Liu on 2018/3/15.
//  Copyright © 2018年 Eleven_Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (NSInteger)sum:(NSInteger)num;

- (void)sendRequest:(void(^)(id))finished;

@end

