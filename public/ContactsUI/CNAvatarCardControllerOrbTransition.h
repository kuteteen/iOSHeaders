//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/_UIPreviewInteractionViewControllerTransition-Protocol.h>

@class CNAvatarCardViewController, CNContactOrbHeaderView, NSString, UIView;
@protocol CNAvatarCardControllerOrbTransitionDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardControllerOrbTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    _Bool _isDismissing;
    CNContactOrbHeaderView *_headerView;
    CNAvatarCardViewController *_cardViewController;
    UIView *_sourceView;
    UIView *_highlightedView;
    id <CNAvatarCardControllerOrbTransitionDelegate> _delegate;
    double _highlightViewToAlpha;
    struct CGRect _sourceRect;
    struct CGAffineTransform _endHeaderTransform;
    struct CGAffineTransform _endActionListTransform;
}

@property(nonatomic) double highlightViewToAlpha; // @synthesize highlightViewToAlpha=_highlightViewToAlpha;
@property(nonatomic) struct CGAffineTransform endActionListTransform; // @synthesize endActionListTransform=_endActionListTransform;
@property(nonatomic) struct CGAffineTransform endHeaderTransform; // @synthesize endHeaderTransform=_endHeaderTransform;
@property(nonatomic) __weak id <CNAvatarCardControllerOrbTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) __weak UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) __weak CNAvatarCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(nonatomic) __weak CNContactOrbHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
- (void).cxx_destruct;
- (struct CGRect)_sourceRectInContainerView:(id)arg1;
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performWithCustomAnimator:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupTransitionFromView:(id)arg1 toView:(id)arg2 withContainerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)initWithCardViewController:(id)arg1 headerView:(id)arg2 sourceView:(id)arg3 highlightedView:(id)arg4 sourceRect:(struct CGRect)arg5 isDismissing:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
