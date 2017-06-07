//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHContentEditingOutput, PUEditPluginSession;

@protocol PUEditPluginSessionDataSource <NSObject>
- (void)editPluginSession:(PUEditPluginSession *)arg1 commitContentEditingOutput:(PHContentEditingOutput *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadPlaceholderImageWithHandler:(void (^)(UIImage *))arg2;
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadAdjustmentDataWithHandler:(void (^)(PHAdjustmentData *))arg2;

@optional
- (void)editPluginSession:(PUEditPluginSession *)arg1 revertToOriginalWithCompletionHandler:(void (^)(NSError *))arg2;
- (_Bool)editPluginSessionCanRevertToOriginal:(PUEditPluginSession *)arg1;
@end

