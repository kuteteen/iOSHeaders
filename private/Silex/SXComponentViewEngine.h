//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXComponentViewEngine.h"

@class NSString, SXComponentTypeMatching;

@interface SXComponentViewEngine : NSObject <SXComponentViewEngine>
{
    SXComponentTypeMatching *_factoryMatching;
    id <SXComponentViewPostProcessorManager> _postProcessorManager;
}

@property(readonly, nonatomic) id <SXComponentViewPostProcessorManager> postProcessorManager; // @synthesize postProcessorManager=_postProcessorManager;
@property(readonly, nonatomic) SXComponentTypeMatching *factoryMatching; // @synthesize factoryMatching=_factoryMatching;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithFactories:(id)arg1 postProcessorManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

