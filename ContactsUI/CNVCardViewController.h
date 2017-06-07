//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactNavigationControllerDelegate-Protocol.h>

@class CNContactNavigationController, NSArray, NSString;
@protocol CNVCardViewControllerDelegate;

@interface CNVCardViewController : UIViewController <CNContactNavigationControllerDelegate>
{
    id <CNVCardViewControllerDelegate> _delegate;
    NSArray *_contacts;
}

@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) __weak id <CNVCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNContactNavigationController *contactNavigationController;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3;
- (void)viewDidLoad;
- (id)initWithVCardData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

