//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage, ISEditSession;

@interface PHLivePhotoEditingContext : NSObject
{
    ISEditSession *_editSession;
}

+ (id)errorWithUnderlyingError:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)saveLivePhotoToOutput:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prepareLivePhotoForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly) unsigned int orientation;
@property float audioVolume;
@property(copy) CDUnknownBlockType frameProcessor;
@property(readonly) CDStruct_1b6d18a9 photoTime;
@property(readonly) CDStruct_1b6d18a9 duration;
@property(readonly) CIImage *fullSizeImage;
- (id)initWithLivePhotoEditingInput:(id)arg1;
- (id)init;

@end

