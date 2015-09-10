// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MCPLUGIN_MCComponent_generated_h
#error "MCComponent.generated.h already included, missing '#pragma once' in MCComponent.h"
#endif
#define MCPLUGIN_MCComponent_generated_h

#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMesh) \
	{ \
		P_FINISH; \
		this->UpdateMesh(); \
	} \
 \
	DECLARE_FUNCTION(execAddVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_FINISH; \
		this->AddVoxel(Z_Param_Point); \
	}


#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMesh) \
	{ \
		P_FINISH; \
		this->UpdateMesh(); \
	} \
 \
	DECLARE_FUNCTION(execAddVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_FINISH; \
		this->AddVoxel(Z_Param_Point); \
	}


#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMCComponent(); \
	friend MCPLUGIN_API class UClass* Z_Construct_UClass_UMCComponent(); \
	public: \
	DECLARE_CLASS(UMCComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0), 0, MCplugin, NO_API) \
	DECLARE_SERIALIZER(UMCComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMCComponent*>(this); }


#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesUMCComponent(); \
	friend MCPLUGIN_API class UClass* Z_Construct_UClass_UMCComponent(); \
	public: \
	DECLARE_CLASS(UMCComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0), 0, MCplugin, NO_API) \
	DECLARE_SERIALIZER(UMCComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMCComponent*>(this); }


#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMCComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMCComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMCComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMCComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMCComponent(const UMCComponent& InCopy); \
public:


#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMCComponent(const UMCComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMCComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMCComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMCComponent)


#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_6_PROLOG
#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_RPC_WRAPPERS \
	MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_INCLASS \
	MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_POP


#define MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_INCLASS_NO_PURE_DECLS \
	MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_POP


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCTest_Plugins_MCplugin_Source_MCplugin_Public_MCComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
