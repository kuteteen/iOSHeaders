//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CRKCardSectionViewControllerDataSource.h"
#import "CRKCardSectionViewControllerDelegate.h"
#import "CRKCardSectionViewProviderHelping.h"
#import "CRKFeedbackDelegate.h"
#import "SearchUIFeedbackDelegate.h"

@class CRKComposedStackView, NSMapTable, NSMutableArray, NSString;

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDelegate, CRKCardSectionViewControllerDataSource, SearchUIFeedbackDelegate, CRKCardSectionViewProviderHelping, CRKFeedbackDelegate>
{
    id <CRKCardSectionViewProviderManaging> _cardSectionViewProviderManager;
    NSMutableArray *_cardSectionViewControllers;
    NSMapTable *_cardSectionsToCardSectionViewControllersMapTable;
    NSMapTable *_handledParametersForInteraction;
    NSMutableArray *_pendingDismissalCommands;
    _Bool _loaded;
    NSMutableArray *_loadingCardSections;
    _Bool _indicatingActivity;
    id <CRCard> _card;
    id <CRKCardViewControllerDelegate> _delegate;
    long long _preferredPunchoutIndex;
}

+ (void)_registerCardSectionViewControllers;
+ (void)initialize;
@property long long preferredPunchoutIndex; // @synthesize preferredPunchoutIndex=_preferredPunchoutIndex;
@property(readonly, nonatomic, getter=isIndicatingActivity) _Bool indicatingActivity; // @synthesize indicatingActivity=_indicatingActivity;
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <CRCard> card; // @synthesize card=_card;
- (void).cxx_destruct;
- (id)defaultFeedbackDelegate;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)presentViewController:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (id)cardSectionViewController:(id)arg1 interfaceSectionsForInteraction:(id)arg2;
- (id)cardSectionViewController:(id)arg1 handledParametersForInteraction:(id)arg2;
- (id)cardSectionViewController:(id)arg1 interactionWithIdentifier:(id)arg2;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)cardSectionViewControllerShouldBeRemoved:(id)arg1;
- (void)cardSectionViewController:(id)arg1 didHandleParameters:(id)arg2 forInteraction:(id)arg3;
- (_Bool)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (struct CGSize)boundingSizeForCardSectionViewController:(id)arg1;
- (void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)cardSectionViewControllerBoundsDidChange:(id)arg1;
- (void)cardSectionViewControllerDidFinishLoading:(id)arg1;
- (id)init;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_generateCardViewAppearanceFeedback;
- (_Bool)_isActuallyVisible;
- (void)_finishLoading;
- (void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2;
- (_Bool)_askDelegateToPerformReferentialCommand:(id)arg1;
- (void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1;
- (void)_removeCardSectionViewControllersFromParentViewController:(id)arg1;
- (long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1;
- (long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2;
- (long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_resumeTouchesIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (id)_loadCardSectionViewControllerFromCardSection:(id)arg1;
- (void)_loadCardSectionViewControllersFromCard:(id)arg1;
- (id)_initWithCoder:(id)arg1;
- (id)_initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_initWithCard:(id)arg1;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)eventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)initWithCard:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) CRKComposedStackView *view; // @dynamic view;

@end

