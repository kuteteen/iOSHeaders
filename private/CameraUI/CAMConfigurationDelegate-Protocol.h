//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMCaptureGraphConfiguration, CUCaptureController;

@protocol CAMConfigurationDelegate <NSObject>
- (void)captureController:(CUCaptureController *)arg1 didChangeToGraphConfiguration:(CAMCaptureGraphConfiguration *)arg2 forDesiredConfiguration:(CAMCaptureGraphConfiguration *)arg3 requestID:(int)arg4;
@end

