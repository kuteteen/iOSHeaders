//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextReplacementGenerator.h>

@class NSTextAlternatives;

__attribute__((visibility("hidden")))
@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator
{
    NSTextAlternatives *_alternatives;
}

@property(readonly, nonatomic) NSTextAlternatives *alternatives; // @synthesize alternatives=_alternatives;
- (void).cxx_destruct;
- (id)replacements;
- (id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3;

@end

