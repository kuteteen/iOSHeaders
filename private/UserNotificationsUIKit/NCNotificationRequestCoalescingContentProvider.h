//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NSMutableArray, NSNumberFormatter;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider
{
    NSNumberFormatter *_decimalFormatter;
    _Bool _deviceAuthenticated;
    NSMutableArray *_coalescedNotificationRequests;
}

@property(nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(retain, nonatomic) NSMutableArray *coalescedNotificationRequests; // @synthesize coalescedNotificationRequests=_coalescedNotificationRequests;
- (void).cxx_destruct;
- (id)_localizedStringWithPlaceholderFormat:(id)arg1 count:(unsigned long long)arg2;
- (void)_updateNotificationRequest;
- (unsigned long long)_indexOfMatchingNotificationRequest:(id)arg1;
- (id)thumbnail;
- (id)_placeholderSecondaryText;
- (id)secondaryText;
- (id)primarySubtitleText;
- (id)primaryText;
- (_Bool)containsMatchingCoalescedNotificationRequest:(id)arg1;
- (void)updateCoalescedNotificationRequest:(id)arg1;
- (void)removeCoalescedNotificationRequest:(id)arg1;
- (void)coalesceNotificationRequest:(id)arg1;
- (unsigned long long)coalesceCount;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;

@end

