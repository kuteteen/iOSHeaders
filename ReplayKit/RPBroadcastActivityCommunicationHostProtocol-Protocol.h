//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL;

@protocol RPBroadcastActivityCommunicationHostProtocol
- (oneway void)presentationInfoWithCompletion:(void (^)(long long, struct CGRect, unsigned long long))arg1;
- (oneway void)extensionDidFinishWithLaunchURL:(NSURL *)arg1 broadcastURL:(NSURL *)arg2 extensionBundleID:(NSString *)arg3 cancelled:(_Bool)arg4;
@end

