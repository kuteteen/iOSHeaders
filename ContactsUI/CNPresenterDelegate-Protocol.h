//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class UIViewController;

@protocol CNPresenterDelegate <NSObject>
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(UIViewController *)arg2;
- (void)sender:(id)arg1 presentViewController:(UIViewController *)arg2;
@end

