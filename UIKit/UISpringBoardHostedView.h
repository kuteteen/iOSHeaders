//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface UISpringBoardHostedView : UIView
{
    NSString *_remoteViewIdentifier;
    UIWindow *_remoteWindow;
    _Bool _remoteViewOpaque;
}

- (void).cxx_destruct;
- (id)remoteViewIdentifier;
- (void)unregister;
- (void)dealloc;
- (void)registerWithIdentifier:(id)arg1 andController:(id)arg2;
- (void)setRemoteViewOpaque:(_Bool)arg1;

@end

