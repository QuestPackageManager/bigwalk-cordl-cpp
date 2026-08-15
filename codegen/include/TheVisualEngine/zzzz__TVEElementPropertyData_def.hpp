#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementPropertyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TheVisualEngine/zzzz__TVEPropertyType_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TVEElementPropertyData)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEElementPropertyData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEElementPropertyData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElementPropertyData*, "TheVisualEngine", "TVEElementPropertyData");
// Dependencies System.Object, TheVisualEngine.TVEPropertyType, UnityEngine.Vector4
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEElementPropertyData
class CORDL_TYPE TVEElementPropertyData : public ::System::Object {
public:
// Declarations
/// @brief Field prop, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prop, put=__cordl_internal_set_prop)) ::StringW  prop;

/// @brief Field texture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture>  texture;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::TheVisualEngine::TVEPropertyType  type;

/// @brief Field value, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) float_t  value;

/// @brief Field vector, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_vector, put=__cordl_internal_set_vector)) ::UnityEngine::Vector4  vector;

static inline ::TheVisualEngine::TVEElementPropertyData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_prop() const;

constexpr ::StringW& __cordl_internal_get_prop() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_texture() ;

constexpr ::TheVisualEngine::TVEPropertyType const& __cordl_internal_get_type() const;

constexpr ::TheVisualEngine::TVEPropertyType& __cordl_internal_get_type() ;

constexpr float_t const& __cordl_internal_get_value() const;

constexpr float_t& __cordl_internal_get_value() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_vector() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_vector() ;

constexpr void __cordl_internal_set_prop(::StringW  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_type(::TheVisualEngine::TVEPropertyType  value) ;

constexpr void __cordl_internal_set_value(float_t  value) ;

constexpr void __cordl_internal_set_vector(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEElementPropertyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEElementPropertyData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEElementPropertyData(TVEElementPropertyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEElementPropertyData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEElementPropertyData(TVEElementPropertyData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19605};

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::TheVisualEngine::TVEPropertyType  ___type;

/// @brief Field prop, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___prop;

/// @brief Field texture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___texture;

/// @brief Field vector, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___vector;

/// @brief Field value, offset: 0x38, size: 0x4, def value: None
 float_t  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElementPropertyData, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementPropertyData, ___prop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementPropertyData, ___texture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementPropertyData, ___vector) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementPropertyData, ___value) == 0x38, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElementPropertyData) == 0x40, "Size mismatch!");

} // namespace end def TheVisualEngine
