//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SiriCoreConnectionMetrics : NSObject
{
    NSNumber *_timeUntilOpen;
    NSNumber *_timeUntilFirstByteRead;
    NSNumber *_attemptCount;
    NSNumber *_metricsCount;
    NSNumber *_meanPing;
    NSNumber *_pingCount;
    NSNumber *_unacknowledgedPingCount;
    NSDictionary *_tcpInfoMetricsByInterfaceName;
    NSNumber *_subflowCount;
    NSNumber *_connectedSubflowCount;
    NSString *_primarySubflowInterfaceName;
    NSDictionary *_subflowSwitchCounts;
    SiriCoreConnectionMetrics *_remoteMetrics;
    NSString *_connectionMethod;
    NSString *_connectionEdgeID;
    NSArray *_connectionMethodHistory;
    NSString *_connectionEdgeType;
    NSNumber *_connectionFallbackReason;
    NSNumber *_connectionDelay;
    NSNumber *_firstTxByteDelay;
    NSString *_carrierName;
    NSNumber *_signalStrengthBars;
    NSString *_providerStyle;
    NSDictionary *_flowNetworkInterfaceType;
    NSString *_wifiPhyMode;
    NSString *_wifiChannelInfo;
    NSNumber *_rssi;
    NSNumber *_snr;
    NSDictionary *_symptomsBasedNetworkQuality;
    NSNumber *_dnsResolutionTime;
    NSNumber *_connectionStartTimeToDNSResolutionTimeMsec;
    NSNumber *_connectionEstablishmentTimeMsec;
    NSNumber *_connectionStartTimeToConnectionEstablishmentTimeMsec;
    NSNumber *_tlsHandshakeTimeMsec;
    NSNumber *_connectionStartTimeToTLSHandshakeTimeMsec;
}

@property(copy, nonatomic) NSNumber *connectionStartTimeToTLSHandshakeTimeMsec; // @synthesize connectionStartTimeToTLSHandshakeTimeMsec=_connectionStartTimeToTLSHandshakeTimeMsec;
@property(copy, nonatomic) NSNumber *tlsHandshakeTimeMsec; // @synthesize tlsHandshakeTimeMsec=_tlsHandshakeTimeMsec;
@property(copy, nonatomic) NSNumber *connectionStartTimeToConnectionEstablishmentTimeMsec; // @synthesize connectionStartTimeToConnectionEstablishmentTimeMsec=_connectionStartTimeToConnectionEstablishmentTimeMsec;
@property(copy, nonatomic) NSNumber *connectionEstablishmentTimeMsec; // @synthesize connectionEstablishmentTimeMsec=_connectionEstablishmentTimeMsec;
@property(copy, nonatomic) NSNumber *connectionStartTimeToDNSResolutionTimeMsec; // @synthesize connectionStartTimeToDNSResolutionTimeMsec=_connectionStartTimeToDNSResolutionTimeMsec;
@property(copy, nonatomic) NSNumber *dnsResolutionTime; // @synthesize dnsResolutionTime=_dnsResolutionTime;
@property(copy, nonatomic) NSDictionary *symptomsBasedNetworkQuality; // @synthesize symptomsBasedNetworkQuality=_symptomsBasedNetworkQuality;
@property(copy, nonatomic) NSNumber *snr; // @synthesize snr=_snr;
@property(copy, nonatomic) NSNumber *rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *wifiChannelInfo; // @synthesize wifiChannelInfo=_wifiChannelInfo;
@property(copy, nonatomic) NSString *wifiPhyMode; // @synthesize wifiPhyMode=_wifiPhyMode;
@property(copy, nonatomic) NSDictionary *flowNetworkInterfaceType; // @synthesize flowNetworkInterfaceType=_flowNetworkInterfaceType;
@property(copy, nonatomic) NSString *providerStyle; // @synthesize providerStyle=_providerStyle;
@property(copy, nonatomic) NSNumber *signalStrengthBars; // @synthesize signalStrengthBars=_signalStrengthBars;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(copy, nonatomic) NSNumber *firstTxByteDelay; // @synthesize firstTxByteDelay=_firstTxByteDelay;
@property(copy, nonatomic) NSNumber *connectionDelay; // @synthesize connectionDelay=_connectionDelay;
@property(copy, nonatomic) NSNumber *connectionFallbackReason; // @synthesize connectionFallbackReason=_connectionFallbackReason;
@property(copy, nonatomic) NSString *connectionEdgeType; // @synthesize connectionEdgeType=_connectionEdgeType;
@property(copy, nonatomic) NSArray *connectionMethodHistory; // @synthesize connectionMethodHistory=_connectionMethodHistory;
@property(copy, nonatomic) NSString *connectionEdgeID; // @synthesize connectionEdgeID=_connectionEdgeID;
@property(copy, nonatomic) NSString *connectionMethod; // @synthesize connectionMethod=_connectionMethod;
@property(retain, nonatomic) SiriCoreConnectionMetrics *remoteMetrics; // @synthesize remoteMetrics=_remoteMetrics;
@property(copy, nonatomic) NSDictionary *subflowSwitchCounts; // @synthesize subflowSwitchCounts=_subflowSwitchCounts;
@property(copy, nonatomic) NSString *primarySubflowInterfaceName; // @synthesize primarySubflowInterfaceName=_primarySubflowInterfaceName;
@property(copy, nonatomic) NSNumber *connectedSubflowCount; // @synthesize connectedSubflowCount=_connectedSubflowCount;
@property(copy, nonatomic) NSNumber *subflowCount; // @synthesize subflowCount=_subflowCount;
@property(copy, nonatomic, setter=setTCPInfoMetricsByInterfaceName:) NSDictionary *tcpInfoMetricsByInterfaceName; // @synthesize tcpInfoMetricsByInterfaceName=_tcpInfoMetricsByInterfaceName;
@property(copy, nonatomic) NSNumber *unacknowledgedPingCount; // @synthesize unacknowledgedPingCount=_unacknowledgedPingCount;
@property(copy, nonatomic) NSNumber *pingCount; // @synthesize pingCount=_pingCount;
@property(copy, nonatomic) NSNumber *meanPing; // @synthesize meanPing=_meanPing;
@property(copy, nonatomic) NSNumber *metricsCount; // @synthesize metricsCount=_metricsCount;
@property(copy, nonatomic) NSNumber *attemptCount; // @synthesize attemptCount=_attemptCount;
@property(copy, nonatomic) NSNumber *timeUntilFirstByteRead; // @synthesize timeUntilFirstByteRead=_timeUntilFirstByteRead;
@property(copy, nonatomic) NSNumber *timeUntilOpen; // @synthesize timeUntilOpen=_timeUntilOpen;
- (void).cxx_destruct;
- (id)getConnectionMetricsDescription;
- (void)setConnectionMetricsFromNWConnectionForPOP:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setConnectionMetricsFromNWConnectionForDirect:(id)arg1 isMPTCP:(_Bool)arg2 attemptedEndpoints:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)setConnectionMetricsFromConnection:(id)arg1 isPop:(_Bool)arg2 isMPTCP:(_Bool)arg3 attemptedEndpoints:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_setConnectionMetricsTCPInfo:(id)arg1;
- (void)setConnectionMetricsFromStreamForPOP:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setConnectionMetricsFromStreamForDirect:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setConnectionMetricsFromStream:(id)arg1 isPop:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end

