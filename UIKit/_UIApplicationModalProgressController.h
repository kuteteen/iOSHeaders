//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSProgress, NSString, NSTimer, UIAlertController, UIWindow, _UIProgressView;

__attribute__((visibility("hidden")))
@interface _UIApplicationModalProgressController : NSObject
{
    _Bool _disableButtonAction;
    _UIProgressView *_progressView;
    double _displayDelaySeconds;
    UIWindow *_window;
    UIAlertController *_alertController;
    CDUnknownBlockType _dismissalHandler;
    CDUnknownBlockType _preDisplayTestBlock;
    NSProgress *_progress;
    NSTimer *_showTimer;
    NSTimer *_hideTimer;
    double _displayStartTime;
    NSProgress *_urlProgress;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSProgress *urlProgress; // @synthesize urlProgress=_urlProgress;
@property(nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) double displayStartTime; // @synthesize displayStartTime=_displayStartTime;
@property(retain, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer; // @synthesize hideTimer=_hideTimer;
@property(retain, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property(retain, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) CDUnknownBlockType preDisplayTestBlock; // @synthesize preDisplayTestBlock=_preDisplayTestBlock;
@property(copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(retain, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) double displayDelaySeconds; // @synthesize displayDelaySeconds=_displayDelaySeconds;
- (void).cxx_destruct;
- (void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayForDownloadingURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 preDisplayTestBlock:(CDUnknownBlockType)arg5 dismissalHandler:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(CDUnknownBlockType)arg5;
- (void)hideAfterDelay:(double)arg1 forceCompletion:(_Bool)arg2 afterMinimumUptimeDismissalHandler:(CDUnknownBlockType)arg3;
- (void)hideAfterMinimumUptimeWithDismissalHandler:(CDUnknownBlockType)arg1;
- (void)_dismissButtonAction:(id)arg1;
- (void)_hideTimerAction:(id)arg1;
- (void)_showTimerAction:(id)arg1;
- (void)_hideImmediatelyWasDismissedByUser:(_Bool)arg1;
- (void)_reset;
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(_Bool)arg1;
- (id)init;

@end

