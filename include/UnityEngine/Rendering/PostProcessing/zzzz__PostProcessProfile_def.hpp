#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PostProcessProfile)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessProfile___c;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessProfile;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessProfile___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessProfile*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessProfile*, "UnityEngine.Rendering.PostProcessing", "PostProcessProfile");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*, "UnityEngine.Rendering.PostProcessing", "PostProcessProfile/<>c");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c
class CORDL_TYPE PostProcessProfile___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  __9__2_0;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c* New_ctor() ;

/// @brief Method <OnEnable>b__2_0, addr 0x18143d030, size 0x10, virtual false, abstract: false, final false
inline bool _OnEnable_b__2_0(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  x) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*  value) ;

static inline void setStaticF___9__2_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessProfile___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessProfile___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessProfile___c(PostProcessProfile___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessProfile___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessProfile___c(PostProcessProfile___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18640};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessProfile
class CORDL_TYPE PostProcessProfile : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c;

/// @brief Field isDirty, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDirty, put=__cordl_internal_set_isDirty)) bool  isDirty;

/// @brief Field settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  settings;

/// @brief Method AddSettings, addr 0x181fca070, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> AddSettings(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  effect) ;

/// @brief Method AddSettings, addr 0x181fc9f40, size 0x130, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> AddSettings(::System::Type*  type) ;

/// @brief Method AddSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T AddSettings() ;

/// @brief Method GetSetting, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetSetting() ;

/// @brief Method HasSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool HasSettings() ;

/// @brief Method HasSettings, addr 0x181fca130, size 0x80, virtual false, abstract: false, final false
inline bool HasSettings(::System::Type*  type) ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessProfile* New_ctor() ;

/// @brief Method OnEnable, addr 0x181fca1b0, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RemoveSettings() ;

/// @brief Method RemoveSettings, addr 0x181fca260, size 0xb0, virtual false, abstract: false, final false
inline void RemoveSettings(::System::Type*  type) ;

/// @brief Method TryGetSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetSettings(::by_ref<T>  outSetting) ;

constexpr bool const& __cordl_internal_get_isDirty() const;

constexpr bool& __cordl_internal_get_isDirty() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>* const& __cordl_internal_get_settings() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_isDirty(bool  value) ;

constexpr void __cordl_internal_set_settings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  value) ;

/// @brief Method .ctor, addr 0x181fca310, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessProfile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessProfile(PostProcessProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessProfile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessProfile(PostProcessProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18641};

/// @brief Field settings, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  ___settings;

/// @brief Field isDirty, offset: 0x20, size: 0x1, def value: None
 bool  ___isDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessProfile, ___settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessProfile, ___isDirty) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessProfile) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
