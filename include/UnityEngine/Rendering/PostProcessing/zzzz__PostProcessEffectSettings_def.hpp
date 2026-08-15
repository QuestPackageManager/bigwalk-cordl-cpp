#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEffectSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessEffectSettings)
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Rendering::PostProcessing {
class BoolParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class ParameterOverride;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings___c;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*, "UnityEngine.Rendering.PostProcessing", "PostProcessEffectSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings___c*, "UnityEngine.Rendering.PostProcessing", "PostProcessEffectSettings/<>c");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c
class CORDL_TYPE PostProcessEffectSettings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::System::Reflection::FieldInfo*,bool>*  __9__3_0;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Func_2<::System::Reflection::FieldInfo*,int32_t>*  __9__3_1;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings___c* New_ctor() ;

/// @brief Method <OnEnable>b__3_0, addr 0x181fd0460, size 0x50, virtual false, abstract: false, final false
inline bool _OnEnable_b__3_0(::System::Reflection::FieldInfo*  t) ;

/// @brief Method <OnEnable>b__3_1, addr 0x180972170, size 0x1b40, virtual false, abstract: false, final false
inline int32_t _OnEnable_b__3_1(::System::Reflection::FieldInfo*  t) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* getStaticF___9__3_0() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,int32_t>* getStaticF___9__3_1() ;

static inline void setStaticF___9(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value) ;

static inline void setStaticF___9__3_1(::System::Func_2<::System::Reflection::FieldInfo*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessEffectSettings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectSettings___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessEffectSettings___c(PostProcessEffectSettings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectSettings___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessEffectSettings___c(PostProcessEffectSettings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18626};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
class CORDL_TYPE PostProcessEffectSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings___c;

/// @brief Field active, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field enabled, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) ::UnityEngine::Rendering::PostProcessing::BoolParameter*  enabled;

/// @brief Field parameters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameters, put=__cordl_internal_set_parameters)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>*  parameters;

/// @brief Method GetHash, addr 0x181fc2570, size 0x160, virtual false, abstract: false, final false
inline int32_t GetHash() ;

/// @brief Method IsEnabledAndSupported, addr 0x181fc26d0, size 0x10, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings* New_ctor() ;

/// @brief Method OnDisable, addr 0x181fc26e0, size 0x150, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181fc2830, size 0x300, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetAllOverridesTo, addr 0x181fc2b30, size 0x160, virtual false, abstract: false, final false
inline void SetAllOverridesTo(bool  state, bool  excludeEnabled) ;

/// @brief Method <OnEnable>b__3_2, addr 0x181fc2c90, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::ParameterOverride* _OnEnable_b__3_2(::System::Reflection::FieldInfo*  t) ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& __cordl_internal_get_enabled() const;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& __cordl_internal_get_enabled() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>* const& __cordl_internal_get_parameters() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>*& __cordl_internal_get_parameters() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_enabled(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value) ;

constexpr void __cordl_internal_set_parameters(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>*  value) ;

/// @brief Method .ctor, addr 0x181fc2d00, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessEffectSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessEffectSettings(PostProcessEffectSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessEffectSettings(PostProcessEffectSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18627};

/// @brief Field active, offset: 0x18, size: 0x1, def value: None
 bool  ___active;

/// @brief Field enabled, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::BoolParameter*  ___enabled;

/// @brief Field parameters, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>*  ___parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings, ___active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings, ___enabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings, ___parameters) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
