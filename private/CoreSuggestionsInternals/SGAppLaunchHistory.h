//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _DKKnowledgeStore;

@interface SGAppLaunchHistory : NSObject
{
    _DKKnowledgeStore *_knowledgeStore;
}

- (void).cxx_destruct;
- (unsigned long long)launchCountForBundleId:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)init;

@end
