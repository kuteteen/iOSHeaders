//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INImage;

@protocol INExtensionContextHosting <NSObject>
- (void)extensionContextVendorFetchSizeForImage:(INImage *)arg1 reply:(void (^)(struct, NSError *))arg2;
- (void)extensionContextVendorWantsToCacheImage:(INImage *)arg1;
@end
