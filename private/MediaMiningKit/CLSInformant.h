//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CLSInformant : NSObject
{
    NSString *_uuid;
}

+ (id)supportedOutputClueKeys;
+ (id)informantDependenciesIdentifiers;
+ (id)identifier;
+ (id)classIdentifier;
+ (id)familyIdentifier;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)_gatherCluesForInvestigation:(id)arg1;
- (id)gatherCluesOperationForInvestigation:(id)arg1;
- (id)uniqueIdentifier;
- (id)init;

@end

