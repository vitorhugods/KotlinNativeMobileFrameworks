#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ExampleKoin_coreKoin, ExampleCommunity, ExamplePost, ExampleBaseModel, ExampleRedditPostDTO, ExampleRedditChildDTO, ExampleRedditDataDTO, ExampleRedditPostResultDTO, ExampleKoin_coreKoinApplication, ExampleKoin_coreModule, ExampleKoin_coreDefinitionParameters, ExampleKoin_coreScope, ExampleKoin_coreLogger, ExampleKoin_corePropertyRegistry, ExampleKoin_coreScopeRegistry, ExampleKotlinArray, ExampleKoin_coreLevel, ExampleKoin_coreBeanDefinition, ExampleKoin_coreThreadScope, ExampleKoin_coreOptions, ExampleKoin_coreScopeDSL, ExampleKoin_coreScopeDefinition, ExampleKoin_coreInstanceRegistry, ExampleKotlinx_serialization_runtimeSerialKind, ExampleKotlinNothing, ExampleKotlinx_serialization_runtimeUpdateMode, ExampleKotlinEnum, ExampleKoin_coreKind, ExampleKoin_coreProperties, ExampleKoin_coreCallbacks, ExampleKoin_coreInstanceFactory, ExampleKoin_coreInstanceContext;

@protocol ExampleKoin_coreKoinComponent, ExamplePostRepository, ExampleKotlinx_serialization_runtimeKSerializer, ExampleKotlinKClass, ExampleKoin_coreQualifier, ExampleKotlinLazy, ExampleKotlinx_serialization_runtimeEncoder, ExampleKotlinx_serialization_runtimeSerialDescriptor, ExampleKotlinx_serialization_runtimeSerializationStrategy, ExampleKotlinx_serialization_runtimeDecoder, ExampleKotlinx_serialization_runtimeDeserializationStrategy, ExampleKotlinKDeclarationContainer, ExampleKotlinKAnnotatedElement, ExampleKotlinKClassifier, ExampleKoin_coreScopeCallback, ExampleKotlinx_serialization_runtimeCompositeEncoder, ExampleKotlinx_serialization_runtimeSerialModule, ExampleKotlinAnnotation, ExampleKotlinx_serialization_runtimeCompositeDecoder, ExampleKotlinIterator, ExampleKotlinComparable, ExampleKotlinx_serialization_runtimeSerialModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface ExampleMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface ExampleMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface ExampleNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface ExampleByte : ExampleNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface ExampleUByte : ExampleNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface ExampleShort : ExampleNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface ExampleUShort : ExampleNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface ExampleInt : ExampleNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface ExampleUInt : ExampleNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface ExampleLong : ExampleNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface ExampleULong : ExampleNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface ExampleFloat : ExampleNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface ExampleDouble : ExampleNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface ExampleBoolean : ExampleNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol ExampleKoin_coreKoinComponent
@required
- (ExampleKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((swift_name("BaseModel")))
@interface ExampleBaseModel : KotlinBase <ExampleKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Community")))
@interface ExampleCommunity : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ExampleCommunity *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Post")))
@interface ExamplePost : KotlinBase
- (instancetype)initWithId:(NSString *)id url:(NSString *)url title:(NSString *)title authorName:(NSString *)authorName __attribute__((swift_name("init(id:url:title:authorName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (ExamplePost *)doCopyId:(NSString *)id url:(NSString *)url title:(NSString *)title authorName:(NSString *)authorName __attribute__((swift_name("doCopy(id:url:title:authorName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authorName __attribute__((swift_name("authorName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostModel")))
@interface ExamplePostModel : ExampleBaseModel
- (instancetype)initWithRepository:(id<ExamplePostRepository>)repository viewUpdate:(void (^)(NSArray<ExamplePost *> *))viewUpdate __attribute__((swift_name("init(repository:viewUpdate:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)fetchPostsCommunityName:(NSString *)communityName __attribute__((swift_name("fetchPosts(communityName:)")));
@end;

__attribute__((swift_name("PostRepository")))
@protocol ExamplePostRepository
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditPostRepository")))
@interface ExampleRedditPostRepository : KotlinBase <ExamplePostRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditChildDTO")))
@interface ExampleRedditChildDTO : KotlinBase
- (instancetype)initWithKind:(NSString *)kind data:(ExampleRedditPostDTO *)data __attribute__((swift_name("init(kind:data:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ExampleRedditPostDTO *)component2 __attribute__((swift_name("component2()")));
- (ExampleRedditChildDTO *)doCopyKind:(NSString *)kind data:(ExampleRedditPostDTO *)data __attribute__((swift_name("doCopy(kind:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ExampleRedditPostDTO *data __attribute__((swift_name("data")));
@property (readonly) NSString *kind __attribute__((swift_name("kind")));
@property (readonly) ExampleRedditPostDTO * _Nullable post __attribute__((swift_name("post")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditChildDTO.Companion")))
@interface ExampleRedditChildDTOCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExampleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditDataDTO")))
@interface ExampleRedditDataDTO : KotlinBase
- (instancetype)initWithChildren:(NSArray<ExampleRedditChildDTO *> *)children __attribute__((swift_name("init(children:)"))) __attribute__((objc_designated_initializer));
- (NSArray<ExampleRedditChildDTO *> *)component1 __attribute__((swift_name("component1()")));
- (ExampleRedditDataDTO *)doCopyChildren:(NSArray<ExampleRedditChildDTO *> *)children __attribute__((swift_name("doCopy(children:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<ExampleRedditChildDTO *> *children __attribute__((swift_name("children")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditDataDTO.Companion")))
@interface ExampleRedditDataDTOCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExampleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditPostDTO")))
@interface ExampleRedditPostDTO : KotlinBase
- (instancetype)initWithId:(NSString *)id url:(NSString *)url title:(NSString *)title authorName:(NSString *)authorName __attribute__((swift_name("init(id:url:title:authorName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (ExampleRedditPostDTO *)doCopyId:(NSString *)id url:(NSString *)url title:(NSString *)title authorName:(NSString *)authorName __attribute__((swift_name("doCopy(id:url:title:authorName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authorName __attribute__((swift_name("authorName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditPostDTO.Companion")))
@interface ExampleRedditPostDTOCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExampleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditPostResultDTO")))
@interface ExampleRedditPostResultDTO : KotlinBase
- (instancetype)initWithData:(ExampleRedditDataDTO *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (ExampleRedditDataDTO *)component1 __attribute__((swift_name("component1()")));
- (ExampleRedditPostResultDTO *)doCopyData:(ExampleRedditDataDTO *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ExampleRedditDataDTO *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedditPostResultDTO.Companion")))
@interface ExampleRedditPostResultDTOCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ExampleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinOSKt")))
@interface ExampleKoinOSKt : KotlinBase
+ (ExampleKoin_coreKoinApplication *)doInitKoin __attribute__((swift_name("doInitKoin()")));
@property (class, readonly) ExampleKoin_coreModule *platformModule __attribute__((swift_name("platformModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformOSKt")))
@interface ExamplePlatformOSKt : KotlinBase
+ (int64_t)currentTimeInMillis __attribute__((swift_name("currentTimeInMillis()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface ExampleKoinKt : KotlinBase
+ (ExampleKoin_coreKoinApplication *)doInitKoinAppDeclaration:(void (^)(ExampleKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoin(appDeclaration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface ExampleKoin_coreKoin : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)bindPrimaryType:(id<ExampleKotlinKClass>)primaryType secondaryType:(id<ExampleKotlinKClass>)secondaryType parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createRootScope __attribute__((swift_name("createRootScope()")));
- (ExampleKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<ExampleKoin_coreQualifier>)qualifier __attribute__((swift_name("createScope(scopeId:qualifier:)")));
- (void)declareInstance:(id)instance qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ExampleKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<ExampleKotlinKClass>)clazz qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id _Nullable)getQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (ExampleKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<ExampleKoin_coreQualifier>)qualifier __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:)")));
- (id _Nullable)getOrNullQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key defaultValue:(id _Nullable)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (ExampleKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (ExampleKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<ExampleKotlinLazy>)injectQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:parameters:)")));
- (id<ExampleKotlinLazy>)injectOrNullQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:parameters:)")));
- (void)loadModulesModules:(NSArray<ExampleKoin_coreModule *> *)modules __attribute__((swift_name("loadModules(modules:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (BOOL)unloadModulesModules:(NSArray<ExampleKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property ExampleKoin_coreLogger *_logger __attribute__((swift_name("_logger")));
@property (readonly) ExampleMutableSet<ExampleKoin_coreModule *> *_modules __attribute__((swift_name("_modules")));
@property (readonly) ExampleKoin_corePropertyRegistry *_propertyRegistry __attribute__((swift_name("_propertyRegistry")));
@property (readonly) ExampleKoin_coreScopeRegistry *_scopeRegistry __attribute__((swift_name("_scopeRegistry")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol ExampleKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<ExampleKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ExampleKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol ExampleKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<ExampleKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<ExampleKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<ExampleKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol ExampleKotlinx_serialization_runtimeKSerializer <ExampleKotlinx_serialization_runtimeSerializationStrategy, ExampleKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface ExampleKoin_coreKoinApplication : KotlinBase
- (void)close __attribute__((swift_name("close()")));
- (ExampleKoin_coreKoinApplication *)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (ExampleKoin_coreKoinApplication *)loggerLogger:(ExampleKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (ExampleKoin_coreKoinApplication *)modulesModules:(ExampleKotlinArray *)modules __attribute__((swift_name("modules(modules:)")));
- (ExampleKoin_coreKoinApplication *)modulesModules_:(NSArray<ExampleKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (ExampleKoin_coreKoinApplication *)modulesModules__:(ExampleKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (ExampleKoin_coreKoinApplication *)printLoggerLevel:(ExampleKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (ExampleKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<ExampleKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(ExampleKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) ExampleKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface ExampleKoin_coreModule : KotlinBase
- (instancetype)initWithCreateAtStart:(BOOL)createAtStart override:(BOOL)override __attribute__((swift_name("init(createAtStart:override:)"))) __attribute__((objc_designated_initializer));
- (ExampleKoin_coreBeanDefinition *)factoryQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override threadScope:(ExampleKoin_coreThreadScope *)threadScope definition:(id _Nullable (^)(ExampleKoin_coreScope *, ExampleKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:threadScope:definition:)")));
- (ExampleKoin_coreOptions *)makeOptionsOverride:(BOOL)override createdAtStart:(BOOL)createdAtStart __attribute__((swift_name("makeOptions(override:createdAtStart:)")));
- (NSArray<ExampleKoin_coreModule *> *)plusModule:(ExampleKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<ExampleKoin_coreQualifier>)qualifier scopeSet:(void (^)(ExampleKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (ExampleKoin_coreBeanDefinition *)singleQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart override:(BOOL)override threadScope:(ExampleKoin_coreThreadScope *)threadScope definition:(id _Nullable (^)(ExampleKoin_coreScope *, ExampleKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:createdAtStart:override:threadScope:definition:)")));
@property (readonly) BOOL createAtStart __attribute__((swift_name("createAtStart")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) BOOL override __attribute__((swift_name("override")));
@property (readonly) ExampleKoin_coreScopeDefinition *rootScope __attribute__((swift_name("rootScope")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ExampleKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ExampleKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol ExampleKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol ExampleKotlinKClass <ExampleKotlinKDeclarationContainer, ExampleKotlinKAnnotatedElement, ExampleKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreDefinitionParameters")))
@interface ExampleKoin_coreDefinitionParameters : KotlinBase
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) ExampleKotlinArray *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface ExampleKoin_coreScope : KotlinBase
- (instancetype)initWithId:(NSString *)id _scopeDefinition:(ExampleKoin_coreScopeDefinition *)_scopeDefinition _koin:(ExampleKoin_coreKoin *)_koin __attribute__((swift_name("init(id:_scopeDefinition:_koin:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)bindPrimaryType:(id<ExampleKotlinKClass>)primaryType secondaryType:(id<ExampleKotlinKClass>)secondaryType parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)close __attribute__((swift_name("close()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ExampleKoin_coreScopeDefinition *)component2 __attribute__((swift_name("component2()")));
- (ExampleKoin_coreKoin *)component3 __attribute__((swift_name("component3()")));
- (ExampleKoin_coreScope *)doCopyId:(NSString *)id _scopeDefinition:(ExampleKoin_coreScopeDefinition *)_scopeDefinition _koin:(ExampleKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(id:_scopeDefinition:_koin:)")));
- (void)declareInstance:(id)instance qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ExampleKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override threadScope:(ExampleKoin_coreThreadScope *)threadScope __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:threadScope:)")));
- (void)dropInstancesScopeDefinition:(ExampleKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("dropInstances(scopeDefinition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<ExampleKotlinKClass>)clazz qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id _Nullable)getQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<ExampleKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (ExampleKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<ExampleKotlinKClass>)clazz qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key defaultValue:(id _Nullable)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (ExampleKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ExampleKotlinLazy>)injectQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:parameters:)")));
- (id<ExampleKotlinLazy>)injectOrNullQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:parameters:)")));
- (void)loadDefinitionsScopeDefinition:(ExampleKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("loadDefinitions(scopeDefinition:)")));
- (void)registerCallbackCallback:(id<ExampleKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ExampleKoin_coreInstanceRegistry *_instanceRegistry __attribute__((swift_name("_instanceRegistry")));
@property (readonly) ExampleKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) ExampleKoin_coreScopeDefinition *_scopeDefinition __attribute__((swift_name("_scopeDefinition")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol ExampleKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol ExampleKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface ExampleKoin_coreLogger : KotlinBase
- (instancetype)initWithLevel:(ExampleKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(ExampleKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLevel:(ExampleKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property ExampleKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface ExampleKoin_corePropertyRegistry : KotlinBase
- (instancetype)initWith_koin:(ExampleKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@property (readonly) ExampleKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface ExampleKoin_coreScopeRegistry : KotlinBase
- (instancetype)initWith_koin:(ExampleKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (ExampleKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<ExampleKoin_coreQualifier>)qualifier __attribute__((swift_name("createScope(scopeId:qualifier:)")));
- (void)deleteScopeScope:(ExampleKoin_coreScope *)scope __attribute__((swift_name("deleteScope(scope:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (ExampleKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (void)unloadModulesModules:(id)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(ExampleKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property ExampleKoin_coreScope * _Nullable _rootScope __attribute__((swift_name("_rootScope")));
@property ExampleKoin_coreScopeDefinition * _Nullable _rootScopeDefinition __attribute__((swift_name("_rootScopeDefinition")));
@property (readonly) ExampleKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSDictionary<NSString *, ExampleKoin_coreScopeDefinition *> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@property (readonly) NSDictionary<NSString *, ExampleKoin_coreScope *> *scopes __attribute__((swift_name("scopes")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol ExampleKotlinx_serialization_runtimeEncoder
@required
- (id<ExampleKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(ExampleKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<ExampleKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(ExampleKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<ExampleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<ExampleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<ExampleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol ExampleKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<ExampleKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<ExampleKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) ExampleKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol ExampleKotlinx_serialization_runtimeDecoder
@required
- (id<ExampleKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(ExampleKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (ExampleKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ExampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<ExampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<ExampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<ExampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<ExampleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) ExampleKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ExampleKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(ExampleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ExampleKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol ExampleKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface ExampleKotlinEnum : KotlinBase <ExampleKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(ExampleKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface ExampleKoin_coreLevel : ExampleKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ExampleKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) ExampleKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) ExampleKoin_coreLevel *error __attribute__((swift_name("error")));
- (int32_t)compareToOther:(ExampleKoin_coreLevel *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface ExampleKoin_coreBeanDefinition : KotlinBase
- (instancetype)initWithScopeDefinition:(ExampleKoin_coreScopeDefinition *)scopeDefinition primaryType:(id<ExampleKotlinKClass>)primaryType qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ExampleKoin_coreScope *, ExampleKoin_coreDefinitionParameters *))definition kind:(ExampleKoin_coreKind *)kind secondaryTypes:(NSArray<id<ExampleKotlinKClass>> *)secondaryTypes options:(ExampleKoin_coreOptions *)options threadScope:(ExampleKoin_coreThreadScope *)threadScope properties:(ExampleKoin_coreProperties *)properties callbacks:(ExampleKoin_coreCallbacks *)callbacks __attribute__((swift_name("init(scopeDefinition:primaryType:qualifier:definition:kind:secondaryTypes:options:threadScope:properties:callbacks:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canBindPrimary:(id<ExampleKotlinKClass>)primary secondary:(id<ExampleKotlinKClass>)secondary __attribute__((swift_name("canBind(primary:secondary:)")));
- (ExampleKoin_coreScopeDefinition *)component1 __attribute__((swift_name("component1()")));
- (ExampleKoin_coreCallbacks *)component10 __attribute__((swift_name("component10()")));
- (id<ExampleKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<ExampleKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable (^)(ExampleKoin_coreScope *, ExampleKoin_coreDefinitionParameters *))component4 __attribute__((swift_name("component4()")));
- (ExampleKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<ExampleKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (ExampleKoin_coreOptions *)component7 __attribute__((swift_name("component7()")));
- (ExampleKoin_coreThreadScope *)component8 __attribute__((swift_name("component8()")));
- (ExampleKoin_coreProperties *)component9 __attribute__((swift_name("component9()")));
- (ExampleKoin_coreBeanDefinition *)doCopyScopeDefinition:(ExampleKoin_coreScopeDefinition *)scopeDefinition primaryType:(id<ExampleKotlinKClass>)primaryType qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ExampleKoin_coreScope *, ExampleKoin_coreDefinitionParameters *))definition kind:(ExampleKoin_coreKind *)kind secondaryTypes:(NSArray<id<ExampleKotlinKClass>> *)secondaryTypes options:(ExampleKoin_coreOptions *)options threadScope:(ExampleKoin_coreThreadScope *)threadScope properties:(ExampleKoin_coreProperties *)properties callbacks:(ExampleKoin_coreCallbacks *)callbacks __attribute__((swift_name("doCopy(scopeDefinition:primaryType:qualifier:definition:kind:secondaryTypes:options:threadScope:properties:callbacks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<ExampleKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<ExampleKotlinKClass>)clazz qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(ExampleKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ExampleKoin_coreCallbacks *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) id _Nullable (^definition)(ExampleKoin_coreScope *, ExampleKoin_coreDefinitionParameters *) __attribute__((swift_name("definition")));
@property (readonly) ExampleKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) ExampleKoin_coreOptions *options __attribute__((swift_name("options")));
@property (readonly) id<ExampleKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) ExampleKoin_coreProperties *properties __attribute__((swift_name("properties")));
@property (readonly) id<ExampleKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) ExampleKoin_coreScopeDefinition *scopeDefinition __attribute__((swift_name("scopeDefinition")));
@property (readonly) NSArray<id<ExampleKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@property (readonly) ExampleKoin_coreThreadScope *threadScope __attribute__((swift_name("threadScope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreThreadScope")))
@interface ExampleKoin_coreThreadScope : ExampleKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ExampleKoin_coreThreadScope *main __attribute__((swift_name("main")));
@property (class, readonly) ExampleKoin_coreThreadScope *shared __attribute__((swift_name("shared")));
@property (class, readonly) ExampleKoin_coreThreadScope *threadlocal __attribute__((swift_name("threadlocal")));
- (int32_t)compareToOther:(ExampleKoin_coreThreadScope *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreOptions")))
@interface ExampleKoin_coreOptions : KotlinBase
- (instancetype)initWithIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override __attribute__((swift_name("init(isCreatedAtStart:override:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (ExampleKoin_coreOptions *)doCopyIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override __attribute__((swift_name("doCopy(isCreatedAtStart:override:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isCreatedAtStart __attribute__((swift_name("isCreatedAtStart")));
@property BOOL override __attribute__((swift_name("override")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface ExampleKoin_coreScopeDSL : KotlinBase
- (instancetype)initWithScopeDefinition:(ExampleKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("init(scopeDefinition:)"))) __attribute__((objc_designated_initializer));
- (ExampleKoin_coreBeanDefinition *)factoryQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override threadScope:(ExampleKoin_coreThreadScope *)threadScope definition:(id _Nullable (^)(ExampleKoin_coreScope *, ExampleKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:threadScope:definition:)")));
- (ExampleKoin_coreBeanDefinition *)scopedQualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override threadScope:(ExampleKoin_coreThreadScope *)threadScope definition:(id _Nullable (^)(ExampleKoin_coreScope *, ExampleKoin_coreDefinitionParameters *))definition __attribute__((swift_name("scoped(qualifier:override:threadScope:definition:)")));
@property (readonly) ExampleKoin_coreScopeDefinition *scopeDefinition __attribute__((swift_name("scopeDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDefinition")))
@interface ExampleKoin_coreScopeDefinition : KotlinBase
- (instancetype)initWithQualifier:(id<ExampleKoin_coreQualifier>)qualifier isRoot:(BOOL)isRoot _def:(ExampleMutableSet<ExampleKoin_coreBeanDefinition *> *)_def __attribute__((swift_name("init(qualifier:isRoot:_def:)"))) __attribute__((objc_designated_initializer));
- (ExampleKoin_coreScopeDefinition *)doCopy __attribute__((swift_name("doCopy()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)removeBeanDefinition:(ExampleKoin_coreBeanDefinition *)beanDefinition __attribute__((swift_name("remove(beanDefinition:)")));
- (void)saveBeanDefinition:(ExampleKoin_coreBeanDefinition *)beanDefinition forceOverride:(BOOL)forceOverride __attribute__((swift_name("save(beanDefinition:forceOverride:)")));
- (ExampleKoin_coreBeanDefinition *)saveNewDefinitionInstance:(id)instance qualifier:(id<ExampleKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ExampleKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override threadScope:(ExampleKoin_coreThreadScope *)threadScope __attribute__((swift_name("saveNewDefinition(instance:qualifier:secondaryTypes:override:threadScope:)")));
- (void)unloadDefinitionsScopeDefinition:(ExampleKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("unloadDefinitions(scopeDefinition:)")));
@property (readonly) NSSet<ExampleKoin_coreBeanDefinition *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) id<ExampleKoin_coreQualifier> qualifier __attribute__((swift_name("qualifier")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol ExampleKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(ExampleKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface ExampleKoin_coreInstanceRegistry : KotlinBase
- (instancetype)initWith_koin:(ExampleKoin_coreKoin *)_koin _scope:(ExampleKoin_coreScope *)_scope __attribute__((swift_name("init(_koin:_scope:)"))) __attribute__((objc_designated_initializer));
- (void)saveDefinitionDefinition:(ExampleKoin_coreBeanDefinition *)definition override:(BOOL)override __attribute__((swift_name("saveDefinition(definition:override:)")));
@property (readonly) ExampleKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) ExampleKoin_coreScope *_scope __attribute__((swift_name("_scope")));
@property (readonly) NSDictionary<NSString *, ExampleKoin_coreInstanceFactory *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol ExampleKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<ExampleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<ExampleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<ExampleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol ExampleKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<ExampleKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<ExampleKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<ExampleKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<ExampleKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<ExampleKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<ExampleKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<ExampleKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol ExampleKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface ExampleKotlinx_serialization_runtimeSerialKind : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol ExampleKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<ExampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<ExampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<ExampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<ExampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<ExampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<ExampleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) ExampleKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ExampleKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface ExampleKotlinx_serialization_runtimeUpdateMode : ExampleKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ExampleKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) ExampleKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) ExampleKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(ExampleKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol ExampleKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface ExampleKoin_coreKind : ExampleKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ExampleKoin_coreKind *single __attribute__((swift_name("single")));
@property (class, readonly) ExampleKoin_coreKind *factory __attribute__((swift_name("factory")));
- (int32_t)compareToOther:(ExampleKoin_coreKind *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreProperties")))
@interface ExampleKoin_coreProperties : KotlinBase
- (instancetype)initWithData:(ExampleMutableDictionary<NSString *, id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (ExampleKoin_coreProperties *)doCopyData:(ExampleMutableDictionary<NSString *, id> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (id _Nullable)getOrNullKey:(NSString *)key __attribute__((swift_name("getOrNull(key:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("set(key:value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface ExampleKoin_coreCallbacks : KotlinBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(id _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(id _Nullable))component1 __attribute__((swift_name("component1()")));
- (ExampleKoin_coreCallbacks *)doCopyOnClose:(void (^ _Nullable)(id _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(id _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface ExampleKoin_coreInstanceFactory : KotlinBase
- (instancetype)initWith_koin:(ExampleKoin_coreKoin *)_koin beanDefinition:(ExampleKoin_coreBeanDefinition *)beanDefinition __attribute__((swift_name("init(_koin:beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)createContext:(ExampleKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)drop __attribute__((swift_name("drop()")));
- (id _Nullable)getContext:(ExampleKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreated __attribute__((swift_name("isCreated()")));
@property (readonly) ExampleKoin_coreBeanDefinition *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol ExampleKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<ExampleKotlinKClass>)kClass serializer:(id<ExampleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<ExampleKotlinKClass>)baseClass actualClass:(id<ExampleKotlinKClass>)actualClass actualSerializer:(id<ExampleKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface ExampleKoin_coreInstanceContext : KotlinBase
- (instancetype)initWithKoin:(ExampleKoin_coreKoin *)koin scope:(ExampleKoin_coreScope *)scope _parameters:(ExampleKoin_coreDefinitionParameters *(^ _Nullable)(void))_parameters __attribute__((swift_name("init(koin:scope:_parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) ExampleKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) ExampleKoin_coreDefinitionParameters *parameters __attribute__((swift_name("parameters")));
@property (readonly) ExampleKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
