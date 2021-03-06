//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationRequest, NSArray, NSDate, NSIndexPath, NSSet, NSString;

@protocol NCNotificationSectionList <NSObject>
@property(readonly, nonatomic) unsigned long long sectionCount;
@property(nonatomic) __weak id <NCNotificationSectionListDelegate> delegate;
- (_Bool)containsNotificationRequest:(NCNotificationRequest *)arg1;
- (long long)sectionIndexForListSectionIdentifier:(NSString *)arg1;
- (void)clearSectionWithIdentifier:(NSString *)arg1;
- (void)clearAllSections;
- (NCNotificationRequest *)notificationRequestAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)notificationRequestsAtIndexPaths:(NSArray *)arg1;
- (NSArray *)requestsIndexPathsPassingTest:(_Bool (^)(NCNotificationRequest *))arg1;
- (NSDate *)dateForSectionIdentifier:(NSString *)arg1;
- (NSSet *)notificationRequestsForSectionIdentifier:(NSString *)arg1;
- (NSSet *)allNotificationRequests;
- (void)showRequestsForNotificationSectionIdentifier:(NSString *)arg1 subSectionIdentifier:(NSString *)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(NSString *)arg1 subSectionIdentifier:(NSString *)arg2;
- (NSIndexPath *)removeNotificationRequest:(NCNotificationRequest *)arg1;
- (NSIndexPath *)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (NSIndexPath *)insertNotificationRequest:(NCNotificationRequest *)arg1;
- (unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1;
- (NSString *)identifierForSectionIndex:(unsigned long long)arg1;
- (NSString *)titleForSectionIndex:(unsigned long long)arg1;
@end

