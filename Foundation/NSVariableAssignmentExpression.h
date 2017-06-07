//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExpression.h>

@class NSVariableExpression;

__attribute__((visibility("hidden")))
@interface NSVariableAssignmentExpression : NSExpression
{
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}

+ (_Bool)supportsSecureCoding;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)subexpression;
- (id)variable;
- (id)assignmentVariable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;
- (void)dealloc;

@end

