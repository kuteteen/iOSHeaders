//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCUserInfo, NSString;

@protocol FCUserInfoObserving <NSObject>

@optional
- (void)userInfo:(FCUserInfo *)arg1 didRemoveAccessTokenForTagID:(NSString *)arg2 userInitiated:(_Bool)arg3;
- (void)userInfo:(FCUserInfo *)arg1 didChangeAccessTokenForTagID:(NSString *)arg2;
- (void)userInfoDidChangeEditorialArticleVersion:(FCUserInfo *)arg1;
- (void)userInfoDidChangeDateLastViewedSaved:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
- (void)userInfoDidChangeNotificationsUserID:(FCUserInfo *)arg1;
- (void)userInfoDidChangeOnboardingStatus:(FCUserInfo *)arg1;
- (void)userInfoDidChangeFeldsparID:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
@end

