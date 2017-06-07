//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASAsset, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefinitionValue : NSObject
{
    NSString *_localizedDictionaryName;
    NSString *_term;
    NSAttributedString *_definition;
    NSString *_longDefinition;
    ASAsset *_rawAsset;
}

@property(retain, nonatomic) ASAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
@property(readonly) NSString *longDefinition; // @synthesize longDefinition=_longDefinition;
@property(readonly) NSAttributedString *definition; // @synthesize definition=_definition;
@property(readonly) NSString *term; // @synthesize term=_term;
@property(readonly) NSString *localizedDictionaryName; // @synthesize localizedDictionaryName=_localizedDictionaryName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3 longDefinition:(id)arg4;

@end

