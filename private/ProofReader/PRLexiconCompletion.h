//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PRLexiconCompletion : NSObject
{
    unsigned int _tokenID;
    double _score;
}

- (double)score;
- (unsigned int)tokenID;
- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;

@end

