//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MarkupUI/MarkupViewController.h>

__attribute__((visibility("hidden")))
@interface QLMUViewController : MarkupViewController
{
    long long _currentEditNumber;
}

@property long long currentEditNumber; // @synthesize currentEditNumber=_currentEditNumber;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;

@end

