//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSOperationQueue, VSAuditToken, VSOptional;
@protocol VSSupportedAppsViewControllerDelegate;

@interface VSSupportedAppsViewController : UIViewController
{
    VSOptional *_identityProviderID;
    VSAuditToken *_auditToken;
    id <VSSupportedAppsViewControllerDelegate> _delegate;
    NSOperationQueue *_privateQueue;
    NSArray *_apps;
}

@property(copy, nonatomic) NSArray *apps; // @synthesize apps=_apps;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) __weak id <VSSupportedAppsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) VSOptional *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)beginLoadingApps;
- (void)_finishLoadingApps:(id)arg1;
- (void)_presentError:(id)arg1;
- (void)_doneButtonPresed:(id)arg1;
- (void)_didFinish;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

