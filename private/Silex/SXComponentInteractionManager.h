//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXComponentInteractionManager.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SXComponentInteractionPreview, SXComponentView, SXDelayed, SXViewport, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface SXComponentInteractionManager : NSObject <UIGestureRecognizerDelegate, SXComponentInteractionManager>
{
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
    SXViewport *_viewport;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SXDelayed *_longPressDelay;
    SXComponentInteractionPreview *_currentPreview;
    SXComponentView *_currentComponentView;
    struct CGPoint _longPressStartLocation;
}

@property(retain, nonatomic) SXComponentView *currentComponentView; // @synthesize currentComponentView=_currentComponentView;
@property(retain, nonatomic) SXComponentInteractionPreview *currentPreview; // @synthesize currentPreview=_currentPreview;
@property(nonatomic) struct CGPoint longPressStartLocation; // @synthesize longPressStartLocation=_longPressStartLocation;
@property(retain, nonatomic) SXDelayed *longPressDelay; // @synthesize longPressDelay=_longPressDelay;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) id <SXComponentInteractionHandlerManager> interactionHandlerManager; // @synthesize interactionHandlerManager=_interactionHandlerManager;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateHighlight:(_Bool)arg1 forComponentView:(id)arg2;
- (void)toggleHighlightForComponentView:(id)arg1;
- (void)animateHighlight:(_Bool)arg1 forComponentView:(id)arg2;
- (void)cancelInteractionForComponentView:(id)arg1;
- (void)handleInteraction:(id)arg1 withType:(unsigned long long)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)commitViewController:(id)arg1;
- (id)previewViewControllerForLocation:(struct CGPoint)arg1;
- (id)initWithInteractionHandlerManager:(id)arg1 viewport:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

