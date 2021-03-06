//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@interface CertTrustSettings : PSListController
{
    id _profileListChangedNotificationObserver;
}

@property(retain, nonatomic) id profileListChangedNotificationObserver; // @synthesize profileListChangedNotificationObserver=_profileListChangedNotificationObserver;
- (void).cxx_destruct;
- (id)trustVersionString:(id)arg1;
- (id)specifierForTrustSettings:(struct __SecCertificate *)arg1 isRestricted:(_Bool)arg2;
- (void)setFullTrustEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)isFullTrustEnabled:(id)arg1;
- (id)specifiers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

