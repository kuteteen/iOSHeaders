//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry
{
    long long _type;
    NSString *_string;
    NSString *_crossfadeString;
}

@property(copy, nonatomic) NSString *crossfadeString; // @synthesize crossfadeString=_crossfadeString;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;

@end
