//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLPlacemark, NSString, NSTimeZone;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_IATACode;
    NSString *_name;
    NSString *_city;
    NSTimeZone *_timeZone;
    CLPlacemark *_placemark;
    struct CLLocationCoordinate2D _location;
}

+ (BOOL)supportsSecureCoding;
@property(retain) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSString *city; // @synthesize city=_city;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *IATACode; // @synthesize IATACode=_IATACode;
//- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchPlacemarkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

