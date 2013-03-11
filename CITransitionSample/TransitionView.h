//
//  TransitionView.h
//  CITransitionSample
//
//  Created by shuichi on 13/03/10.
//  Copyright (c) 2013年 Shuichi Tsutsumi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TransitionView : UIView

- (void)changeTransition:(NSUInteger)transitionIndex;
- (NSString *)currentFilterName;

@end
