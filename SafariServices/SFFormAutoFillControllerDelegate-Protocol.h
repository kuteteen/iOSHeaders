//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSURL, _SFFormAutoFillController;

@protocol SFFormAutoFillControllerDelegate <NSObject>
- (_Bool)formAutoFillControllerShouldDisableAutoFill:(_SFFormAutoFillController *)arg1;
- (NSURL *)formAutoFillControllerURLForFormAutoFill:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(_SFFormAutoFillController *)arg1;

@optional
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(_SFFormAutoFillController *)arg1 completion:(void (^)(_Bool))arg2;
@end

