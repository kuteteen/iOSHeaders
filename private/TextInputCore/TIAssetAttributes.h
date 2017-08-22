//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface TIAssetAttributes : NSObject <NSCopying>
{
    NSString *_type;
    NSString *_inputModeLevel;
    NSDictionary *_region;
}

+ (_Bool)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(CDUnknownBlockType)arg3;
+ (_Bool)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(_Bool)arg3 lenientMatch:(_Bool)arg4;
+ (_Bool)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(_Bool)arg3;
+ (_Bool)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(_Bool)arg3;
+ (id)assetAttributesWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3;
@property(readonly, nonatomic) NSDictionary *region; // @synthesize region=_region;
@property(readonly, nonatomic) NSString *inputModeLevel; // @synthesize inputModeLevel=_inputModeLevel;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (_Bool)containMatchingAttributes:(id)arg1;
- (_Bool)containMatchingRegionIn:(id)arg1 shouldLenientlyMatchRegion:(CDUnknownBlockType)arg2;
- (_Bool)containMatchingInputModeLevelIn:(id)arg1;
- (_Bool)containMatchingInputModeLevel:(id)arg1;
- (_Bool)containMatchingTypeIn:(id)arg1;
- (_Bool)containMatchingType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3;

@end

