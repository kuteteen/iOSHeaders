//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface AVCapturePhotoSettingsInternal : NSObject
{
    NSDictionary *format;
    unsigned int rawPhotoPixelFormatType;
    long long uniqueID;
    long long flashMode;
    long long HDRMode;
    _Bool autoShallowDepthOfFieldEffectEnabled;
    _Bool originalPhotoDeliveryEnabled;
    _Bool autoStillImageStabilizationEnabled;
    _Bool autoDualCameraFusionEnabled;
    _Bool highResolutionPhotoEnabled;
    NSURL *livePhotoMovieFileURL;
    NSURL *livePhotoMovieFileURLForOriginalPhoto;
    NSArray *livePhotoMovieMetadata;
    NSArray *livePhotoMovieMetadataForOriginalPhoto;
    NSDictionary *previewFormat;
    _Bool squareCropEnabled;
    unsigned int shutterSound;
    _Bool turboModeEnabled;
    unsigned long long userInitiatedPhotoRequestTime;
    NSString *livePhotoContentIdentifier;
    NSString *livePhotoContentIdentifierForOriginalPhoto;
}

@end

