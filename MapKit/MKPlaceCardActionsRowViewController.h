//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKActionRowItemViewDelegate-Protocol.h>
#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKPlaceActionManager, MKPlaceSectionItemView, NSArray, NSString, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionsRowViewController : UIViewController <MKActionRowItemViewDelegate, MKModuleViewControllerProtocol>
{
    NSArray *_actionButtons;
    NSArray *_constraints;
    NSArray *_actionRowsArray;
    unsigned long long _maxButtonsPerRow;
    MKPlaceSectionItemView *_hairlineView;
    unsigned long long _style;
    UILayoutGuide *_marginLayoutguide;
    NSArray *_items;
    MKPlaceActionManager *_actionManager;
}

@property(nonatomic) __weak MKPlaceActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)actionRowSelected:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (void)viewDidLoad;
- (void)layoutButtons;
- (void)createConstraints;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)createActions;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

