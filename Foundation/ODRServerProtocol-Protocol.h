//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSArray, NSSet, NSURL;

@protocol ODRServerProtocol <NSObject>
- (void)setAlwaysPreserved:(_Bool)arg1 forTags:(NSSet *)arg2 inBundle:(NSURL *)arg3;
- (void)setPreservationPriority:(double)arg1 forTags:(NSSet *)arg2 inBundle:(NSURL *)arg3;
- (void)okToPurgeAssetPacks:(NSArray *)arg1;
- (void)unpinTags:(NSSet *)arg1 inBundle:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)setLoadingPriority:(double)arg1 forTags:(NSSet *)arg2 inBundle:(NSURL *)arg3;
- (void)conditionallyPinTags:(NSSet *)arg1 inBundle:(NSURL *)arg2 completionHandler:(void (^)(_Bool, NSDictionary *))arg3;
- (void)pinTags:(NSSet *)arg1 inBundle:(NSURL *)arg2 priority:(double)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)tagStateInBundle:(NSURL *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)beginODRSessionWithBundleURL:(NSURL *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)hello:(void (^)(void))arg1;
@end

