//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UILabelContent : NSObject
{
    CDUnknownBlockType _defaultAttributesProvider;
}

+ (id)emptyContentWithDefaultAttributesProvider:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (id)attributedString;
- (id)string;
- (_Bool)isNil;
- (_Bool)isAttributed;
- (long long)length;
- (id)defaultValueForAttribute:(id)arg1;
- (id)valueForAttribute:(id)arg1 isUniform:(_Bool *)arg2;
- (void)applyToRange:(struct _NSRange)arg1 attribute:(id)arg2 withValue:(id)arg3;
- (void)applyToEntireRangeAttribute:(id)arg1 withValue:(id)arg2;
- (id)_defaultAttributesForString:(id)arg1;
- (id)attributedStringContent;
- (id)contentWithAttributedString:(id)arg1;
- (id)contentWithString:(id)arg1;
- (id)initWithDefaultAttributesProvider:(CDUnknownBlockType)arg1;

@end

