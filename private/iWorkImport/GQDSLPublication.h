//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/GQDRoot.h>

@class GQDSLPageMargins, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDSLPublication : GQDRoot
{
    struct CGSize mPageSize;
    GQDSLPageMargins *mPageMargins;
    GQDSStylesheet *mStylesheet;
    _Bool mHasBody;
    _Bool mIsOldTemplateNameMapInitialized;
    struct __CFDictionary *mOldTemplateNameMap;
    _Bool mShowOutliner;
    _Bool mHasHeaders;
    _Bool mHasFooters;
}

+ (struct _xmlNs *)appNamespace;
- (_Bool)hasFooters;
- (_Bool)hasHeaders;
- (_Bool)showOutliner;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileUrl:(struct __CFURL *)arg3;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg1;
- (_Bool)hasBody;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)setPageMargins:(id)arg1;
- (id)pageMargins;
- (struct CGSize)pageSize;
- (void)dealloc;
- (id)init;
- (struct __CFString *)createUpgradedPathForOldAssetPath:(struct __CFString *)arg1;
- (struct __CFArray *)createUpgradedPathComponentsFromOldTemplatePathComponents:(struct __CFArray *)arg1;
- (struct __CFString *)createFixedPathForOldAppBundleResourcePath:(struct __CFString *)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

