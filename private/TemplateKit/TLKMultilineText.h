//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKMultilineText : TLKObject
{
    NSString *_text;
    unsigned long long _maxLines;
}

+ (id)textWithString:(id)arg1;
@property unsigned long long maxLines; // @synthesize maxLines=_maxLines;
@property(retain) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (id)observableProperties;

@end
