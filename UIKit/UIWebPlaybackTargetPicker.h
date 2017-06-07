//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIPopoverControllerDelegate-Protocol.h>

@class MPAVRoutingController, MPAVRoutingSheet, MPAudioVideoRoutingPopoverController, NSString, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate>
{
    MPAVRoutingController *_routingController;
    MPAudioVideoRoutingPopoverController *_popoverController;
    MPAVRoutingSheet *_actionSheet;
    UIWebDocumentView *_delegate;
}

- (void).cxx_destruct;
- (void)show:(_Bool)arg1 fromRect:(struct CGRect)arg2;
- (void)showAirPlayPickerIPhone:(long long)arg1;
- (void)showAirPlayPickerIPad:(long long)arg1 fromRect:(struct CGRect)arg2;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_windowDidRotate:(id)arg1;
- (void)_windowWillRotate:(id)arg1;
- (void)_presentAirPlayPopoverAnimated:(_Bool)arg1 fromRect:(struct CGRect)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

