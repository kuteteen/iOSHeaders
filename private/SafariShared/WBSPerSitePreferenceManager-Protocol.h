//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, NSString, WBSPerSitePreference, WBSPerSitePreferenceTimeout, WBSPerSitePreferenceValue;

@protocol WBSPerSitePreferenceManager <NSObject>
@property(nonatomic) __weak id <WBSPerSitePreferenceManagerDelegate> delegate;
- (void)removePreferenceValuesForDomains:(NSSet *)arg1 fromPreference:(WBSPerSitePreference *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)getAllDomainsConfiguredForPreference:(WBSPerSitePreference *)arg1 usingBlock:(void (^)(NSSet *))arg2;
- (void)setDefaultValue:(WBSPerSitePreferenceValue *)arg1 ofPreference:(WBSPerSitePreference *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)getDefaultPreferenceValueForPreference:(WBSPerSitePreference *)arg1 completionHandler:(void (^)(WBSPerSitePreferenceValue *))arg2;
- (void)getValueOfPreference:(WBSPerSitePreference *)arg1 forDomain:(NSString *)arg2 withTimeout:(WBSPerSitePreferenceTimeout *)arg3 usingBlock:(void (^)(WBSPerSitePreferenceValue *, _Bool))arg4;
- (void)setValue:(WBSPerSitePreferenceValue *)arg1 ofPreference:(WBSPerSitePreference *)arg2 forDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (NSArray *)valuesForPreference:(WBSPerSitePreference *)arg1;
- (NSArray *)preferences;
@end

