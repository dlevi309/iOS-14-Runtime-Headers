/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSQLAttributeExtension.h>

@class NSObject, NSArray, NSSQLEntity, NSString, NSAttributeDescription;

@interface NSSQLLocationAttributeRTreeExtension : NSObject <NSSQLAttributeExtension> {

	NSObject* _userInfoObject;
	NSArray* _components;
	NSSQLEntity* _sqlEntity;
	NSString* _attributeName;
	NSString* _rtreeTableName;
	NSAttributeDescription* _attributeDescription;
	NSAttributeDescription* _latProp;
	NSAttributeDescription* _longProp;
	NSArray* _insertSQLStrings;
	NSArray* _dropSQLStrings;
	NSArray* _bulkUpdateSQLStrings;

}

@property (nonatomic,readonly) NSObject * userInfoObject;                                  //@synthesize userInfoObject=_userInfoObject - In the implementation block
@property (nonatomic,readonly) NSArray * components;                                       //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSAttributeDescription * attributeDescription;              //@synthesize attributeDescription=_attributeDescription - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * sqlEntity;                                    //@synthesize sqlEntity=_sqlEntity - In the implementation block
@property (nonatomic,readonly) NSString * rtreeTableName;                                  //@synthesize rtreeTableName=_rtreeTableName - In the implementation block
@property (nonatomic,readonly) NSAttributeDescription * latProp;                           //@synthesize latProp=_latProp - In the implementation block
@property (nonatomic,readonly) NSAttributeDescription * longProp;                          //@synthesize longProp=_longProp - In the implementation block
@property (nonatomic,readonly) NSArray * insertSQLStrings; 
@property (nonatomic,readonly) NSArray * dropSQLStrings; 
@property (nonatomic,readonly) NSArray * bulkUpdateSQLStrings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newRTReeTableNameForAttribute:(id)arg1 onEntity:(id)arg2 ;
-(BOOL)validate:(id*)arg1 ;
-(NSAttributeDescription *)attributeDescription;
-(NSArray *)insertSQLStrings;
-(NSString *)rtreeTableName;
-(BOOL)isEqualToExtension:(id)arg1 ;
-(NSSQLEntity *)sqlEntity;
-(NSAttributeDescription *)latProp;
-(NSAttributeDescription *)longProp;
-(NSObject *)userInfoObject;
-(BOOL)validatePropertyWithDescription:(id)arg1 andName:(id)arg2 forUseAs:(id)arg3 onAttributeNamed:(id)arg4 onEntityNamed:(id)arg5 error:(id*)arg6 ;
-(NSArray *)components;
-(NSArray *)bulkUpdateSQLStrings;
-(id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3 ;
-(NSArray *)dropSQLStrings;
-(void)generateSQLStrings;
-(void)dealloc;
@end

