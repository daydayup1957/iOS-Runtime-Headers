/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitNotificationEvent : PBCodable <NSCopying> {
    HDAWDHealthKitAchievement * _achievement;
    HDAWDHealthKitActivityCache * _activityCache;
    int  _alertType;
    HDAWDHealthKitConcurrentCalendarItem * _calendarItem;
    BOOL  _dndEnabled;
    int  _endDate;
    HDAWDHealthKitExperimentalCondition * _experimentalCondition;
    BOOL  _failedPosting;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _goalTypes;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int timestamp : 1; 
        unsigned int alertType : 1; 
        unsigned int testAction : 1; 
        unsigned int dndEnabled : 1; 
        unsigned int failedPosting : 1; 
    }  _has;
    HDAWDHealthKitNotificationResponseFlags * _responseFlags;
    int  _startDate;
    int  _testAction;
    unsigned int  _timestamp;
    NSMutableArray * _views;
    HDAWDHealthKitWeeklySummaryDetail * _weeklySummaryDetail;
}

@property (nonatomic, retain) HDAWDHealthKitAchievement *achievement;
@property (nonatomic, retain) HDAWDHealthKitActivityCache *activityCache;
@property (nonatomic) int alertType;
@property (nonatomic, retain) HDAWDHealthKitConcurrentCalendarItem *calendarItem;
@property (nonatomic) BOOL dndEnabled;
@property (nonatomic) int endDate;
@property (nonatomic, retain) HDAWDHealthKitExperimentalCondition *experimentalCondition;
@property (nonatomic) BOOL failedPosting;
@property (nonatomic, readonly) unsigned int*goalTypes;
@property (nonatomic, readonly) unsigned int goalTypesCount;
@property (nonatomic, readonly) BOOL hasAchievement;
@property (nonatomic, readonly) BOOL hasActivityCache;
@property (nonatomic) BOOL hasAlertType;
@property (nonatomic, readonly) BOOL hasCalendarItem;
@property (nonatomic) BOOL hasDndEnabled;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic, readonly) BOOL hasExperimentalCondition;
@property (nonatomic) BOOL hasFailedPosting;
@property (nonatomic, readonly) BOOL hasResponseFlags;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL hasTestAction;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasWeeklySummaryDetail;
@property (nonatomic, retain) HDAWDHealthKitNotificationResponseFlags *responseFlags;
@property (nonatomic) int startDate;
@property (nonatomic) int testAction;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic, retain) NSMutableArray *views;
@property (nonatomic, retain) HDAWDHealthKitWeeklySummaryDetail *weeklySummaryDetail;

+ (Class)viewsType;

- (void).cxx_destruct;
- (int)StringAsAlertType:(id)arg1;
- (int)StringAsTestAction:(id)arg1;
- (id)achievement;
- (id)activityCache;
- (void)addGoalTypes:(unsigned int)arg1;
- (void)addViews:(id)arg1;
- (int)alertType;
- (id)alertTypeAsString:(int)arg1;
- (id)calendarItem;
- (void)clearGoalTypes;
- (void)clearViews;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)dndEnabled;
- (int)endDate;
- (id)experimentalCondition;
- (BOOL)failedPosting;
- (unsigned int*)goalTypes;
- (unsigned int)goalTypesAtIndex:(unsigned int)arg1;
- (unsigned int)goalTypesCount;
- (BOOL)hasAchievement;
- (BOOL)hasActivityCache;
- (BOOL)hasAlertType;
- (BOOL)hasCalendarItem;
- (BOOL)hasDndEnabled;
- (BOOL)hasEndDate;
- (BOOL)hasExperimentalCondition;
- (BOOL)hasFailedPosting;
- (BOOL)hasResponseFlags;
- (BOOL)hasStartDate;
- (BOOL)hasTestAction;
- (BOOL)hasTimestamp;
- (BOOL)hasWeeklySummaryDetail;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)responseFlags;
- (void)setAchievement:(id)arg1;
- (void)setActivityCache:(id)arg1;
- (void)setAlertType:(int)arg1;
- (void)setCalendarItem:(id)arg1;
- (void)setDndEnabled:(BOOL)arg1;
- (void)setEndDate:(int)arg1;
- (void)setExperimentalCondition:(id)arg1;
- (void)setFailedPosting:(BOOL)arg1;
- (void)setGoalTypes:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setHasAlertType:(BOOL)arg1;
- (void)setHasDndEnabled:(BOOL)arg1;
- (void)setHasEndDate:(BOOL)arg1;
- (void)setHasFailedPosting:(BOOL)arg1;
- (void)setHasStartDate:(BOOL)arg1;
- (void)setHasTestAction:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setResponseFlags:(id)arg1;
- (void)setStartDate:(int)arg1;
- (void)setTestAction:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setViews:(id)arg1;
- (void)setWeeklySummaryDetail:(id)arg1;
- (int)startDate;
- (int)testAction;
- (id)testActionAsString:(int)arg1;
- (unsigned int)timestamp;
- (id)views;
- (id)viewsAtIndex:(unsigned int)arg1;
- (unsigned int)viewsCount;
- (id)weeklySummaryDetail;
- (void)writeTo:(id)arg1;

@end