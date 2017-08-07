//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ACAccount, NSArray, NSString;

@protocol DonationAgentProtocol
- (void)removeAllRejectionsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)rejectValuesWithClusterIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)rejectValueWithDonationIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)changeFromAccount:(ACAccount *)arg1 toAccount:(ACAccount *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)meCardDonations:(void (^)(NSArray *, NSError *))arg1;
- (void)synchronousDonatedMeCard:(void (^)(CNEither *))arg1;
- (void)fetchDonatedMeCard:(void (^)(CNContact *, NSError *))arg1;
- (void)removeDonatedMeCardValuesForIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)donateMeCardValues:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

