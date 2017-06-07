//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NEConfiguration, NSDictionary, NSString;

@protocol NEExtensionProviderProtocol <NSObject>
- (void)stopWithReason:(int)arg1;
- (void)startWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setConfiguration:(NEConfiguration *)arg1 extensionIdentifier:(NSString *)arg2 deviceIdentifier:(NSString *)arg3;
- (void)dispose;
- (void)wake;
- (void)sleepWithCompletionHandler:(void (^)(void))arg1;
@end

