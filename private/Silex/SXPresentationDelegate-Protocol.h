//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXComponentAnimationController, SXComponentBehaviorController, SXComponentController, SXComponentView, SXFullscreenCanvasController, SXFullscreenCanvasViewController, SXFullscreenVideoPlaybackManager, SXMediaPlaybackController, SXPresentationAttributes, SXTangierController, SXViewport, UIView, UIViewController;

@protocol SXPresentationDelegate <NSObject>
@property(readonly, nonatomic) id <SXTextSelectionManager> textSelectionManager;
@property(readonly, nonatomic) id <SXAdDocumentStateManager> adDocumentStateManager;
@property(readonly, nonatomic) SXPresentationAttributes *presentationAttributes;
@property(readonly, nonatomic) SXMediaPlaybackController *mediaPlaybackController;
@property(readonly, nonatomic) SXFullscreenVideoPlaybackManager *fullscreenVideoPlaybackManager;
@property(readonly, nonatomic) SXComponentBehaviorController *behaviorController;
@property(readonly, nonatomic) SXComponentAnimationController *animationController;
@property(readonly, nonatomic) SXTangierController *tangierController;
@property(readonly, nonatomic) SXComponentController *componentController;
@property(readonly, nonatomic) SXViewport *viewport;
- (void)updateBehaviorForComponentView:(SXComponentView *)arg1;
- (void)releasePositionOfView:(UIView *)arg1;
- (void)maintainPositionOfViewWhileScrolling:(UIView *)arg1;
- (void)scrollToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (_Bool)isScrolling;
- (UIViewController *)presentingContentViewController;
- (void)dismissFullscreenCanvasForComponent:(SXComponentView *)arg1;
- (SXFullscreenCanvasViewController *)requestFullScreenCanvasViewControllerForComponent:(SXComponentView *)arg1 withCompletionBlock:(void (^)(void))arg2;
- (SXFullscreenCanvasViewController *)requestFullScreenCanvasViewControllerForComponent:(SXComponentView *)arg1;
- (UIView *)requestFullScreenCanvasForComponent:(SXComponentView *)arg1 canvasController:(SXFullscreenCanvasController *)arg2;
- (void)removeInteractivityFocusForComponent:(SXComponentView *)arg1;
- (_Bool)addInteractivityFocusForComponent:(SXComponentView *)arg1;
- (_Bool)allowInteractivityFocusForComponent:(SXComponentView *)arg1;
@end

