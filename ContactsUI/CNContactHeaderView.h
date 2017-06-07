//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ContactsUI/CNContactPhotoViewDelegate-Protocol.h>
#import <ContactsUI/CNUIReusableView-Protocol.h>

@class CNContactPhotoView, NSArray, NSDictionary, NSString, UILabel;
@protocol CNContactHeaderViewDelegate, CNPresenterDelegate;

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView>
{
    _Bool _needsReload;
    _Bool _shouldUseExpandedContentStyle;
    _Bool _alwaysShowsMonogram;
    _Bool _visibleToScrollViews;
    NSDictionary *_nameTextAttributes;
    id <CNPresenterDelegate> _delegate;
    id <CNContactHeaderViewDelegate> _headerDelegate;
    UILabel *_nameLabel;
    NSArray *_activatedConstraints;
    NSArray *_contacts;
    CNContactPhotoView *_photoView;
    struct UIEdgeInsets _contentMargins;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(_Bool)arg1;
+ (id)descriptorForRequiredKeys;
@property(nonatomic) _Bool visibleToScrollViews; // @synthesize visibleToScrollViews=_visibleToScrollViews;
@property(nonatomic) _Bool alwaysShowsMonogram; // @synthesize alwaysShowsMonogram=_alwaysShowsMonogram;
@property(readonly, nonatomic) CNContactPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) NSArray *activatedConstraints; // @synthesize activatedConstraints=_activatedConstraints;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool shouldUseExpandedContentStyle; // @synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle;
@property(nonatomic) __weak id <CNContactHeaderViewDelegate> headerDelegate; // @synthesize headerDelegate=_headerDelegate;
@property(nonatomic) __weak id <CNPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *nameTextAttributes; // @synthesize nameTextAttributes=_nameTextAttributes;
@property(nonatomic) struct UIEdgeInsets contentMargins; // @synthesize contentMargins=_contentMargins;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)displayAccountForContact:(id)arg1;
- (id)contactStoreForPhotoView:(id)arg1;
- (id)viewControllerForPhotoView:(id)arg1;
- (void)photoViewDidUpdate:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)shouldOffsetPhotoView;
- (void)saveContactPhoto;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (void)reloadDataIfNeeded;
- (void)setNeedsReload;
- (void)updateFontSizes;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogrammerStyle:(long long)arg3;
- (id)descriptorForRequiredKeys;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

