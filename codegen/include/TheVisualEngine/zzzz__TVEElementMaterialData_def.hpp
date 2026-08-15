#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementMaterialData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TVEElementMaterialData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TheVisualEngine {
class TVEElementPropertyData;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEElementMaterialData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEElementMaterialData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElementMaterialData*, "TheVisualEngine", "TVEElementMaterialData");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEElementMaterialData
class CORDL_TYPE TVEElementMaterialData : public ::System::Object {
public:
// Declarations
/// @brief Field props, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_props, put=__cordl_internal_set_props)) ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementPropertyData*>*  props;

/// @brief Field shader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shader, put=__cordl_internal_set_shader)) ::UnityW<::UnityEngine::Shader>  shader;

/// @brief Field shaderName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaderName, put=__cordl_internal_set_shaderName)) ::StringW  shaderName;

static inline ::TheVisualEngine::TVEElementMaterialData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementPropertyData*>* const& __cordl_internal_get_props() const;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementPropertyData*>*& __cordl_internal_get_props() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_shader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_shader() ;

constexpr ::StringW const& __cordl_internal_get_shaderName() const;

constexpr ::StringW& __cordl_internal_get_shaderName() ;

constexpr void __cordl_internal_set_props(::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementPropertyData*>*  value) ;

constexpr void __cordl_internal_set_shader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_shaderName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1804b9240, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEElementMaterialData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEElementMaterialData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEElementMaterialData(TVEElementMaterialData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEElementMaterialData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEElementMaterialData(TVEElementMaterialData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19604};

/// @brief Field shader, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___shader;

/// @brief Field shaderName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___shaderName;

/// @brief Field props, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementPropertyData*>*  ___props;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElementMaterialData, ___shader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementMaterialData, ___shaderName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementMaterialData, ___props) == 0x20, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElementMaterialData) == 0x28, "Size mismatch!");

} // namespace end def TheVisualEngine
