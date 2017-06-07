//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLVideoQualityOption : NSObject
{
    NSString *_identifier;
    NSString *_name;
    long long _size;
    NSString *_exportPreset;
}

+ (id)videoQualityOptionForIdentifier:(id)arg1;
@property(retain, nonatomic) NSString *exportPreset; // @synthesize exportPreset=_exportPreset;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)sizeDescription;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 exportPreset:(id)arg3 size:(long long)arg4;

@end

