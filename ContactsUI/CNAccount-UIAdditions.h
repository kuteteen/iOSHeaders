//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNAccount.h>

@class NSString;

@interface CNAccount (UIAdditions)
+ (_Bool)_cnui_isFacebookACAccount:(id)arg1;
+ (id)_cnui_displayNameForACAccount:(id)arg1;
+ (id)_cnui_displayNameForLocal;
+ (_Bool)_cnui_requestRefreshWithUserAction:(_Bool)arg1;
+ (void)_cnui_canRequestRefreshWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_cnui_accountStore;
@property(readonly, nonatomic) NSString *_cnui_displayName;
@end

