//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, CLLocation, NSDate, NSMutableArray, NSString, NSURL, PHAdjustmentData, PHLivePhoto, UIImage;
@protocol OS_dispatch_queue;

@interface PHContentEditingInput : NSObject
{
    NSObject<OS_dispatch_queue> *_avAssetIsolationQueue;
    NSMutableArray *_sandboxExtensionHandles;
    int _fullSizeImageOrientation;
    AVAsset *_avAsset;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    NSDate *_creationDate;
    CLLocation *_location;
    NSString *_uniformTypeIdentifier;
    PHAdjustmentData *_adjustmentData;
    UIImage *_displaySizeImage;
    NSURL *_fullSizeImageURL;
    PHLivePhoto *_livePhoto;
    long long _baseVersion;
    NSURL *_videoURL;
}

@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) long long baseVersion; // @synthesize baseVersion=_baseVersion;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(nonatomic) int fullSizeImageOrientation; // @synthesize fullSizeImageOrientation=_fullSizeImageOrientation;
@property(copy, nonatomic) NSURL *fullSizeImageURL; // @synthesize fullSizeImageURL=_fullSizeImageURL;
@property(retain, nonatomic) UIImage *displaySizeImage; // @synthesize displaySizeImage=_displaySizeImage;
@property(retain, nonatomic) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)description;
- (void)_invalidateAVAsset;
@property(readonly) AVAsset *audiovisualAsset; // @synthesize audiovisualAsset=_avAsset;
@property(readonly) AVAsset *avAsset;
- (void)consumeSandboxExtensionToken:(id)arg1;
- (void)requestFullSizeImageURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)videoComposition;
- (id)audioMix;
- (id)imagePreview;
- (void)loadFullSizeImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

