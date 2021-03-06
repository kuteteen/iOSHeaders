//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFCentroidModel.h"

@class IFCentroidModelParameters, NSArray, NSString;

@interface IFCentroidModel : NSObject <IFCentroidModel>
{
    id <IFCentroidStore><IFCentroidStoreInternal> _store;
    IFCentroidModelParameters *_parameters;
}

+ (id)modelWithStore:(id)arg1 parameters:(id)arg2;
@property(retain) IFCentroidModelParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) id <IFCentroidStore><IFCentroidStoreInternal> store; // @synthesize store=_store;
- (void).cxx_destruct;
@property(readonly) NSArray *centroid;
- (double)scoreForFeatureVector:(id)arg1 scoringParameters:(id)arg2;
- (id)_vectorFromFeatureVector:(id)arg1;
- (id)_centroidVectorFromFeatureVector:(id)arg1 withScaling:(id)arg2;
- (_Bool)update;
- (id)initWithStore:(id)arg1 parameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

