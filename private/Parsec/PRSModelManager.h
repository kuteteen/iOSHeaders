//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PRSModelResourceLoader;

@interface PRSModelManager : NSObject
{
    PRSModelResourceLoader *_resourceLoader;
}

+ (id)sharedModelManager;
@property(retain) PRSModelResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
- (void).cxx_destruct;
- (id)computeScoreDictForFeatures:(id)arg1 includeEmbeddings:(_Bool)arg2;
- (void)updateResourcesWithFileHandle:(id)arg1;

@end
