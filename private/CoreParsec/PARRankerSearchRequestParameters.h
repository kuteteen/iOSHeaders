//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PARRankerSearchRequestParameters : NSObject
{
    unsigned long long _numTopics;
    double _thresholdTopicScore;
    unsigned long long _topicScoreBinSize;
}

+ (id)responseFromJSON:(id)arg1;
+ (id)defaultValue;
@property(nonatomic) unsigned long long topicScoreBinSize; // @synthesize topicScoreBinSize=_topicScoreBinSize;
@property(nonatomic) double thresholdTopicScore; // @synthesize thresholdTopicScore=_thresholdTopicScore;
@property(nonatomic) unsigned long long numTopics; // @synthesize numTopics=_numTopics;

@end

