/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:24 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary, MobClickInternal;

@interface UMANJob : NSObject {

	NSString* _status;
	NSMutableArray* _launches;
	NSMutableArray* _terminates;
	NSMutableArray* _events;
	NSMutableArray* _ekv;
	NSMutableArray* _errors;
	NSMutableDictionary* _header;
	MobClickInternal* _mobInternal;

}

@property (nonatomic,copy) NSString * status;                             //@synthesize status=_status - In the implementation block
@property (retain) NSMutableArray * launches;                             //@synthesize launches=_launches - In the implementation block
@property (retain) NSMutableArray * terminates;                           //@synthesize terminates=_terminates - In the implementation block
@property (retain) NSMutableArray * events;                               //@synthesize events=_events - In the implementation block
@property (retain) NSMutableArray * ekv;                                  //@synthesize ekv=_ekv - In the implementation block
@property (retain) NSMutableArray * errors;                               //@synthesize errors=_errors - In the implementation block
@property (retain) NSMutableDictionary * header;                          //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) MobClickInternal * mobInternal;              //@synthesize mobInternal=_mobInternal - In the implementation block
-(MobClickInternal *)mobInternal;
-(NSMutableArray *)launches;
-(NSMutableArray *)terminates;
-(NSMutableArray *)ekv;
-(void)setMobInternal:(MobClickInternal *)arg1 ;
-(id)toJsonWithHeader:(id)arg1 ;
-(char)hasTask;
-(id)toDictionary:(char)arg1 ;
-(void)setLaunches:(NSMutableArray *)arg1 ;
-(void)setTerminates:(NSMutableArray *)arg1 ;
-(void)setEkv:(NSMutableArray *)arg1 ;
-(NSMutableArray *)events;
-(void)dealloc;
-(id)init;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)header;
-(void)setHeader:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)errors;
-(void)setErrors:(NSMutableArray *)arg1 ;
@end

