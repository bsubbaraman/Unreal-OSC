// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OSC_OscSettings_generated_h
#error "OscSettings.generated.h already included, missing '#pragma once' in OscSettings.h"
#endif
#define OSC_OscSettings_generated_h

#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_RPC_WRAPPERS
#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOscSettings(); \
	friend struct Z_Construct_UClass_UOscSettings_Statics; \
public: \
	DECLARE_CLASS(UOscSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOscSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOscSettings(); \
	friend struct Z_Construct_UClass_UOscSettings_Statics; \
public: \
	DECLARE_CLASS(UOscSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOscSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOscSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOscSettings) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOscSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOscSettings(UOscSettings&&); \
	NO_API UOscSettings(const UOscSettings&); \
public:


#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOscSettings(UOscSettings&&); \
	NO_API UOscSettings(const UOscSettings&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOscSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOscSettings)


#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_PRIVATE_PROPERTY_OFFSET
#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_16_PROLOG
#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_RPC_WRAPPERS \
	MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_INCLASS \
	MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_INCLASS_NO_PURE_DECLS \
	MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSC_API UClass* StaticClass<class UOscSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MITHC_OSC_Plugins_OSC_Source_OSC_Private_OscSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
