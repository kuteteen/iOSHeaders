//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MKServerFormattedStringParameters;

@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding>
{
    id <GEOServerFormattedString> _geoServerString;
    MKServerFormattedStringParameters *_parameters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) MKServerFormattedStringParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) id <GEOServerFormattedString> geoServerString; // @synthesize geoServerString=_geoServerString;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqualToServerFormattedString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)multiPartAttributedStringWithAttributes:(id)arg1;
- (id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoServerString:(id)arg1 parameters:(id)arg2;

@end

