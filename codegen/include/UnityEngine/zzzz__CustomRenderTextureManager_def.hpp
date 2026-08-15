#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTextureManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomRenderTextureManager)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class CustomRenderTexture;
}
// Forward declare root types
namespace UnityEngine {
class CustomRenderTextureManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::CustomRenderTextureManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CustomRenderTextureManager*, "UnityEngine", "CustomRenderTextureManager");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CustomRenderTextureManager
class CORDL_TYPE CustomRenderTextureManager : public ::System::Object {
public:
// Declarations
/// @brief Field initializeTriggered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializeTriggered, put=setStaticF_initializeTriggered)) ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  initializeTriggered;

/// @brief Field textureLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_textureLoaded, put=setStaticF_textureLoaded)) ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  textureLoaded;

/// @brief Field textureUnloaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_textureUnloaded, put=setStaticF_textureUnloaded)) ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  textureUnloaded;

/// @brief Field updateTriggered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_updateTriggered, put=setStaticF_updateTriggered)) ::System::Action_2<::UnityW<::UnityEngine::CustomRenderTexture>,int32_t>*  updateTriggered;

/// @brief Method InvokeOnTextureLoaded_Internal, addr 0x182243770, size 0x30, virtual false, abstract: false, final false
static inline void InvokeOnTextureLoaded_Internal(::UnityEngine::CustomRenderTexture*  source) ;

/// @brief Method InvokeOnTextureUnloaded_Internal, addr 0x1822437a0, size 0x30, virtual false, abstract: false, final false
static inline void InvokeOnTextureUnloaded_Internal(::UnityEngine::CustomRenderTexture*  source) ;

/// @brief Method InvokeTriggerInitialize, addr 0x1822437d0, size 0x30, virtual false, abstract: false, final false
static inline void InvokeTriggerInitialize(::UnityEngine::CustomRenderTexture*  crt) ;

/// @brief Method InvokeTriggerUpdate, addr 0x182243800, size 0x30, virtual false, abstract: false, final false
static inline void InvokeTriggerUpdate(::UnityEngine::CustomRenderTexture*  crt, int32_t  updateCount) ;

static inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* getStaticF_initializeTriggered() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* getStaticF_textureLoaded() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* getStaticF_textureUnloaded() ;

static inline ::System::Action_2<::UnityW<::UnityEngine::CustomRenderTexture>,int32_t>* getStaticF_updateTriggered() ;

static inline void setStaticF_initializeTriggered(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  value) ;

static inline void setStaticF_textureLoaded(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  value) ;

static inline void setStaticF_textureUnloaded(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  value) ;

static inline void setStaticF_updateTriggered(::System::Action_2<::UnityW<::UnityEngine::CustomRenderTexture>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomRenderTextureManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomRenderTextureManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomRenderTextureManager(CustomRenderTextureManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomRenderTextureManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomRenderTextureManager(CustomRenderTextureManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CustomRenderTextureManager) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
