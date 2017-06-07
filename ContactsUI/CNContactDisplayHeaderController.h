//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/CNContactHeaderViewDelegate-Protocol.h>
#import <ContactsUI/CNUIObjectViewController-Protocol.h>

@class CNContact, CNContactHeaderDisplayView, CNContactStyle, CNContactViewCache, NSLayoutConstraint, NSString, UIView;
@protocol CNUIObjectViewControllerDelegate;

@interface CNContactDisplayHeaderController : NSObject <CNContactHeaderViewDelegate, CNUIObjectViewController>
{
    id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
    CNContact *_contact;
    unsigned long long _avatarStyle;
    CNContactHeaderDisplayView *_headerView;
    CNContactViewCache *_contactViewCache;
    CNContactStyle *_style;
    NSLayoutConstraint *_heightConstraint;
}

+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) CNContactStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property(retain, nonatomic) CNContactHeaderDisplayView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned long long avatarStyle; // @synthesize avatarStyle=_avatarStyle;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate; // @synthesize objectViewControllerDelegate;
- (void).cxx_destruct;
- (id)displayAccountForContact:(id)arg1;
- (id)contactStoreForHeaderView:(id)arg1;
- (id)viewControllerForHeaderView:(id)arg1;
- (void)headerPhotoDidSaveEditsForImageDrop;
- (void)headerViewDidUpdateLabelSizes;
- (void)headerPhotoDidUpdate;
- (void)updateFontSizes;
- (void)reloadData;
- (id)contactStore;
- (void)updateWithContact:(id)arg1;
- (void)createHeaderViewIfNeeded;
@property(readonly, nonatomic) UIView *view;
- (id)initWithCache:(id)arg1 style:(id)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

