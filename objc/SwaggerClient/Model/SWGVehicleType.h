#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Route Optimization API
* Our Route Optimization API solves the so called vehicle routing problem fast. It calculates an optimal tour for a set of vehicles, services and constraints
*
* OpenAPI spec version: 1.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGVehicleType
@end

@interface SWGVehicleType : SWGObject

/* Unique identifier for the vehicle type [optional]
 */
@property(nonatomic) NSString* typeId;
/* Profile of vehicle type [optional]
 */
@property(nonatomic) NSString* profile;
/* array of capacity dimensions [optional]
 */
@property(nonatomic) NSArray<NSNumber*>* capacity;
/* speed_factor of vehicle type [optional]
 */
@property(nonatomic) NSNumber* speedFactor;
/* service time factor of vehicle type [optional]
 */
@property(nonatomic) NSNumber* serviceTimeFactor;

@end
