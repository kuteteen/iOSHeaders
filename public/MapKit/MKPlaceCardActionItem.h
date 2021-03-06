//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor, _MKMapItemAttribution;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionItem : NSObject
{
    _Bool _enabled;
    _Bool _selected;
    NSString *_displayString;
    unsigned long long _type;
    NSArray *_urlStrings;
    _MKMapItemAttribution *_attribution;
    NSString *_glyph;
    UIColor *_glyphColor;
    MKPlaceCardActionItem *_selectedItem;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) MKPlaceCardActionItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(copy, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(retain, nonatomic) _MKMapItemAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) NSArray *urlStrings; // @synthesize urlStrings=_urlStrings;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(_Bool)arg3 urlStrings:(id)arg4 attribution:(id)arg5;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(_Bool)arg3;

@end

