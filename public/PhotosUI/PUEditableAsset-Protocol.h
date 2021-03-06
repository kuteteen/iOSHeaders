//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUDisplayAsset.h"

@class NSDictionary, NSString, PFVideoAVObjectBuilder, PHContentEditingInputRequestOptions;

@protocol PUEditableAsset <PUDisplayAsset>
@property(readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalImageFile;
@property(readonly, nonatomic, getter=isResourceDownloadPossible) _Bool resourceDownloadPossible;
@property(readonly, nonatomic) int originalEXIFOrientation;
@property(readonly, nonatomic) NSDictionary *imageProperties;
@property(readonly, nonatomic) PFVideoAVObjectBuilder *videoObjectBuilder;
@property(readonly, nonatomic) unsigned long long livePhotoVisibilityState;
@property(readonly, nonatomic, getter=isInPlaceVideoTrimAllowed) _Bool inPlaceVideoTrimAllowed;
@property(readonly, nonatomic, getter=isLivePhotoVisibilityAdjustmentAllowed) _Bool livePhotoVisibilityAdjustmentAllowed;
@property(readonly, nonatomic, getter=isContentAdjustmentAllowed) _Bool contentAdjustmentAllowed;
@property(readonly, nonatomic, getter=isAdjusted) _Bool adjusted;
@property(readonly, nonatomic, getter=isHighFramerateVideo) _Bool highFramerateVideo;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (unsigned long long)requestContentEditingInputWithOptions:(PHContentEditingInputRequestOptions *)arg1 completionHandler:(void (^)(PHContentEditingInput *, NSDictionary *))arg2;
@end

