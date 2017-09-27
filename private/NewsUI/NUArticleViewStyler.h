//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUArticleViewStyler.h"

@class UIColor;

@interface NUArticleViewStyler : NSObject <NUArticleViewStyler>
{
    long long _statusBarStyle;
    long long _topBackgroundStatusBarStyle;
    UIColor *_backgroundColor;
    UIColor *_tabBarTintColor;
    UIColor *_toolBarTintColor;
}

@property(retain, nonatomic) UIColor *toolBarTintColor; // @synthesize toolBarTintColor=_toolBarTintColor;
@property(retain, nonatomic) UIColor *tabBarTintColor; // @synthesize tabBarTintColor=_tabBarTintColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) long long topBackgroundStatusBarStyle; // @synthesize topBackgroundStatusBarStyle=_topBackgroundStatusBarStyle;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void).cxx_destruct;
- (long long)statusBarStyleForBackgroundColor:(id)arg1;
- (void)unstyleToolbar:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (void)unstyleTabBar:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 topBackgroundColor:(id)arg2;

@end

