//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIInputViewControllerState;
@protocol _UIIVCResponseDelegate;

@protocol _UIIVCInterface <NSObject>
@property(retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate;
- (void)_handleInputViewControllerState:(_UIInputViewControllerState *)arg1;
- (void)_tearDownRemoteService;
@end

