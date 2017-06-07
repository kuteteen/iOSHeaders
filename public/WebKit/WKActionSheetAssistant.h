//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/DDDetectionControllerInteractionDelegate-Protocol.h>
#import <WebKit/WKActionSheetDelegate-Protocol.h>

@class NSString, UIView;
@protocol WKActionSheetAssistantDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate>
{
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> _delegate;
    struct RetainPtr<WKActionSheet> _interactionSheet;
    RetainPtr_5a40b48a _elementInfo;
    UIView *_view;
    _Bool _needsLinkIndicator;
    _Bool _isPresentingDDUserInterface;
}

@property(nonatomic) _Bool needsLinkIndicator; // @synthesize needsLinkIndicator=_needsLinkIndicator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cleanupSheet;
- (void)showDataDetectorsSheet;
- (void)showLinkSheet;
- (RetainPtr_f649c0c3)defaultActionsForImageSheet:(id)arg1;
- (RetainPtr_f649c0c3)defaultActionsForLinkSheet:(id)arg1;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (_Bool)_shouldPresentAtTouchLocationForElementRect:(struct CGRect)arg1;
- (void)showImageSheet;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(_Bool)arg2;
- (id)currentAvailableActionTitles;
- (_Bool)isShowingSheet;
- (void)updateSheetPosition;
- (_Bool)presentSheet;
- (void)updatePositionInformation;
- (struct CGRect)presentationRectInHostViewForSheet;
- (struct CGRect)initialPresentationRectInHostViewForSheet;
- (struct CGRect)presentationRectForIndicatedElement;
- (struct CGRect)presentationRectForElementUsingClosestIndicatedRect;
- (id)hostViewForSheet;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (id)superviewForSheet;
- (void)dealloc;
- (id)initWithView:(id)arg1;
@property(nonatomic) __weak id <WKActionSheetAssistantDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
