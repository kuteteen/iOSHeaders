//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NCNotificationExtensionLoader : NSObject
{
    NSMutableDictionary *_loadedHostViewControllerCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *loadedHostViewControllerCache; // @synthesize loadedHostViewControllerCache=_loadedHostViewControllerCache;
- (void).cxx_destruct;
- (void)_loadViewControllerForExtension:(id)arg1 notificationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearCacheForNotificationRequest:(id)arg1;
- (void)loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

