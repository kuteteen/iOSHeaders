//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MFSQLExpression : NSObject
{
    NSString *_expression;
}

+ (id)expressionWithString:(id)arg1;
@property(retain, nonatomic) NSString *expression; // @synthesize expression=_expression;
- (void).cxx_destruct;
- (id)endsWithString:(id)arg1;
- (id)doesNotContainsString:(id)arg1;
- (id)containsString:(id)arg1;
- (id)beginsWithString:(id)arg1;
- (id)notLike:(id)arg1 escapeCharacter:(unsigned short)arg2;
- (id)notLike:(id)arg1;
- (id)like:(id)arg1 escapeCharacter:(unsigned short)arg2;
- (id)like:(id)arg1;
- (id)equalToString:(id)arg1;
- (id)equalToExpresion:(id)arg1;
- (id)SQLExpression;
- (id)initWithString:(id)arg1;

@end

