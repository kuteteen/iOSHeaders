//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactViewHostProtocol-Protocol.h>

@class CNContact, CNContactContentViewController, CNContactFormatter, CNContactStore, CNContainer, CNGroup, CNPolicy, NSArray, NSString, UIView, _UIAccessDeniedView;
@protocol CNContactContentViewController, CNContactViewControllerDelegate, CNContactViewControllerPPTDelegate, CNContactViewControllerPrivateDelegate;

@interface CNContactViewController : UIViewController <CNContactViewHostProtocol>
{
    void *_addressBook;
    long long _mode;
    _Bool _ignoreViewWillBePresented;
    _Bool _shouldShowLinkedContacts;
    _Bool _highlightedPropertyImportant;
    _Bool _requiresSetup;
    _Bool _showingMeContact;
    CNContact *_contact;
    NSArray *_displayedPropertyKeys;
    id <CNContactViewControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNGroup *_parentGroup;
    CNContainer *_parentContainer;
    NSString *_alternateName;
    NSString *_message;
    CNContact *_contentContact;
    CNContactContentViewController *_contentViewController;
    _UIAccessDeniedView *_accessDeniedView;
    NSString *_highlightedPropertyKey;
    NSString *_highlightedPropertyIdentifier;
    NSArray *_extraBarButtonItems;
    NSArray *_preEditLeftBarButtonItems;
    UIViewController<CNContactContentViewController> *_viewController;
    CNPolicy *_policy;
    CNContact *_additionalContact;
    id <CNContactViewControllerPPTDelegate> _pptDelegate;
    long long _displayMode;
    long long _editMode;
    long long _actions;
    CNContactFormatter *_contactFormatter;
    NSString *_primaryPropertyKey;
    UIView *_contactHeaderView;
    UIViewController *_contactHeaderViewController;
}

+ (id)viewControllerForUpdatingContact:(id)arg1 withPropertiesFromContact:(id)arg2;
+ (id)viewControllerForNewContact:(id)arg1;
+ (id)viewControllerForUnknownContact:(id)arg1;
+ (id)viewControllerForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) UIViewController *contactHeaderViewController; // @synthesize contactHeaderViewController=_contactHeaderViewController;
@property(retain, nonatomic) UIView *contactHeaderView; // @synthesize contactHeaderView=_contactHeaderView;
@property(retain, nonatomic) NSString *primaryPropertyKey; // @synthesize primaryPropertyKey=_primaryPropertyKey;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(nonatomic) long long actions; // @synthesize actions=_actions;
@property(nonatomic) long long editMode; // @synthesize editMode=_editMode;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) __weak id <CNContactViewControllerPPTDelegate> pptDelegate; // @synthesize pptDelegate=_pptDelegate;
@property(nonatomic) _Bool showingMeContact; // @synthesize showingMeContact=_showingMeContact;
@property(retain, nonatomic) CNContact *additionalContact; // @synthesize additionalContact=_additionalContact;
@property(readonly, nonatomic) CNPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIViewController<CNContactContentViewController> *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSArray *preEditLeftBarButtonItems; // @synthesize preEditLeftBarButtonItems=_preEditLeftBarButtonItems;
@property(nonatomic) _Bool requiresSetup; // @synthesize requiresSetup=_requiresSetup;
@property(retain, nonatomic) NSArray *extraBarButtonItems; // @synthesize extraBarButtonItems=_extraBarButtonItems;
@property(nonatomic) _Bool highlightedPropertyImportant; // @synthesize highlightedPropertyImportant=_highlightedPropertyImportant;
@property(retain, nonatomic) NSString *highlightedPropertyIdentifier; // @synthesize highlightedPropertyIdentifier=_highlightedPropertyIdentifier;
@property(retain, nonatomic) NSString *highlightedPropertyKey; // @synthesize highlightedPropertyKey=_highlightedPropertyKey;
@property(readonly, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(retain, nonatomic) CNContactContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) CNContact *contentContact; // @synthesize contentContact=_contentContact;
@property(nonatomic) _Bool shouldShowLinkedContacts; // @synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property(retain, nonatomic) CNContainer *parentContainer; // @synthesize parentContainer=_parentContainer;
@property(retain, nonatomic) CNGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) __weak id <CNContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *displayedPropertyKeys; // @synthesize displayedPropertyKeys=_displayedPropertyKeys;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)isPresentingEditingController:(_Bool)arg1;
- (void)isPresentingFullscreen:(_Bool)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)enableCancelKeyboardShortcut;
- (void)enableSaveKeyboardShortcut;
- (void)configureNavigationItem:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)updateEditNavigationItemsAnimated:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;
- (void)setDoneButtonText:(id)arg1 enabled:(_Bool)arg2;
- (void)toggleEditing:(id)arg1;
- (void)editCancel:(id)arg1;
- (id)navigationItemController;
- (void)_prepareViewController;
- (_Bool)_shouldBeOutOfProcess;
- (void)_setupViewController;
- (void)setContact:(id)arg1 additionalContact:(id)arg2 mode:(long long)arg3;
- (void)_setViewController:(id)arg1;
- (void)_endDelayingPresentation;
- (_Bool)_isDelayingPresentation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)_viewWillBePresented;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
@property(readonly, nonatomic) id <CNContactViewControllerPrivateDelegate> privateDelegate;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2;
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 important:(_Bool)arg3;
@property(nonatomic) _Bool allowsEditing;
@property(nonatomic) _Bool allowsActions;
- (id)_primaryPropertyStringForContact:(id)arg1;
- (id)_contactPresentedViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

