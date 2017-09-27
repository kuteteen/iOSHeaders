//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VSAccount, VSApplicationController, VSFailable, VSIdentityProvider, VSIdentityProviderRequest, VSIdentityProviderRequestManager;

@protocol VSIdentityProviderRequestManagerDelegate <NSObject>
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 finishedRequest:(VSIdentityProviderRequest *)arg2 withResult:(VSFailable *)arg3;

@optional
- (VSApplicationController *)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 applicationControllerWithIdentityProvider:(VSIdentityProvider *)arg2;
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 didAuthenticateAccount:(VSAccount *)arg2 forRequest:(VSIdentityProviderRequest *)arg3;
@end

