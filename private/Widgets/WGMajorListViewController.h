//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Widgets/WGWidgetListViewController.h>

#import "WGWidgetListFooterViewDelegate.h"

@class NSString, WGCollapsingView, WGWidgetListFooterView;

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate>
{
    WGCollapsingView *_collapsingView;
    WGWidgetListFooterView *_footerView;
}

@property(readonly, nonatomic) WGWidgetListFooterView *footerView; // @synthesize footerView=_footerView;
- (void).cxx_destruct;
- (void)orderOfVisibleWidgetsDidChange:(id)arg1;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (void)presentEditView:(id)arg1;
- (void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1;
- (void)setShouldBlurContent:(_Bool)arg1;
- (id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (void)_configureStackView;
- (id)_group;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

