//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPSectionedCollection, NSUUID;

@interface _MPModelLibraryRegisteredTransientState : NSObject
{
    long long _addState;
    long long _keepLocalState;
    MPSectionedCollection *_modelObjects;
    MPSectionedCollection *_relatedModelObjects;
    NSUUID *_token;
}

@property(copy, nonatomic) NSUUID *token; // @synthesize token=_token;
@property(copy, nonatomic) MPSectionedCollection *relatedModelObjects; // @synthesize relatedModelObjects=_relatedModelObjects;
@property(copy, nonatomic) MPSectionedCollection *modelObjects; // @synthesize modelObjects=_modelObjects;
@property(nonatomic) long long keepLocalState; // @synthesize keepLocalState=_keepLocalState;
@property(nonatomic) long long addState; // @synthesize addState=_addState;
- (void).cxx_destruct;

@end

