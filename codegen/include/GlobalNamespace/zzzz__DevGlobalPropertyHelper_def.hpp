#pragma once
// IWYU pragma private; include "GlobalNamespace/DevGlobalPropertyHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DevGlobalPropertyHelper)
namespace GlobalNamespace {
struct DevGlobalPropertyHelper_VectorProperty;
}
// Forward declare root types
namespace GlobalNamespace {
class DevGlobalPropertyHelper;
}
namespace GlobalNamespace {
struct DevGlobalPropertyHelper_VectorProperty;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevGlobalPropertyHelper*);
MARK_VAL_T(::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevGlobalPropertyHelper*, "", "DevGlobalPropertyHelper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty, "", "DevGlobalPropertyHelper/VectorProperty");
// Dependencies UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: DevGlobalPropertyHelper/VectorProperty
struct CORDL_TYPE DevGlobalPropertyHelper_VectorProperty {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DevGlobalPropertyHelper_VectorProperty() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr DevGlobalPropertyHelper_VectorProperty(::StringW  name, ::UnityEngine::Vector4  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4903};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field value, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Vector4  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies DevGlobalPropertyHelper::VectorProperty, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevGlobalPropertyHelper
class CORDL_TYPE DevGlobalPropertyHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VectorProperty = ::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty;

/// @brief Field vectorProperties, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_vectorProperties, put=__cordl_internal_set_vectorProperties)) ::ArrayW<::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty>  vectorProperties;

static inline ::GlobalNamespace::DevGlobalPropertyHelper* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty> const& __cordl_internal_get_vectorProperties() const;

constexpr ::ArrayW<::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty>& __cordl_internal_get_vectorProperties() ;

constexpr void __cordl_internal_set_vectorProperties(::ArrayW<::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevGlobalPropertyHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevGlobalPropertyHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevGlobalPropertyHelper(DevGlobalPropertyHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevGlobalPropertyHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevGlobalPropertyHelper(DevGlobalPropertyHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4904};

/// @brief Field vectorProperties, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty>  ___vectorProperties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevGlobalPropertyHelper, ___vectorProperties) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevGlobalPropertyHelper) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
