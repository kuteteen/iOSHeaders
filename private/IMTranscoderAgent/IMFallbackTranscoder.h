//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMFallbackTranscoder : NSObject
{
}

- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 inFileURL:(id)arg4 fallBack:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)_findPluginFallbackEncoder:(id)arg1 withBalloonBundleID:(id)arg2;

@end
