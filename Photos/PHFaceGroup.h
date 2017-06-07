//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObject.h>

@interface PHFaceGroup : PHObject
{
    long long _unnamedFaceCount;
    long long _personModelId;
    long long _personBuilderState;
}

+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithOptions:(id)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)identifierCode;
@property(readonly, nonatomic) long long personBuilderState; // @synthesize personBuilderState=_personBuilderState;
@property(readonly, nonatomic) long long personModelId; // @synthesize personModelId=_personModelId;
@property(readonly, nonatomic) long long unnamedFaceCount; // @synthesize unnamedFaceCount=_unnamedFaceCount;
- (long long)getPersonModelId;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end

