//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFLock;

@interface MFWebKitMainThread : NSObject
{
    struct __CFDictionary *_visibleDict;
    MFLock *_visibleDictLock;
}

+ (id)sharedInstance;
- (int)dictValueForMimeType:(id)arg1;
- (void)_mainThreadPopulateDictForMimeType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

