//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@interface TLKTableColumnAlignment : TLKObject
{
    _Bool _isEqualWidth;
    unsigned long long _columnAlignment;
    long long _dataAlignment;
}

@property _Bool isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property long long dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property unsigned long long columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (id)description;
- (long long)textAlignment;
- (id)observableProperties;

@end
