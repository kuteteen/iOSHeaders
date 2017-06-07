//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIPreviewInteractionHighlighting-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting>
{
    _Bool _blinderViewEnabled;
    UIView *_initialSnapshotView;
    UIView *_updatedSnapshotView;
    UIView *_blinderView;
}

@property(retain, nonatomic) UIView *blinderView; // @synthesize blinderView=_blinderView;
@property(nonatomic) _Bool blinderViewEnabled; // @synthesize blinderViewEnabled=_blinderViewEnabled;
@property(retain, nonatomic) UIView *updatedSnapshotView; // @synthesize updatedSnapshotView=_updatedSnapshotView;
@property(retain, nonatomic) UIView *initialSnapshotView; // @synthesize initialSnapshotView=_initialSnapshotView;
- (void).cxx_destruct;
- (id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(_Bool)arg2;
- (void)finalizeHighlightForPreviewingContext:(id)arg1;
- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;
- (void)prepareHighlightWithPreviewingContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

