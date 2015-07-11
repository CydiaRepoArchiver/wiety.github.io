/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:24 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UMANBaseEvent : NSObject {

	double _ts;
	NSString* _type;
	NSString* _date;
	NSString* _time;
	NSString* _session_id;

}

@property (assign,nonatomic) double ts;                        //@synthesize ts=_ts - In the implementation block
@property (nonatomic,copy) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * time;                    //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * session_id;              //@synthesize session_id=_session_id - In the implementation block
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(double)ts;
-(void)setTs:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)date;
-(void)setDate:(NSString *)arg1 ;
-(void)setTime:(NSString *)arg1 ;
-(NSString *)time;
-(id)attributes;
@end

