//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSDittoRemoteConnection, SSScreenshotsWindow, SSSnapshotter;
@protocol SSScreenCapturerDelegate;

@interface SSScreenCapturer : NSObject
{
    SSSnapshotter *_snapshotter;
    SSDittoRemoteConnection *_dittoRemoteConnection;
    SSScreenshotsWindow *_serviceWindow;
    id <SSScreenCapturerDelegate> _delegate;
}

+ (void)playScreenshotSound;
+ (_Bool)shouldUseScreenCapturerForScreenshots;
+ (id)_currentDisplayLayout;
@property(nonatomic) __weak id <SSScreenCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendEnvironmentDescriptionsWithPresentationOptions:(id)arg1;
- (void)_saveSnapshotToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2;
- (void)_actuallyPerformCaptureAndSendEnvironmentDescriptionsWithPresentationOptions:(id)arg1;
- (void)takeScreenshot;
- (void)takeScreenshotWithPresentationOptions:(id)arg1;
- (id)init;

@end

