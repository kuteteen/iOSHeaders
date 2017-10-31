//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "PKObservableContentContainer.h"

@class NSHashTable, NSLock, NSString, _UIBackdropView;

@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer>
{
    _UIBackdropView *_backdropView;
    NSLock *_observersLock;
    NSHashTable *_observers;
    _Bool _overridesContentOverlayInsets;
}

@property(nonatomic) _Bool overridesContentOverlayInsets; // @synthesize overridesContentOverlayInsets=_overridesContentOverlayInsets;
- (void).cxx_destruct;
- (id)_observers;
- (void)removeContentContainerObserver:(id)arg1;
- (void)addContentContainerObserver:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(readonly) Class superclass;

@end

