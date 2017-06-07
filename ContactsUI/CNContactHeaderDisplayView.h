//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactHeaderView.h>

#import <ContactsUI/CNUIReusableView-Protocol.h>

@class CNContactFormatter, NSDictionary, NSLayoutConstraint, NSString, UILabel, UIView;

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNUIReusableView>
{
    NSDictionary *_taglineTextAttributes;
    _Bool _centersPhotoAndLabels;
    CNContactFormatter *_contactFormatter;
    NSString *_alternateName;
    NSString *_message;
    double _minHeight;
    double _maxHeight;
    UIView *_personHeaderView;
    UILabel *_taglineLabel;
    double _lastViewWidth;
    NSLayoutConstraint *_photoTopConstraint;
    NSLayoutConstraint *_photoHeightConstraint;
    NSLayoutConstraint *_nameWidthConstraint;
    NSLayoutConstraint *_avatarNameSpacingConstraint;
    struct CGSize _maxNameSize;
}

+ (id)contactHeaderViewWithContact:(id)arg1;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(_Bool)arg2;
@property(retain) NSLayoutConstraint *avatarNameSpacingConstraint; // @synthesize avatarNameSpacingConstraint=_avatarNameSpacingConstraint;
@property(retain) NSLayoutConstraint *nameWidthConstraint; // @synthesize nameWidthConstraint=_nameWidthConstraint;
@property(retain) NSLayoutConstraint *photoHeightConstraint; // @synthesize photoHeightConstraint=_photoHeightConstraint;
@property(retain) NSLayoutConstraint *photoTopConstraint; // @synthesize photoTopConstraint=_photoTopConstraint;
@property(nonatomic) double lastViewWidth; // @synthesize lastViewWidth=_lastViewWidth;
@property(nonatomic) struct CGSize maxNameSize; // @synthesize maxNameSize=_maxNameSize;
@property(retain) UILabel *taglineLabel; // @synthesize taglineLabel=_taglineLabel;
@property(retain, nonatomic) UIView *personHeaderView; // @synthesize personHeaderView=_personHeaderView;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) _Bool centersPhotoAndLabels; // @synthesize centersPhotoAndLabels=_centersPhotoAndLabels;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
- (void).cxx_destruct;
- (void)menuWillHide:(id)arg1;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (id)_headerStringForContacts:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (void)_updatePhotoView;
@property(copy, nonatomic) NSDictionary *taglineTextAttributes;
- (void)setNameTextAttributes:(id)arg1;
- (void)updateSizeDependentAttributes;
- (void)layoutSubviews;
- (void)calculateLabelSizes;
- (void)disablePhotoTapGesture;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)tintColorDidChange;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogrammerStyle:(long long)arg3;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2;
@property(readonly, nonatomic) double photoLabelSpacing;
- (id)descriptorForRequiredKeys;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

