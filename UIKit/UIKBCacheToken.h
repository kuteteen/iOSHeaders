//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying>
{
    NSMutableArray *_components;
    NSString *_name;
    double _scale;
    int _emptyFields;
    long long _renderFlags;
}

+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize)arg4;
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;
+ (id)tokenForKeyMask:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2;
+ (id)tokenForKeyplane:(id)arg1;
@property(nonatomic) long long renderFlags; // @synthesize renderFlags=_renderFlags;
@property(nonatomic) int emptyFields; // @synthesize emptyFields=_emptyFields;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(_Bool)arg2;
- (id)stringForSplitState:(_Bool)arg1 handBias:(long long)arg2;
- (id)stringForState:(int)arg1;
- (id)stringForKey:(id)arg1 state:(int)arg2;
@property(readonly, nonatomic) NSString *string;
- (id)stringForComponentArray:(id)arg1 additionalValues:(CDUnknownBlockType)arg2;
- (id)stringForConstruction:(CDUnknownBlockType)arg1;
- (int)_writeArray:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeEdgeInsets:(struct UIEdgeInsets)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeNumber:(float)arg1 toStr:(char *)arg2;
- (int)_writeString:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (void)annotateWithInt:(int)arg1;
- (void)annotateWithBool:(_Bool)arg1;
- (void)resetAnnotations;
@property(readonly, nonatomic) _Bool hasKey;
- (_Bool)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2;
@property(nonatomic) CDStruct_227bb23d styling;
@property(nonatomic) int displayHint;
@property(nonatomic) int rowHint;
@property(nonatomic) struct CGSize size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithComponents:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;

@end

