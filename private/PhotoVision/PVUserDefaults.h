//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVUserDefaults : NSObject
{
}

+ (_Bool)suggestionsLogEnabled;
+ (_Bool)faceClusteringPerfLogEnabled;
+ (_Bool)faceClusteringLogEnabled;
+ (long long)faceGroupCountToEnableFacesNamingFlow;
+ (long long)faceCountToEnableFacesNamingFlow;
+ (long long)maxFaceCountForClustering;
+ (long long)minFaceCountToTriggerClustering;
+ (long long)percentRenameToThreshold;
+ (long long)countRenameToThreshold;
+ (long long)percentRenameFromThreshold;
+ (long long)countRenameFromThreshold;
+ (_Bool)personMergingEnabled;
+ (_Bool)faceAutonamingEnabled;
+ (float)facePrimarySuggestionsThreshold;
+ (float)faceMergeFaceOverlapThreshold;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (float)faceRecallThreshold;
+ (float)faceAutonamingThreshold;
+ (float)faceClusteringThreshold;
+ (long long)faceClusteringDelay;
+ (double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2;
+ (float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2;
+ (int)_intValueForKey:(id)arg1 defaultValue:(int)arg2;
+ (_Bool)_boolValueForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (void)initialize;

@end
