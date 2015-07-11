/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASMeetingResponseResponse : ASItem {
	NSString* _requestId;
	NSNumber* _status;
	NSString* _eventId;
}
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
-(void)_addResult:(id)result;
// inherited: -(id)asParseRules;
// inherited: -(id)description;
// inherited: -(void)dealloc;
-(id)requestId;
-(void)setRequestId:(id)anId;
-(id)status;
-(void)setStatus:(id)status;
-(id)eventId;
-(void)setEventId:(id)anId;
@end

