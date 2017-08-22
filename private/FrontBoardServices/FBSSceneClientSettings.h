//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class BSSettings, NSSet, NSString;

@interface FBSSceneClientSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    double _preferredLevel;
    long long _preferredInterfaceOrientation;
    NSSet *_occlusions;
    NSString *_preferredSceneHostIdentifier;
    BSSettings *_otherSettings;
}

+ (_Bool)_isMutable;
+ (id)settings;
@property(readonly, copy, nonatomic) NSString *preferredSceneHostIdentifier; // @synthesize preferredSceneHostIdentifier=_preferredSceneHostIdentifier;
@property(readonly, copy, nonatomic) NSSet *occlusions; // @synthesize occlusions=_occlusions;
@property(readonly, nonatomic) long long preferredInterfaceOrientation; // @synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation;
@property(readonly, nonatomic) double preferredLevel; // @synthesize preferredLevel=_preferredLevel;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)otherSettings;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

