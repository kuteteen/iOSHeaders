//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXFontFamily.h"

@class NSSet, NSString;

@interface SXFontFamily : NSObject <SXFontFamily>
{
    NSString *_familyName;
    NSSet *_fontFaces;
}

@property(readonly, nonatomic) NSSet *fontFaces; // @synthesize fontFaces=_fontFaces;
@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithFamilyName:(id)arg1 faces:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

