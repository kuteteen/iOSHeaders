//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@protocol HUStepperCellProtocol <NSObject>
@property(copy, nonatomic) NSNumber *stepperValue;
@property(copy, nonatomic) NSNumber *stepValue;
@property(copy, nonatomic) NSNumber *maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue;
@property(nonatomic) __weak id <HUStepperCellDelegate> stepperCellDelegate;
@end

