//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QLExtensionManagerCache;

@interface QLExtensionManager : NSObject
{
    QLExtensionManagerCache *_thumbnailExtensionCache;
    QLExtensionManagerCache *_previewExtensionCache;
}

+ (id)sharedManager;
@property(retain, nonatomic) QLExtensionManagerCache *previewExtensionCache; // @synthesize previewExtensionCache=_previewExtensionCache;
@property(retain, nonatomic) QLExtensionManagerCache *thumbnailExtensionCache; // @synthesize thumbnailExtensionCache=_thumbnailExtensionCache;
- (void).cxx_destruct;
- (void)_addQueryAttributesToExtensionQuery:(id)arg1 withContentType:(id)arg2 appBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)_extensionPointNameForExtensionType:(unsigned long long)arg1;
- (id)extensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generationType:(unsigned long long)arg4;
- (void)extensionContextForContentType:(id)arg1 appBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generationType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (_Bool)existsExtensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generationType:(unsigned long long)arg4;
- (id)_cacheForExtensionType:(unsigned long long)arg1;
- (void)_setupCache;
- (void)remoteViewControllerForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generatonType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;

@end
