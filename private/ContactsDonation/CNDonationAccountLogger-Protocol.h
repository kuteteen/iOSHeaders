//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, CNDonationValue, NSError, NSString;

@protocol CNDonationAccountLogger <NSObject>
- (void)removalFailedWithError:(NSError *)arg1;
- (void)donationFailedWithError:(NSError *)arg1;
- (void)removing:(NSString *)arg1;
- (void)donating:(CNDonationValue *)arg1;
- (void)accountRemoved:(ACAccount *)arg1;
- (void)accountChanged:(ACAccount *)arg1;
- (void)accountAdded:(ACAccount *)arg1;
- (void)pluginUnloaded;
- (void)pluginLoaded;
@end

