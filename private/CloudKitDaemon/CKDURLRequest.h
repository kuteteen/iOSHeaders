//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "C2RequestDelegate.h"
#import "CKDFlowControllable.h"
#import "CKDProtobufMessageSigningDelegate.h"
#import "CKDZoneGatekeeperWaiter.h"

@class C2RequestOptions, CKDClientContext, CKDOperation, CKDOperationMetrics, CKDProtobufStreamWriter, CKDProtocolTranslator, CKDResponseBodyParser, CKDTapToRadarRequest, CKDTrafficLogger, CKTimeLogger, NSArray, NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSInputStream, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_os_activity>, NSObject<OS_voucher>, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface CKDURLRequest : NSObject <C2RequestDelegate, CKDZoneGatekeeperWaiter, CKDProtobufMessageSigningDelegate, CKDFlowControllable>
{
    id <CKDAccountInfoProvider> _accountInfoProvider;
    long long _responseStatusCode;
    NSString *_requestUUID;
    _Bool _didSendRequest;
    _Bool _didFinishLoading;
    _Bool _finished;
    _Bool _didRetrySignature;
    CKDResponseBodyParser *_responseBodyParser;
    _Bool _allowAutomaticRedirects;
    CDUnknownBlockType _requestProgressBlock;
    CDUnknownBlockType _responseProgressBlock;
    CDUnknownBlockType _completionBlock;
    NSData *_fakeResponseData;
    _Bool _haveParsedFakeResponseData;
    CKDProtobufStreamWriter *_streamWriter;
    struct CC_SHA256state_st _mescalTxSignature;
    NSObject<OS_os_activity> *_osActivity;
    NSObject<OS_os_activity> *_transmissionActivity;
    _Bool _needsAuthRetry;
    _Bool _isWaitingOnAuthRenew;
    _Bool _isHandlingAuthRetry;
    _Bool _didRetryAuth;
    _Bool _cancelled;
    _Bool _haveCachedServerType;
    _Bool _haveCachedPartitionType;
    _Bool _didReceiveResponseBodyData;
    NSDictionary *_requestProperties;
    NSArray *_requestOperations;
    CKTimeLogger *_timeLogger;
    id <CKDURLRequestMetricsDelegate> _metricsDelegate;
    id <CKDURLRequestAuthRetryDelegate> _authRetryDelegate;
    CKDOperation *_operation;
    CKDProtocolTranslator *_translator;
    NSString *_automatedDeviceGroup;
    NSDictionary *_clientProvidedAdditionalHeaderValues;
    NSDictionary *_fakeResponseOperationResultByItemID;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_lifecycleQueue;
    NSURLSessionDataTask *_urlSessionTask;
    C2RequestOptions *_c2RequestOptions;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSURLSession *_urlSession;
    NSMutableSet *_responseObjectUUIDs;
    CKDTrafficLogger *_trafficLogger;
    NSString *_deviceID;
    unsigned long long _numDownloadedElements;
    long long _cachedServerType;
    long long _cachedPartitionType;
    NSDate *_dateRequestWentOut;
    CKDOperationMetrics *_metrics;
    NSDictionary *_timingData;
    NSObject<OS_voucher> *_voucher;
    NSString *_cloudKitAuthToken;
    NSString *_iCloudAuthToken;
    NSString *_serverProvidedAutoBugCaptureReason;
    CKDTapToRadarRequest *_serverProvidedTapToRadarRequest;
    NSMutableDictionary *_countsByRequestOperationType;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
}

@property(retain, nonatomic) NSMutableArray *redirectHistory; // @synthesize redirectHistory=_redirectHistory;
@property(retain, nonatomic) NSMutableDictionary *overriddenHeaders; // @synthesize overriddenHeaders=_overriddenHeaders;
@property(retain, nonatomic) NSMutableDictionary *countsByRequestOperationType; // @synthesize countsByRequestOperationType=_countsByRequestOperationType;
@property(retain, nonatomic) CKDTapToRadarRequest *serverProvidedTapToRadarRequest; // @synthesize serverProvidedTapToRadarRequest=_serverProvidedTapToRadarRequest;
@property(copy, nonatomic) NSString *serverProvidedAutoBugCaptureReason; // @synthesize serverProvidedAutoBugCaptureReason=_serverProvidedAutoBugCaptureReason;
@property(nonatomic) _Bool didReceiveResponseBodyData; // @synthesize didReceiveResponseBodyData=_didReceiveResponseBodyData;
@property(retain, nonatomic) NSString *iCloudAuthToken; // @synthesize iCloudAuthToken=_iCloudAuthToken;
@property(retain, nonatomic) NSString *cloudKitAuthToken; // @synthesize cloudKitAuthToken=_cloudKitAuthToken;
@property(retain, nonatomic) NSObject<OS_voucher> *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) CKDOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain) NSDate *dateRequestWentOut; // @synthesize dateRequestWentOut=_dateRequestWentOut;
@property(nonatomic) long long cachedPartitionType; // @synthesize cachedPartitionType=_cachedPartitionType;
@property(nonatomic) long long cachedServerType; // @synthesize cachedServerType=_cachedServerType;
@property(nonatomic) _Bool haveCachedPartitionType; // @synthesize haveCachedPartitionType=_haveCachedPartitionType;
@property(nonatomic) _Bool haveCachedServerType; // @synthesize haveCachedServerType=_haveCachedServerType;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool didRetryAuth; // @synthesize didRetryAuth=_didRetryAuth;
@property(nonatomic) unsigned long long numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) CKDTrafficLogger *trafficLogger; // @synthesize trafficLogger=_trafficLogger;
@property(retain, nonatomic) NSMutableSet *responseObjectUUIDs; // @synthesize responseObjectUUIDs=_responseObjectUUIDs;
@property(retain) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property(retain) C2RequestOptions *c2RequestOptions; // @synthesize c2RequestOptions=_c2RequestOptions;
@property(retain) NSURLSessionDataTask *urlSessionTask; // @synthesize urlSessionTask=_urlSessionTask;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lifecycleQueue; // @synthesize lifecycleQueue=_lifecycleQueue;
@property _Bool isHandlingAuthRetry; // @synthesize isHandlingAuthRetry=_isHandlingAuthRetry;
@property _Bool isWaitingOnAuthRenew; // @synthesize isWaitingOnAuthRenew=_isWaitingOnAuthRenew;
@property _Bool needsAuthRetry; // @synthesize needsAuthRetry=_needsAuthRetry;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *fakeResponseOperationResultByItemID; // @synthesize fakeResponseOperationResultByItemID=_fakeResponseOperationResultByItemID;
@property(retain, nonatomic) NSDictionary *clientProvidedAdditionalHeaderValues; // @synthesize clientProvidedAdditionalHeaderValues=_clientProvidedAdditionalHeaderValues;
@property(retain, nonatomic) NSString *automatedDeviceGroup; // @synthesize automatedDeviceGroup=_automatedDeviceGroup;
@property(retain, nonatomic) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property(nonatomic) __weak CKDOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) __weak id <CKDURLRequestAuthRetryDelegate> authRetryDelegate; // @synthesize authRetryDelegate=_authRetryDelegate;
@property(nonatomic) __weak id <CKDURLRequestMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property(retain, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property(readonly, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(retain, nonatomic) NSDictionary *requestProperties; // @synthesize requestProperties=_requestProperties;
@property(nonatomic) _Bool allowAutomaticRedirects; // @synthesize allowAutomaticRedirects=_allowAutomaticRedirects;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType responseProgressBlock; // @synthesize responseProgressBlock=_responseProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType requestProgressBlock; // @synthesize requestProgressBlock=_requestProgressBlock;
@property(readonly, nonatomic) long long responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) CKDResponseBodyParser *responseBodyParser; // @synthesize responseBodyParser=_responseBodyParser;
@property(retain, nonatomic) id <CKDAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
- (void).cxx_destruct;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)_CFNetworkTaskIdentifierString;
@property(readonly, nonatomic) NSString *sectionID;
@property(readonly, nonatomic) int isolationLevel;
@property(readonly, nonatomic) NSURL *lastRedirectURL;
@property(readonly, nonatomic) NSDictionary *responseHeaders;
- (void)generateSignature:(CDUnknownBlockType)arg1;
- (void)_addRequestHeadersToTransmittedSignature:(id)arg1;
- (void)updateSignatureWithTransmittedBytes:(id)arg1;
- (void)reportStatusWithError:(id)arg1;
- (void)_handleBadPasswordResponse;
- (id)_errorFromHTTPResponse:(id)arg1;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)performASyncOnLifecycleQueueIfNotFinished:(CDUnknownBlockType)arg1;
- (void)performOnLifecycleQueueIfNotFinished:(CDUnknownBlockType)arg1;
- (void)tearDownResourcesAndReleaseTheZoneLocks;
- (void)tearDownResources;
- (void)_tearDownStreamWriter;
- (_Bool)markAsFinished;
@property(readonly) _Bool isFinished;
- (void)_triggerAutoBugCaptureWithErrorPayload:(id)arg1;
- (void)_finishOnLifecycleQueueWithError:(id)arg1;
- (id)_wrapErrorIfNecessary:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (void)_loadRequest:(id)arg1;
- (id)requestOptions;
- (void)_performRequest;
- (void)prepareRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareCloudKitAuthToken;
- (void)_prepareAuthTokens;
- (void)_acquireZoneGates;
- (void)_registerPushTokens;
- (void)_fetchDeviceID;
- (void)_fetchContainerScopedUserID;
- (void)_setupMescal;
- (void)_setupConfiguration;
- (void)_setupPrivateDatabaseURL;
- (void)_setupPublicDatabaseURL;
- (void)performRequest;
- (id)zoneIDsToLock;
- (_Bool)sendRequestAnonymously;
- (_Bool)allowsAnonymousAccount;
- (_Bool)usesiCloudAuthToken;
- (_Bool)usesCloudKitAuthToken;
- (_Bool)allowsAuthedAccount;
- (_Bool)includeContainerInfo;
- (_Bool)requiresTokenRegistration;
- (_Bool)requiresSignature;
- (_Bool)requiresDeviceID;
- (_Bool)requiresConfiguration;
- (_Bool)requiresUserPartitionURL;
- (_Bool)requiresAppPartitionURL;
@property(readonly, nonatomic) CKDProtobufStreamWriter *streamWriter; // @synthesize streamWriter=_streamWriter;
@property(readonly, nonatomic) CKDClientContext *context;
- (double)timeoutIntervalForResource;
- (double)timeoutIntervalForRequest;
@property(readonly, nonatomic) long long databaseScope;
@property(readonly, nonatomic) NSString *operationIDForProtobuf;
@property(readonly, nonatomic) NSString *flowControlKey;
@property(readonly, nonatomic) _Bool allowsPowerNapScheduling;
@property(readonly, nonatomic) unsigned long long networkServiceType;
@property(readonly, nonatomic) NSString *operationID;
- (id)deviceIdentifier;
@property(readonly, nonatomic) NSNumber *operationGroupQuantity;
@property(readonly, nonatomic) NSString *operationGroupName;
@property(readonly, nonatomic) NSString *operationGroupID;
@property(readonly, nonatomic) _Bool allowsBackgroundNetworking;
@property(readonly, nonatomic) _Bool preferAnonymousRequests;
@property(readonly, nonatomic) NSString *authPromptReason;
@property(readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property(readonly, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property(readonly, nonatomic) _Bool allowsCellularAccess;
@property(readonly, nonatomic) long long qualityOfService;
- (id)operationRequestWithType:(int)arg1;
@property(readonly, nonatomic) NSString *requestContentType;
@property(readonly, nonatomic) NSString *protobufOperationName;
@property(readonly, nonatomic) NSString *acceptContentType;
@property(readonly, nonatomic) _Bool shouldSendKeyIDs;
- (_Bool)canSendKeyIDs;
@property(readonly, nonatomic) _Bool shouldCompressBody;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) NSArray *requestOperationClasses;
@property(readonly, nonatomic) int operationType;
- (Class)expectedResponseClass;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) long long partitionType;
@property(readonly, nonatomic) long long serverType;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (_Bool)validate:(id *)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParse509CertObject:(id)arg1;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (void)requestDidParsePlistObject:(id)arg1;
- (void)requestDidParseJSONObject:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (_Bool)expectsSingleObject;
@property(readonly, nonatomic) NSDictionary *additionalHeaderValues;
- (_Bool)shouldLogResponseBody;
- (id)defaultParserForContentType:(id)arg1;
- (CDUnknownBlockType)_xmlObjectParsedBlock;
- (long long)_handlePlistResult:(id)arg1;
- (CDUnknownBlockType)_jsonObjectParsedBlock;
- (long long)_handleServerJSONResult:(id)arg1;
- (CDUnknownBlockType)_protobufObjectParsedBlock;
- (long long)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2;
- (void)_handleAuthFailure;
- (void)_renewAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool expectsResponseBody;
@property(readonly, nonatomic) _Bool hasRequestBody;
- (void)_registerRequestOperationTypesForOperations:(id)arg1;
- (id)requestOperationCountsByOperationType;
@property(readonly, nonatomic) NSInputStream *requestBodyStream;
@property(readonly, nonatomic) NSArray *requestOperations; // @synthesize requestOperations=_requestOperations;
- (id)generateRequestOperations;
@property(readonly, nonatomic) NSString *httpMethod;
@property(readonly, copy) NSString *description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)ckShortDescription;
@property(readonly, nonatomic) _Bool usesBackgroundSession;
- (_Bool)_onLifecycleQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

