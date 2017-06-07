//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIPreviewInteraction;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    UIPreviewInteraction *_previewInteraction;
}

@property(nonatomic) __weak UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
- (void).cxx_destruct;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStateToRecognized;
- (void)setStateToFailed;
- (id)initWithPreviewInteraction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

