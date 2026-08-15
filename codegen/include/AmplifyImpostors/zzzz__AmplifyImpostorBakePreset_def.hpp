#pragma once
// IWYU pragma private; include "AmplifyImpostors/AmplifyImpostorBakePreset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AmplifyImpostorBakePreset)
namespace AmplifyImpostors {
class TextureOutput;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace AmplifyImpostors {
class AmplifyImpostorBakePreset;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::AmplifyImpostorBakePreset*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::AmplifyImpostorBakePreset*, "AmplifyImpostors", "AmplifyImpostorBakePreset");
// Dependencies UnityEngine.ScriptableObject
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.AmplifyImpostorBakePreset
class CORDL_TYPE AmplifyImpostorBakePreset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AlphaIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_AlphaIndex, put=__cordl_internal_set_AlphaIndex)) int32_t  AlphaIndex;

/// @brief Field BakeShader, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BakeShader, put=__cordl_internal_set_BakeShader)) ::UnityW<::UnityEngine::Shader>  BakeShader;

/// @brief Field Output, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Output, put=__cordl_internal_set_Output)) ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  Output;

/// @brief Field RuntimeShader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RuntimeShader, put=__cordl_internal_set_RuntimeShader)) ::UnityW<::UnityEngine::Shader>  RuntimeShader;

static inline ::AmplifyImpostors::AmplifyImpostorBakePreset* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_AlphaIndex() const;

constexpr int32_t& __cordl_internal_get_AlphaIndex() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_BakeShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_BakeShader() ;

constexpr ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>* const& __cordl_internal_get_Output() const;

constexpr ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*& __cordl_internal_get_Output() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_RuntimeShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_RuntimeShader() ;

constexpr void __cordl_internal_set_AlphaIndex(int32_t  value) ;

constexpr void __cordl_internal_set_BakeShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_Output(::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  value) ;

constexpr void __cordl_internal_set_RuntimeShader(::UnityW<::UnityEngine::Shader>  value) ;

/// @brief Method .ctor, addr 0x1802d5920, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmplifyImpostorBakePreset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmplifyImpostorBakePreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmplifyImpostorBakePreset(AmplifyImpostorBakePreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmplifyImpostorBakePreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmplifyImpostorBakePreset(AmplifyImpostorBakePreset const& ) = delete;

/// @brief Field DefaultOutputCount offset 0xffffffff size 0x4
static constexpr int32_t  DefaultOutputCount{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20957};

/// @brief Field BakeShader, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___BakeShader;

/// @brief Field RuntimeShader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___RuntimeShader;

/// @brief Field AlphaIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___AlphaIndex;

/// @brief Field Output, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  ___Output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorBakePreset, ___BakeShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorBakePreset, ___RuntimeShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorBakePreset, ___AlphaIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorBakePreset, ___Output) == 0x30, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::AmplifyImpostorBakePreset) == 0x38, "Size mismatch!");

} // namespace end def AmplifyImpostors
