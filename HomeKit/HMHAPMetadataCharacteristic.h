//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HMHAPMetadataCharacteristic : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_chrDescription;
    NSString *_localizedDescription;
    NSString *_type;
    NSString *_format;
    NSString *_unit;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) NSString *chrDescription; // @synthesize chrDescription=_chrDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

