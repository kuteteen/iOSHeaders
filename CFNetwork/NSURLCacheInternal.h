//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSURLCacheInternal : NSObject
{
    unsigned long long memoryCapacity;
    unsigned long long diskCapacity;
    NSString *diskPath;
    unsigned long long currentMemoryUsage;
    unsigned long long currentDiskUsage;
    // Error parsing type: ^{_CFURLCache={__CFRuntimeBase=QAQ}{shared_ptr<__CFURLCache>=^{__CFURLCache}^{__shared_weak_count}}}, name: _cacheRef
}

- (void)finalize;
- (void)dealloc;

@end

