//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKJSTabBar;

@interface IKAppTabBar : NSObject
{
    id <IKAppTabBarController> _controller;
    IKJSTabBar *_jsTabBar;
}

@property(nonatomic) __weak IKJSTabBar *jsTabBar; // @synthesize jsTabBar=_jsTabBar;
@property(readonly, nonatomic) __weak id <IKAppTabBarController> controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)onSelect;
- (id)initWithTabBarController:(id)arg1;

@end

